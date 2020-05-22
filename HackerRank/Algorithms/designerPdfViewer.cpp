int designerPdfViewer(vector<int> h, string word) {
    int maxHeight = 0;
    for(char c : word)//calculating maxHeight of all letters in given word
        maxHeight = max(maxHeight, h[c-'a']);
    return word.length()*maxHeight;//return length*height
}
