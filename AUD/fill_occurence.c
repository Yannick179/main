void fill_occurrences(int a[], int b[], int bound) {
    for(int i = 0; i < bound; i++){
        int b[i] = 0;
        for(int j = 0; j < bound, j++){
            if (a[i] == a[j]){
                b[i]++;
            }
        }
    }
}