#include <iostream>
#include <string.h>
#define max 100
using namespace std;
int checkprime(int val)
 // code by shreyash mehrotra 20BCT0307 
{

   
    int count = 0;
    for (int i = 1; i <= val; i++)
    {
        if (val % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int Vrc()
{ 
    int len, seg, i = 0, jcounter;
    cout << "Enter the count of the elements : "<<endl;
    cin >> len;
    int arr[max];

    int counter;
    int ans = checkprime(len);
    cout << "\nEnter " << len << " Elements : ";
    for (i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    if (ans == 0)
    {
        int countoddeven = 0;
        for (i = 0; i < len; i++)
        {
            if (arr[i] == 1)
            {
                countoddeven++;
            }
        }

        if (countoddeven % 2 == 0)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
        cout << "\n VRC :";
        for (int j = 0; j <= i; j++)
        {
            if (j == i)
            {
                cout << " | ";
            }
            cout << arr[j];
        }
    }
    else
    {
        for (i = 7; i >= 2; i--)
        {
            if (len % i == 0)
            {
                seg = i;
                counter++;
            }
        }

        int arr1[max][max];
        int countforarr = 0;
        for (i = 0; i < len / seg; i++)
        {
            for (int j = 0; j < seg; j++)
            {
                arr1[i][j] = arr[countforarr];
                countforarr++;
            }
        }
        int innercount = 0;
        int j;
        for (i = 0; i < len / seg; i++)
        {
            for (j = 0; j < seg; j++)
            {
                if (arr1[i][j] == 1)
                {
                    innercount++;
                }
            }
            if (innercount % 2 == 0)
            {
                arr1[i][j] = 0;
            }
            else
            {
                arr1[i][j] = 1;
            }
            innercount = 0;
        }
        cout << "\n\n\n";
        cout << "\n\n VRC : \n\n";
        for (i = 0; i < len / seg; i++)
        {
            for (j = 0; j < seg + 1; j++)
            {
                if (j == seg)
                {
                    cout << " | "<<endl;
                }
                cout << arr1[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
int Lrc()
{
    int l1, bit[100], count = 0, i, choice;
    cout << "Enter the length of data stream: "<<endl;
    cin >> l1;
    cout << "\nEnter the data stream " << endl;
    for (i = 0; i < l1; i++)
    {
        cin >> bit[i];
        if (bit[i] == 1)
            count = count + 1;
    }
    cout << "Number of 1's are " << count << endl;
    cout << "Enter the choice to implement parity bit" << endl;
    cout << "\n1-Sender side\n2-Receiver side" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        if (count % 2 == 0)
            bit[l1] = 0;
        else
            bit[l1] = 1;

        cout << "The data stream after adding parity bit is\n"<< endl;
        for (i = 0; i <= l1; i++)
            cout << bit[i];
        break;

    case 2:
        if (count % 2 == 0)
            cout << "There is no error in the received data stream" << endl;
        else
            cout << "There is error in the received data stream" << endl;
        break;

    default:
        cout << "Invalid choice" << endl;
        break;
    };
    return 0;
}
int crc()
{
    int i, j, k, l;

    
    int fs;
    cout << "\n Enter Frame size: ";
    cin >> fs;

    int f[20];

    cout << "\n Enter Frame:";
    for (i = 0; i < fs; i++)
    {
        cin >> f[i];
    }

    
    int gs;
    cout << "\n Enter Generator size: ";
    cin >> gs;

    int g[20];

    cout << "\n Enter Generator:";
    for (i = 0; i < gs; i++)
    {
        cin >> g[i];
    }

    cout << "\n Sender Side:";
    cout << "\n Frame: ";
    for (i = 0; i < fs; i++)
    {
        cout << f[i];
    }
    cout << "\n Generator :";
    for (i = 0; i < gs; i++)
    {
        cout << g[i];
    }

   
    int rs = gs - 1;
    cout << "\n Number of 0's to be appended: " << rs;
    for (i = fs; i < fs + rs; i++)
    {
        f[i] = 0;
    }

    int temp[20];
    for (i = 0; i < 20; i++)
    {
        temp[i] = f[i];
    }

    cout << "\n Message after appending 0's :";
    for (i = 0; i < fs + rs; i++)
    {
        cout << temp[i];
    }

    
    for (i = 0; i < fs; i++)
    {
        j = 0;
        k = i;
        
        if (temp[k] >= g[j])
        {
            for (j = 0, k = i; j < gs; j++, k++)
            {
                if ((temp[k] == 1 && g[j] == 1) || (temp[k] == 0 && g[j] == 0))
                {
                    temp[k] = 0;
                }
                else
                {
                    temp[k] = 1;
                }
            }
        }
    }

    
    int crc[15];
    for (i = 0, j = fs; i < rs; i++, j++)
    {
        crc[i] = temp[j];
    }

    cout << "\n CRC bits: ";
    for (i = 0; i < rs; i++)
    {
        cout << crc[i];
    }

    cout << "\n Transmitted Frame: ";
    int tf[15];
    for (i = 0; i < fs; i++)
    {
        tf[i] = f[i];
    }
    for (i = fs, j = 0; i < fs + rs; i++, j++)
    {
        tf[i] = crc[j];
    }
    for (i = 0; i < fs + rs; i++)
    {
        cout << tf[i];
    }

    cout << "\n Receiver side : ";
    cout << "\n Received Frame: ";
    for (i = 0; i < fs + rs; i++)
    {
        cout << tf[i];
    }

    for (i = 0; i < fs + rs; i++)
    {
        temp[i] = tf[i];
    }

    
    for (i = 0; i < fs + rs; i++)
    {
        j = 0;
        k = i;
        if (temp[k] >= g[j])
        {
            for (j = 0, k = i; j < gs; j++, k++)
            {
                if ((temp[k] == 1 && g[j] == 1) || (temp[k] == 0 && g[j] == 0))
                {
                    temp[k] = 0;
                }
                else
                {
                    temp[k] = 1;
                }
            }
        }
    }

    cout << "\n Reaminder: ";
    int rrem[15];
    for (i = fs, j = 0; i < fs + rs; i++, j++)
    {
        rrem[j] = temp[i];
    }
    for (i = 0; i < rs; i++)
    {
        cout << rrem[i];
    }

    int flag = 0;
    for (i = 0; i < rs; i++)
    {
        if (rrem[i] != 0)
        {
            flag = 1;
        }
    }

    if (flag == 0)
    {
        cout << "\n Since Remainder Is 0 Hence Message Transmitted From Sender To Receriver Is Correct";
    }
    else
    {
        cout << "\n Since Remainder Is Not 0 Hence Message Transmitted From Sender To Receriver Contains Error";
    }
    return 0;
}
int checkSum()
{

    char a[20], b[20];
    char sum[20], complement[20];
    int i;

    cout << "Enter first binary string\n";
    cin >> a;
    cout << "Enter second binary string\n";
    cin >> b;

    if (strlen(a) == strlen(b))
    {
        char carry = '0';
        int length = strlen(a);

        for (i = length - 1; i >= 0; i--)
        {
            if (a[i] == '0' && b[i] == '0' && carry == '0')
            {
                sum[i] = '0';
                carry = '0';
            }
            else if (a[i] == '0' && b[i] == '0' && carry == '1')
            {
                sum[i] = '1';
                carry = '0';
            }
            else if (a[i] == '0' && b[i] == '1' && carry == '0')
            {
                sum[i] = '1';
                carry = '0';
            }
            else if (a[i] == '0' && b[i] == '1' && carry == '1')
            {
                sum[i] = '0';
                carry = '1';
            }
            else if (a[i] == '1' && b[i] == '0' && carry == '0')
            {
                sum[i] = '1';
                carry = '0';
            }
            else if (a[i] == '1' && b[i] == '0' && carry == '1')
            {
                sum[i] = '0';
                carry = '1';
            }
            else if (a[i] == '1' && b[i] == '1' && carry == '0')
            {
                sum[i] = '0';
                carry = '1';
            }
            else if (a[i] == '1' && b[i] == '1' && carry == '1')
            {
                sum[i] = '1';
                carry = '1';
            }
            else
                break;
        }
        cout << "\nSum=" << carry << sum;

        for (i = 0; i < length; i++)
        {
            if (sum[i] == '0')
                complement[i] = '1';
            else
                complement[i] = '0';
        }

        if (carry == '1')
            carry = '0';
        else
            carry = '1';

        cout << "\nChecksum=" << carry << complement;
    }
    else
        cout << "\nWrong input strings";

    return 0;
}
int hammingCode()
{
    
        int data[10];
        int dataatrec[10], c, c1, c2, c3, i;

        cout << "Enter 4 bits of data one by one\n";
        cin >> data[0];
        cin >> data[1];
        cin >> data[2];
        cin >> data[4];

        
        data[6] = data[0] ^ data[2] ^ data[4];
        data[5] = data[0] ^ data[1] ^ data[4];
        data[3] = data[0] ^ data[1] ^ data[2];

        cout << "\nEncoded data is\n";
        for (i = 0; i < 7; i++)
            cout << data[i];

        cout << "\n\nEnter received data bits one by one\n";
        for (i = 0; i < 7; i++)
            cin >> dataatrec[i];

        c1 = dataatrec[6] ^ dataatrec[4] ^ dataatrec[2] ^ dataatrec[0];
        c2 = dataatrec[5] ^ dataatrec[4] ^ dataatrec[1] ^ dataatrec[0];
        c3 = dataatrec[3] ^ dataatrec[2] ^ dataatrec[1] ^ dataatrec[0];
        c = c3 * 4 + c2 * 2 + c1;

        if (c == 0)
        {
            cout << "\nNo error while transmission of data\n";
        }
        else
        {
            cout << "\nError on position " << c;
            cout << "\nData sent : ";
            for (i = 0; i < 7; i++)
                cout << data[i];

            cout << "\nData received : ";
            for (i = 0; i < 7; i++)
                cout << dataatrec[i];

            cout << "\nCorrect message is\n";

            
            if (dataatrec[7 - c] == 0)
                dataatrec[7 - c] = 1;
            else
                dataatrec[7 - c] = 0;
            for (i = 0; i < 7; i++)
            {
                cout << dataatrec[i];
            }
        }
        return 0;
    
}
int main()
{   int a;
    bool p = true;
    cout<<"ENTER YOUR OPTION\n 1.VRC\n 2.LRC\n 3.CRC\n 4.CHECKSUM\n 5.HAMMING CODE\n FOR EXIT PRESS 6"<<endl;
    cin>>a;
    while(p)
    {
       if(a==1)
       {
        Vrc();
       }
       else if(a==2)
       {
        Lrc();
       }
       else if(a==3)
       {
        crc();
       }
       else if(a==4)
       {
        checkSum();
       }
       else if(a==5)
       {
        hammingCode();
       }
       else if(a==6)
       {
           p = false;
       }
       else {
           cout<<"plz enter proper number"<<endl;
       }
    }
}