void swap(int* arr,int i,int j){
    int temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
}
;
void moveZeroes(int* arr, int n) {
    int j = -1;
    //find j
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return;
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr,i,j);
            j++;
        }
    }
}