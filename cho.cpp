#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<array>
using namespace std;
class person{
private:
    int size;
    int arr[100];
public: 
    person(){
        cout<<"enter the size of the array:";
        cin>>size;
        cout<<"enter the array here("<<size<<"):"<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];

        }

    }
    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }

    void add(){
        int elem;
        cout<<"enter the element you want to enter at index 0:";
        cin>>elem;
        for(int j=size;j>=0;j--){
            arr[j+1]=arr[j];
        }
        arr[0]=elem;
        size+=1;
        
    }  
    void add_index(){
        int pos=0;
        cout<<"\nenter at which position you want to add:";
        cin>>pos;
        int elem=0;
        cout<<"enter the number that you want to insert at position("<<pos<<"):";
        cin>>elem;
        if(pos>size){
            cout<<"sorry this index is out of the array element please try again";
            add_index();
        }
        for(int j=size;j>=pos;j--){ 
            arr[j+1]=arr[j];
        }

        arr[pos]=elem;
        size+=1;


    }
    void second(){
        int elem=arr[0];
        int s=0;
        int pos=0;
        for(int i=0;i<size;i++){
            if(elem<arr[i]){
                elem=arr[i];
                pos=i;

            }
            
        }
        cout<<"highest element is:"<<elem<<endl;
        for(int i=0;i<size;i++){
            if(arr[i]!=arr[pos]){
                if(arr[i]>arr[s]){
                    s=i;



                }

                
            }
            

        }
        cout<<"second highest:"<<arr[s]<<endl;
    }
    void selection_sort(){
        int min;
        for(int i=0;i<size;i++){
            min=i;
            for(int j=i+1;j<size;j++){
                if(arr[i]>arr[j]){
                  min=j;  
                }
            }
            swap(arr[min],arr[i]);
        


        }
    }
    void binary_search(){
        int beg=0,end=size-1;
        int n=size;
        sort(arr,arr+n);
        display();
        int elem;
        cout<<"\nenter the the element:";
        cin>>elem ;
        int mid=(beg+end)/2;


        while(beg<=end){
            

            
            if(arr[mid]==elem){
                cout<<mid<<endl;
                break;
            }
            if(arr[mid]<elem){ 
                beg=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=(beg+end)/2;


        }
        
        




    }
    void merge(int arr[],int mid,int s,int e){
        int n1=mid-s+1;
        int n2=e-mid;
        int a[n1];
        int b[n2];
        for(int i=0;i<n1;i++){
            a[i]=arr[s+i];

        }
        for(int i=0;i<n2;i++){
            b[i]=arr[mid+1+i];

        }
        int i=0;
        int j=0;
        int k=s;
        while(i<n1 && j<n2){
            if(a[i]<b[j]){
                arr[k]=a[i];
                i++;
            }
            else{
                arr[k]=b[j];
                j++;
            }
            k++;


        }
        while(i<n1){
            arr[k]=a[i];
            k++;
            i++;

        }
        while(j<n2){
            arr[k]=b[j];
            k++;
            j++;

        }


        







    }
    void merge_sort(int arr[],int s,int e){
        if(s<e){
            int mid=s+(e-s)/2;
            merge_sort(arr,s,mid);
            merge_sort(arr,mid+1,e);
            merge(arr,mid,s,e);        
        }

    }
    void merging(){
        merge_sort(arr,0,size-1);

    } 
    void bubble_sort(){
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);

                }
            }
        }
    }
    void insertion_sort(){
        for(int i=1;i<size;i++){
            int key=arr[i];
            int j=i-1;
            while(key<arr[j] && j>=0){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;

        }

    }
    void radix_sort(int arr[],int n,int exp){
        int output[n],count[10]={0};
        for(int i=0;i<n;i++){
            count[(arr[i]/exp)%10]++;

        }
        for(int i=1;i<10;i++){
            count[i]+=count[i-1];

        }
        for(int i=n-1;i>=0;i--){
            output[count[(arr[i]/exp)%10]-1]=arr[i];
            count[(arr[i]/exp)%10]--;

        }
        for(int i=0;i<n;i++){
            arr[i]=output[i] ;
        }
    }
    void k_largest(){
        int one=INT_MIN ,two =INT_MIN ,three =INT_MIN;
        for(int i=0;i<size;i++){
            if(arr[i]==INT_MIN || arr[i]==INT_MIN || arr[i]==INT_MIN)
            continue;
            if(arr[i]>one){
                three=two;
                two=one;
                one=arr[i];
            }
            else if(arr[i]>two ){
                three=two;
                two=arr[i];
            }
            else if(arr[i]>three){
                three=arr[i];


            }

        }
        cout<<"third largest number:"<<three<<endl;

    }
    void radix(){
        int maxh=arr[0];
        for(int i=0;i<size;i++){
            if(maxh<arr[i]){
                maxh=arr[i];

            }

        }
        for(int exp=1;maxh/exp>0;exp*=10){
            radix_sort(arr,size,exp);
        }

         
    }
    void search_delete(){
        int elem ;
        cout<<"enter the element you want to delete:";
        cin>>elem;
        for(int i=0;i<size;i++){
            if(arr[i]==elem){
                for(int j=i;j<size;j++){
                    arr[j]=arr[j+1];
                }

                size--;

            }
        }


    }
};
int main(){
    
    person p1;
    m:
    cout<<"\n1->add an element in at index 0";
    cout<<"\n2->add an element to an position";
    cout<<"\n3->delete an element in an array";
    cout<<"\n4->find the second largest element in an array";
    cout<<"\n5->selection sort of an element in an array";
    cout<<"\n6->binary search";
    cout<<"\n7->bubble sort in the element of array";
    cout<<"\n8->insertion sort in the element in an array";
    cout<<"\n9-> merge sort of the element in an array";
    cout<<"\n10->radix sort algorithm sorting";
    cout<<"\n11->k largest number in the loop";
    cout<<"\n12->exit from the loop";

    int choice;
    cout<<"\nenter your choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
        p1.add();
        p1.display();
        break;
        case 2:
        p1.add_index();
        p1.display();
        break;
        case 3:
        p1.search_delete();
        p1.display();
        break;
        case 4:
        p1.second();
        break;
        case 5:
        p1.selection_sort();
        p1.display();
        break;
        case 6:
        p1.binary_search();
        break;
        case 7:
        p1.bubble_sort();
        p1.display();
        case 8:
        p1.insertion_sort();
        p1.display();
        case 9:
        p1.merging();
        p1.display();
        break;
        case 10:
        p1.radix();
        p1.display();
        case 11:
        p1.k_largest();
        break;
        case 12:
        cout<<"\nthanks come again!"<<endl;
        exit(0);

        default:
        cout<<"pressed the wrong number try again"<<endl;
        main();
    }
    goto m;
}