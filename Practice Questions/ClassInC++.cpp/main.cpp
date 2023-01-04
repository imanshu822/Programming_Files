    /*------------------------------- Pointers to Object -----------------------------*/

#include <iostream>
using namespace std;
class Rectangle{
public:
    int length,bredth;
    virtual area(){
        cout << "from Base class area is " <<length * bredth endl;
        
    }
    int perimeter(){
        return 2 * (length + bredth);
    }
    class square: public Rectangle{
        
    public:
        int length, breadth;
        int area(){
            return length * breadth;
        }
        int perimeter(){
            return 2 * (length + bredth);
            
        }
    }
};
int main(){
    Rectangle r;
    Rectangle *p = &r;
    p-> length = 10;
    p-> bredth = 6;
    cin >> p-> length >> p-> bredth;
    cout << r.area()<< endl;
    return 0;
}

/*------------------------------- Pointers (in Heap) to Object -----------------------------*/

//#include <iostream>
//using namespace std;
//class Rectangle{
//public:
//    int length,bredth;
//    int area(){
//        return length* bredth;
//    }
//    int perimeter(){
//        return 2 * (length + bredth);
//    }
//};
//int main(){
//    Rectangle *p;
//    p = new Rectangle;
//    Rectangle *q = new Rectangle();
//
//    cin >> p-> length ;
//    cin >> p-> bredth;
//
//    cout << p->area() << endl;
//}

/*------------------------------- Pointers to Object -----------------------------*/

//#include <iostream>
//using namespace std;
//
//class Solution
//{
//public:
//    void sort012(int a[], int n)
//    {
//        int zero = 0;
//        int one = 0;
//        int two = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (a[i] == 0)
//                zero++;
//            else if (a[i] == 1)
//                one++;
//            else if (a[i] == 2);
//            two++;
//        }
//        for (int i = 0; i < zero; i++)
//        {
//            a[i] = 0;
//        }
//        for (int i = zero; i < zero + one ; i++)
//        {
//            a[i] = 1;
//        }
//        for (int i = zero + one; i < n; i++)
//        {
//            a[i] = 2;
//        }
//    }
//};
//int ma in(){
//    int t;
//    cin >> t;
//    while(t--){
//        int n;
//        cin >> n;
//        int a[n];
//
//        for (int i = 0; i < n; i++){
//            cin >> a[i];
//        }
//        Solution ob;
//        ob.sort012(a, n);
//        for (int i = 0; i < n; i++){
//            cout << a[i] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}


/*------------------------------- Pointers to Object -----------------------------*/
//
//#include <iostream>
//using namespace std;
//int main(){
//    int t;
//    cin >> t;
//    while (t--){
//        int l = 0;
//        string str;
//        getline(cin,str);
//        l = str.length();
//        if(l <= 10){
//            cout << str << endl;
//        }
//        else
//            cout << str.at(0) << l-2 << str.at(l+1) << endl;
//    }
//    return 0;
//}
//
//

/*------------------------------- Pointers to Object -----------------------------*/


