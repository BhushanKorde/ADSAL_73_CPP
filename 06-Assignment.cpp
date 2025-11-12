#include<iostream>
using namespace std;
void Stock(){
 
 int s[100];  // stock 
 int n;
 int maxprice=0;
 int profit=0;


}
int main (){
        int arr[10];
        int n;
        cout << " Enter The Number Of Days ";
        cin >> n;
        for(int i=0; i<n;i++){
        cout<< " Enter The Stock Price For day " << i+1 <<": ";
        cin>> arr[i];

        
    }
     
    Stock();


}
/*
import java.util.Scanner; // it is import java scanner class for input 

public class Asg6 {

    public static int maxProfite(int a[]) { // function for caluclate profite
        int max = 0, profit = 0;
        for (int i = a.length - 1; i > 0; i--) {
            if (max < a[i]) {
                max = a[i];
            }

            if (max > a[i - 1]) {
                profit += max - a[i - 1];
                System.out.println(max + "-" + a[i - 1] + "=" + (max - a[i - 1]));
            } else {
                max = a[i - 1];
            }
        }
        return profit;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the Size of array:");
        int size = scan.nextInt();
        int a[] = new int[size];
        System.out.println("Enter the data:");
        for (int i = 0; i < size; i++) {
            a[i] = scan.nextInt();
        }
        int ans = maxProfite(a);
        System.out.println("Max Profite of given stack data is:" + ans);
    }
}*/
