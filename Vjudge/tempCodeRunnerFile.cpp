    while(next_permutation(arr.begin(), arr.end())) {
        for(int i = 0; i < n; i++) {
            // arr[i] = i + 1;
            if (i != n - 1) {
                cout << arr[i];
            } else {
                cout << arr[i] << "\n";
            }
        }
    }