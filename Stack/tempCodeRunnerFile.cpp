int sz = str.length();
    cout << "The size of the string is: " << sz << endl;
    for (int i = 0; i < sz; i++)
    {
        char sh = str[i];
        push(&s, sh);
    }
    cout << "The reverse of string is: ";
    print(s);