vector<int> multiplyByTen(const vector<int>& arr) {
   vector<int> arrCopy = arr;
    int size = arr.size();

    for(int i=0; i<size; i++){
        arrCopy[i] *=10; 
    }

    return arrCopy;
}