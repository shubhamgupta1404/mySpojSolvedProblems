main(a){char s;a=1;while((s=getchar())!=-1){if(s=='\n'){printf("%d\n",a);a=1;}if(s=='T'||s=='D'||s=='L'||s=='F')a*=2;}}
