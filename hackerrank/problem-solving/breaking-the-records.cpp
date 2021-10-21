vector<int> breakingRecords(vector<int> scores) {
    vector<int> numRec { 0, 0 };
    if (scores.size() == 0) { return numRec; }

    int min = scores[0], max = scores[0];

    for (int i = 1; i < scores.size(); i++) {
        if (scores[i] < min) {
            min = scores[i];
            numRec[1]++;
        }
        if (scores[i] > max) {
            max = scores[i];
            numRec[0]++;
        }
    }

    return numRec;
}