//#include <bits/stdc++.h>
//using namespace std;
//
//
//    int majorityElement(vector<int>& nums) {
//        int count = 0, x, flag =0;
//        for (int i = 0; i < nums.size(); i++){
//            for (int j = 0; j < nums.size(); i++){
//                if (nums[i] == nums[j])
//                    count++;
//                if (count > nums.size()){
//                     flag =1;
//                    x = i;
//                    break;
//                }
//            }
//        }
//       if (flag == 1)
//           return x ;
//        else
//            return -1;
//    }
//
//int main(){
//  vector<int> vect;
//    vector<int>nums;
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++){
//        cin >> nums[i];
//    }
//    int x = majorityElement(nums);;
//}



/*------------------------------- Class Object -----------------------------*/
//
//
//
//#include <iostream>
//using namespace  std;
//
//class employee{
//private:
//    string name;
//    int age;
//    string designation;
//    long long salary;
//public:
//    employee(string name1, int age1, string designation1, long long salary1){
//        name = name1;
//        age = age1;
//        designation = designation1;
//        salary = salary1;
//    }
//    string getName(){
//        return name;
//    }
//    int getAge(){
//        return age;
//    }
//    string getDesignation(){
//        return designation;
//    }
//    long long getSalary(){
//        return salary;
//    }
//
//};
//int main()
//{
//    string name1;
//    int age1;
//    string designation1;
//    long long salary1;
//
//    cout << "Enter name: ";
//    cin >> name1;
//    cout << "Enter age: ";
//    cin >> age1;
//    cout << "Enter designation: ";
//    cin >> designation1;
//    cout << "Enter salary: ";
//    cin >> salary1;
//    employee e1(name1, age1, designation1, salary1);
//    cout << e1.getName() << endl;
//    cout << e1.getAge() << endl;
//    cout << e1.getDesignation() << endl;
//    cout << e1.getSalary() << endl;
//    return 0;
//}




/*------------------------------- Pointers to Object -----------------------------*/

//#include <iostream>
//using namespace std;
//
//int my_variable = 10;
//
//int main()
//{
//  int my_variable = 100;
//
//  cout << "Value of global my_variable is " << ::my_variable << endl;
//  cout << "Value of local my_variable is " << my_variable << endl;
//
//  return 0;
//}




/*-------------------------------LCM of 2 nos -----------------------------*/

//
//#include <iostream>
//using namespace std;
//int main(){
//    int a, b;
//    cin >> a >> b;
//    int p = max (a, b);
//    while (true){
//        if (p % a == 0 && p % b == 0)
//            return p;
//        p++;
//    }
//    return p;
//}
//

/*------------------------------- LCM of 2 nos -----------------------------*/

//#include <iostream>
//using namespace std;
//int gcd(int a, int b){
//    if (b == 0)
//        return a;
//    return gcd(b, a % b);
//}
//int main(){
//    int a, b;
//    cin >> a >> b;
//    return (a * b)/gcd(a,b);
//}


/*------------------------------- Check for Prime  -----------------------------*/

//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cin >> n;
//    if (n == 1)
//        return -1;
//    for (int i = 2; i < n; i++)
//        if(n % i == 0)
//        return -1;
//    return 1;
//}

/*--------------------------- Check for Prime (Efficent solution)-----------------------*/



/*------------------------------- Class employee  -----------------------------*/

//#include <iostream>
//using namespace  std;
//
//class employee{
//private:
//    int eid;
//    int age;
//    long long salary;
//public:
//    employee(int eid1, int age1,long long salary1){
//        eid = eid1;
//        age = age1;
//        salary = salary1;
//    }
//    int geteid(){
//        return eid;
//    }
//    int getAge(){
//        return age;
//    }
//    long long getSalary(){
//        return salary;
//    }
//
//};
//int main()
//{
//    int eid1;
//    int age1;
//    long long salary1;
//
//    cout << "Enter eid: ";
//    cin >> eid1;
//    cout << "Enter age: ";
//    cin >> age1;
//    cout << "Enter salary: ";
//    cin >> salary1;
//    employee e1(eid1, age1, salary1);
//    cout << e1.geteid() << endl;
//    cout << e1.getAge() << endl;
//    cout << e1.getSalary() << endl;
//    return 0;
//}


/*------------------------------- Pointers to Object -----------------------------*/

//#include <iostream>
//using namespace std;
//int main(){
//    int s1, s2, s3;
//    cout << "Enter marks of 3 subject ";
//    cin >> s1 >> s2 >> s3;
//    cout << "Average is " << (s1+s2+s3)/3 << endl;
//    return 0;
//}


/*------------------------------- use of static function -----------------------------*/


//#include <iostream>
//using namespace std;
//class circle(){
//public:
//    static int pi;
//    int area (){
//        return pi * r * r;
//    }
//};
//int static pi = 3.14
//int main(){
//    int r;
//    cout<<"Enter a  no: "
//    cin >> r;
//    circle c1;
//    cout << "Area of circle of : "<< r.area(r);
//    return 0;
//
//}

/*------------------------------- Average of 5 subject  -----------------------------*/


//#include <iostream>
//using namespace std;
//class student
//{
//public:
//    float m1,m2,m3,m4,m5;
//    void setMarks(){
//        cout<<"Enter the Marks of 5 subjects"<<endl;
//        cin>>m1>>m2>>m3>>m4>>m5;
//    }
//    float getMarks(){
//        return (m1+m2+m3+m4+m5)/5;
//    }
//};
//int main()
//{
//    student s1;
//    s1.setMarks();
//    cout << "Average of 5 subjects is : " << s1.getMarks()<<endl;
//    return 0;
//}


//------------------------------- Prime Factors  -----------------------------


//#include <iostream>
//using namespace std;
//void printPrimeFactors(int n){
//    if (n <= 1)
//        return;
//    for(int i = 2; i * i <= n; i++)
//    {
//        while (n % i == 0){
//            cout << i << endl;
//            n = n / i;
//        }
//    }
//    if(n > 1)
//        cout << n;
//}
//int main(){
//    int n;
//    cin >> n;
//    printPrimeFactors(n);
//    cout << "\n";
//    return 0;
//}


//------------------------------- Efficient sol Prime Factors  -----------------------------
//
//#include <iostream>
//using namespace std;
//void printPrimeFactors(int n){
//    if (n <= 1)
//        return;
//    while (n % 2 == 0){
//        cout << 2 <<endl;
//        n /= 2;
//    }
//    while(n % 3 == 0){
//        cout << 3 << endl;
//        n /= 3;
//    }
//    for(int i = 5; i * i <= n; i = i+6)
//    {
//        if (n == )
//        while (n % i == 0){
//            cout << i << endl;
//            n = n / i;
//        }
//    }
//    if(n > 1)
//        cout << n;
//}
//int main(){
//    int n;
//    cin >> n;
//    printPrimeFactors(n);
//    cout << "\n";
//    return 0;
//}
//

//
//#include<iostream>
//using namespace std;
//int func(int &c){
//c += 10;
//return c * 10;
//}
//int main() {
//int b = 1, a = 1;
//a = func(b);
//cout << b << endl;
//}

/*-------------------------------  -----------------------------*/


//
//
//#include <iostream>
//using namespace std;
//class cla
//{
//public:
//    inline float getSum(int x , int y){
//    return x + y;
//    }
//    inline float getSub(int x , int y){
//        return x - y;
//    }
//    inline float getMul(int x ,int y){
//        return x * y;
//    }
//
//};
//inline float getDiv(int a , int b){
//    return a / b;
//}
//int main(){
//    int x, y;
//    cout << "Enter 2 nos. : " ;
//    cin >> x >> y;
//    cla c1;
//    cout << "Sum = "<< c1.getSum(x,y) << endl;
//    cout <<"Sub = " <<  c1.getSub(x,y) << endl;
//    cout << "Mul = " << c1.getMul(x, y) << endl;
//    cout << "Div= " << getDiv(x, y) << endl;
//}


//
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        int n;
//        cin >> n;
//        char str[n];
//        int count = 0;
//        int count2 = 0;
//        for (int i = 0; i < n; ++i)
//        {
//            cin >> str[i] ;
//        }
//        for (int i = 0; i < n; ++i)
//        {
//            if (str[i] == str[i+1])
//                count++;
//            else {
//                if(count % 2 == 0)
//                    count2 = count / 2;
//                else
//                    count2 = (count2 /2) +1;
//                count = 0;
//            }
//        }
//        cout << count2 << endl;
//    }
//    return 0;
//}


//
//#include <iostream>
//using namespace std;
//inline int maxof3(int a, int b, int c){
//   return (a > b && a > c) ? a :((b > c) ? b : c);
//}
//int main(){
//    int a , b , c;
//    cin >> a >> b >> c;
//
//    int x= maxof3(a,b,c);
//    cout << x << endl;
//    return 0;
//}
//
//
//
//
//#include <iostream>
//using namespace std;
//int main(){
//    inline int usingSwitch(){
//        switch(n){
//            case 1 :
//                cout << 1;
//                break;
//            case 2 :
//                cout << 2;
//                break;
//
//        }
//    }
//}

//
//#include <iostream>
//using namespace std;
//class Test{
//public:
//    int add,a;
//    void set(int x){
//        a=x;
//    }
//    void sum(Test T1, Test T2){
//        add = T1.a + T2.a;
//
//    }
//    void show(){
//        cout << add << endl;
//    }
//
//};
//int main(){
//    Test T1,T2,T3;
//    T1.set(5);
//    T2.set(10);
//
//    T3.sum(T1,T2);
//    T3.show();
//}

//
//
//#include <iostream>
//using namespace std;
//class
//int main(){
//
//}

//
//#include <iostream>
//using namespace std;
//int main(){
//    int t;
//    cin >> t;
//    while (t--){
//        int a , b;
//        cin >> a >> b;
//        if (a < b) swap (a,b);
//        if (a % 2 != 0){
//            if (b == a + 1 || b == a + 2 || b == a - 2)
//                cout << "Yes" << endl;
//            else
//                cout << "No" << endl;
//        }
//
//            if (a % 2 == 0){
//                if (b == a + 2 || b == a - 2 || b == a - 1)
//                cout << "Yes" << endl;
//                else
//                    cout << "No" << endl;
//            }
//
//
//    }
//}

//#include <iostream>
//using namespace std;
//class test{
//
//public:
//    int n;
//
//};
//int main(){
//    test t1,t2;
//    cin >> t1.n ;
//    cout << t1.n;
//    cout << "Break" << endl;
//    cin >> t2.n;
//    cout << t2.n;
//    return 0;
//}



//
//#include <iostream>
//using namespace std;
//bool checkPrime(int n){
//    if (n <= 1)
//        return false;
//    if (n == 2 || n == 3)
//        return true;
//    if (n % 2 == 0 || n % 3 == 0)
//        return false;
//    for ( int i = 5; i * i < n; i++){
//        return false;
//    }
//    return true;
//}
//int main(){
//    int t;
//    cin >> t;
//    while (t--){
//        int n;
//        cin >> n;
////        int x,count = 0;
//        for (int i = 0; i <= n; i++){
//            if (checkPrime(i) == true && checkPrime(n-i) == true){
//                cout << i << " " << n-i << endl;
//                break;
//            }
//            if (i == n){
//                cout << -1 << " " << -1 << endl;
//                break;
//            }
//        }
//    }
//    return 0;
//}

//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//
//    while (T--)
//    {
//        int a;
//        cin >> a;
//        for (int i = 1; i < a; i++)
//        {
//            for (int j = 2; j <= i; j++)
//            {
//                if(i%j!=0)
//                {
//                    for (int k = 2; k < (a-i)/2; k++)
//                    {
//                        if((a-i)%k!=0)
//                        {
//                            cout << i << " " << a-i <<endl;
//                            break;
//                        }
//                        else
//                            cout <<"-1 -1" <<endl;
//
//                    }
//
//                }
//            }
//        }
//
//
//    }
//
//    return 0;
//}

//
//#include <iostream>
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        int n;
//        cin >> n;
//        char str[n];
//        int count = 1;
//        int count2 = 0;
//        int temp = 0;
//        for (int i = 0; i < n; ++i)
//        {
//            cin >> str[i] ;
//        }
//        for (int i = 0; i < n; ++i)
//        {
//            if (str[i] == str[i+1]){
//                count++;
//                if (count % 2 == 0)
//                    temp = count / 2;
//                else
//                    temp = (count / 2) + 1;
//            }
//            else if (str[i] != str[i+1]){
//                count2 = count2 + temp;
//                count2++;
//                temp = 0;
//                count = 1;
//            }
//        }
//        cout << count2 << endl;
//    }
//    return 0;
//}

//
//#include <iostream>
//using namespace std;
//class Rectangle {
//public:
//    int len, bre;
//    int area(){
//        return len * bre;
//    }
//    int peri(){
//        return 2 * (len + bre);
//    }
//};
//int main(){
//    Rectangle r,r1;
//    Rectangle *p;
//    p = & r;
//    p = & r1;
//    r1.len= 5;
//    p-> bre = 10;
//    cout << p->area()<< endl;
//    cout << p-> peri() << endl;
//
//}


//
//#include <iostream>
//using namespace std;
//class Rectangle {
//public:
//    int l,b;
//    int area(){
//        return l*b;
//    }
//};
//int main(){
//    Rectangle *p =  new Rectangle;
//    p-> l = 5;
//    p -> b = 10;
//    cout << p->area() <<endl;
//
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        int n;
//        cin >> n;
//        if(n%7 == 6)
//            cout << (n/7) + 1 << endl;
//        else
//            cout << n/7 << endl;
//    }
//
//    return 0;
//}
//
//
//#include <iostream>
//
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//       string s;
//       cin >> s;
//       int l = s.length();
//       char f = s.at(0);
//       char last = s.at(l-1);
//       int min = 0;
//       int  count = 0;
//       for(int i = 0; i < l;i++){
//        if(s.at(i) == f || s.at(i) == last)
//            count = 0;
//        else
//            count ++ ;
//
//        if (count > min)
//            min = count ;
//       }
//       cout << min << endl;
//    }
//
//    return 0;
//}
//



