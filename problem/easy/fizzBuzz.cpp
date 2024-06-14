//
// Created by arnau on 14/06/2024.
//
vector<string> fizzBuzz(int n) {
    vector<string> res;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            res.push_back("FizzBuzz");
        } else if (i % 3 == 0) {
            res.push_back("Fizz");
        } else if (i % 5 == 0) {
            res.push_back("Buzz");
        } else {
            res.push_back(to_string(i));
        }
    }
    return res;
}

// a recursive solution
vector<string> fizzBuzz(int n) {
    if (n == 1) {
        return {"1"};
    }
    vector<string> res = fizzBuzz(n - 1);
    if (n % 3 == 0 && n % 5 == 0) {
        res.push_back("FizzBuzz");
    } else if (n % 3 == 0) {
        res.push_back("Fizz");
    } else if (n % 5 == 0) {
        res.push_back("Buzz");
    } else {
        res.push_back(to_string(n));
    }
    return res;
}