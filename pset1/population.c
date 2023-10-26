#include <stdio.h>
#include <cs50.h>

int main(void){
    int start_size;
    int end_size;
    do
    {
        start_size = get_int("Start Size: ");
    } while (start_size < 9);
    do
    {
        end_size = get_int("End Size: ");
    } while (end_size < start_size);
    
    
    
    int population = start_size;
    int i = 0;
    while (population < end_size){

        int born = population / 3;
        int dead = population / 4;
        population = population + born - dead;
        i++;
    }
    printf("Years: %i\n", i);
}