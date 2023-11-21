#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9
int winner;
// preferences[i][j] is number of voters who prefer i over j
int preferences[MAX][MAX];
// locked[i][j] means i is locked in over j
bool locked[MAX][MAX];

// Each pair has a winner, loser
typedef struct
{
    int winner;
    int loser;
} pair;

// Array of candidates
string candidates[MAX];
pair pairs[MAX * (MAX - 1) / 2];

int pair_count;
int candidate_count;

// Function prototypes
bool vote(int rank, string name, int ranks[]);
void record_preferences(int ranks[]);
void add_pairs(void);
void sort_pairs(void);
void lock_pairs(void);
void print_winner(void);
int merge(int array[], int length, int start);


int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: tideman [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i] = argv[i + 1];
    }

    // Clear graph of locked in pairs
    // set preferences to 0
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            locked[i][j] = false;
            preferences[i][j] = 0;
        }
    }

    pair_count = 0;
    int voter_count = get_int("Number of voters: ");

    // Query for votes
    for (int i = 0; i < voter_count; i++)
    {
        // ranks[i] is voter's ith preference
        int ranks[candidate_count];

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            if (!vote(j, name, ranks))
            {
                printf("Invalid vote.\n");
                return 3;
            }
        }

        record_preferences(ranks);

        printf("\n");
    }

    add_pairs();
    sort_pairs();
    lock_pairs();
    print_winner();
    return 0;
}

// Update ranks given a new vote
bool vote(int rank, string name, int ranks[])
{
    for (int i = 0; i < candidate_count; i++){
        if (!strcmp(name, candidates[i])){
            ranks[rank] = i;
            return true;
        }
    }
    return false;
}

// Update preferences given one voter's ranks
void record_preferences(int ranks[])
{
    for (int i = 0; i < candidate_count; i++){
        for (int j = i+1; j < candidate_count; j++){
            preferences[ranks[i]][ranks[j]] += 1;
        }
    }
    return;
}

// Record pairs of candidates where one is preferred over the other
void add_pairs(void)
{   
    for (int i = 0; i < candidate_count; i++){
        for (int j = i; j < candidate_count; j++){
            if (preferences[i][j] > preferences[j][i]){
                pairs[pair_count].winner = i;
                pairs[pair_count].loser = j;
                pair_count++;
            }
            else if (preferences[i][j] < preferences[j][i]){
                pairs[pair_count].winner = j;
                pairs[pair_count].loser = i;
                pair_count++;
            }
        }
    }
    
    return;
}

// Sort pairs in decreasing order by strength of victory
void sort_pairs(void)
{
    //strength of pair at pairs index pair_count
    int pair_strength[pair_count];
    //get strength of each pair as int
    for (int i = 0; i < pair_count; i++){
        //pairs[i].winner = winner 
        pair_strength[i] = preferences[pairs[i].winner][pairs[i].loser] - preferences[pairs[i].loser][pairs[i].winner];
    }
    //sort pair_strength by smallest to biggest
    //pairs[..].winner und .loser
    //pair_strength_index is the index at which it was originally, so i dont have to sort pairs, just have to sort strength
    int pair_strength_index[pair_count];
    for (int i = 0; i < pair_count; i++){
        int biggest_element = 0;
        int biggestindex;
        for (int j = 0; j < pair_count - i; j++){
            if (pair_strength[j] > biggest_element){
                biggest_element = pair_strength[j];
                biggestindex = j;
                
            }
        }
        pair_strength[biggest_element] = pair_strength[(pair_count-1)-1]; 
        pair_strength[(pair_count-1)-i] = biggest_element;
        pair_strength_index[i] = biggestindex;
        pairs[biggest_element].winner, pairs[(pair_count-1)-1].winner = pairs[(pair_count-1)-1].winner, pairs[biggest_element].winner;
        pairs[biggest_element].loser, pairs[(pair_count-1)-1].loser = pairs[(pair_count-1)-1].loser, pairs[biggest_element].loser;

    }
    return;
}

// Lock pairs into the candidate graph in order, without creating cycles
void lock_pairs(void)
{
   //todo
    return;
}

// Print the winner of the election
void print_winner(void)
{
    printf("Winner: %s\n", candidates[winner]);
    // TODO
    return;
}
    
