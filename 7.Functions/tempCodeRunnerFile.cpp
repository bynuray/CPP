string convertTo(int num, const string& format = "dec"){
    if(format=="bin"){
        string bin="";
        while(num>0){
            int convert=num%2;
            num/=2;
            bin+=to_string(convert);
        }
        reverse(bin.begin(),bin.end());
        return bin;
    }
    else if(format=="oct"){
        string oct="";
        while(num>0){
            int convert=num%8;
            num/=8;
            oct+=to_string(convert);
        }
        reverse(oct.begin(),oct.end());
        return oct;
    }
    else if(format=="hex"){
        string hex="";
        while(num>0){
            int convert=num%16;
            num/=16;
            if(convert>=10){
                char letter='A'+(convert-10);
                hex+=letter;
            }
            else{
                hex+=to_string(convert);
            }
        }
        reverse(hex.begin(),hex.end());
        return hex;
    }
    else if(format=="dec"){
        return to_string(num);
    }
    else{
        return "Invalid format!";
    }
}

int main(){

int num;
cin>>num;
string format;
cin>>format;
string convert=convertTo(num,format);
cout<<convert<<endl;

}