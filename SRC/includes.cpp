int A1[] = { 1, 2, 3, 4, 5, 6, 7 };
int A2[] = { 1, 4, 7 };
int A3[] = { 2, 7, 9 };
int A4[] = { 1, 1, 2, 3, 5, 8, 13, 21 };
int A5[] = { 1, 2, 13, 13 };
int A6[] = { 1, 1, 3, 21 };

const int N1 = sizeof(A1) / sizeof(int);
const int N2 = sizeof(A2) / sizeof(int);
const int N3 = sizeof(A3) / sizeof(int);
const int N4 = sizeof(A4) / sizeof(int);
const int N5 = sizeof(A5) / sizeof(int);
const int N6 = sizeof(A6) / sizeof(int);

cout << "A2 contained in A1: "
     << (includes(A1, A1 + N1, A2, A2 + N2) ? "true" : "false") << endl;
cout << "A3 contained in A1: "
     << (includes(A1, A1 + N2, A3, A3 + N3) ? "true" : "false") << endl;
cout << "A5 contained in A4: "
     << (includes(A4, A4 + N4, A5, A5 + N5) ? "true" : "false") << endl;
cout << "A6 contained in A4: "
     << (includes(A4, A4 + N4, A6, A6 + N6) ? "true" : "false") << endl;
