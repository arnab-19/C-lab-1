int main()
{
    int a,b,q,r,s,t,op;
    cout << "Enter two numbers: ";
    cin >> a>>b;
    cout << "Enter the operations: ";
    cin >> op;
    q= a+b;
    r=a-b;
    s=a*b;
    t=a/b;
    switch (op) {
        case 1:
        cout << "Additon of the numbers is: "<<q;
        break;
        case 2:
        cout << "Difference between the numbers is: "<<r;
        break;
        case 3:
        cout << "The product of the numbers is: "<<s;
        break;
        case 4:
        cout << "The ratio of the numbers is: "<<t;
        break;
        default:
        cout << "Invalid operation \n";
        break;
    }
}