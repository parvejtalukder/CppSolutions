for(int i = 0; i < fullForm.size(); i++) {
        if (fullForm[i] == ' ') {
            shortForm.push_back(fullForm[i + 1]);
        }
    }
    for(int i = 0; i < shortForm.size(); i++) {
        (i == shortForm.size() - 1) ? cout << shortForm[i] << endl: cout << shortForm[i]; 
    }