#include <iostream>
using namespace std;
void findMissing(int *a ,int n){
    // aaproach1 visited method
    // for(int i=0;i<n;i++){
    //     int index =abs(a[i]);
    //     if(a[index-1]>0){
    //         a[index - 1]= -a[index - 1];
    //     }
    // }
    // //all+ve indexes missing

    // for(int i=0;i<n;i++){
    //     if(a[i]>0){
    //      cout<<i+1<<" ";   
    //     }
    // } 
    //TC-> O(N)  //SC-O(1)

    //APPROACH2 sorting +swapping method
    int i=0;
   /* while(i<n){
        int index = a[i]-1;
        if(a[i] != a[index]){
            swap(a[i],a[index]);
        }
        else{
            ++i;
        }
    }
    TC -> O(N)  SC-> O(1)
    */
}

int main(){
    int n;
    int a[]={3,3,3,3,3} ;
    n= sizeof(a)/sizeof(int);
    findMissing(a,n);
    return 0;

}