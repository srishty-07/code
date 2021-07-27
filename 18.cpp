// check whether an array is sorted or not using recursion

void dec(int n) {
if (n == 1) {
cout << "1" << endl;
return;
}
cout << n << endl;
dec(n - 1);
}
void inc(int n) {
if (n == 1) {
cout << "1" << endl;
return;
}
inc(n - 1);
cout << n << endl;
