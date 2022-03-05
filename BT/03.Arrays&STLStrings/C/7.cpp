#include <bits/stdc++.h>
using namespace std;

signed main() 
{ 
    char alphabets[26][6][6]; 
    strcpy(alphabets[0][1]," #### "); 
    strcpy(alphabets[0][2],"#    #"); 
    strcpy(alphabets[0][3],"#    #"); 
    strcpy(alphabets[0][4],"######"); 
    strcpy(alphabets[0][5],"#    #"); 
    strcpy(alphabets[0][6],"#    #"); 
     
    strcpy(alphabets[4][1],"######"); 
    strcpy(alphabets[4][2],"#     "); 
    strcpy(alphabets[4][3],"######"); 
    strcpy(alphabets[4][4],"#     "); 
    strcpy(alphabets[4][5],"#     "); 
    strcpy(alphabets[4][6],"######"); 
     
     
    strcpy(alphabets[7][1],"#    #"); 
    strcpy(alphabets[7][2],"#    #"); 
    strcpy(alphabets[7][3],"######"); 
    strcpy(alphabets[7][4],"#    #"); 
    strcpy(alphabets[7][5],"#    #"); 
    strcpy(alphabets[7][6],"#    #"); 
     
    strcpy(alphabets[8][1],"  #   "); 
    strcpy(alphabets[8][2],"  #   "); 
    strcpy(alphabets[8][3],"  #   "); 
    strcpy(alphabets[8][4],"  #   "); 
    strcpy(alphabets[8][5],"  #   "); 
    strcpy(alphabets[8][6],"  #   "); 
     
 
    strcpy(alphabets[10][1],"#    #"); 
    strcpy(alphabets[10][2],"#   # "); 
    strcpy(alphabets[10][3],"####  "); 
    strcpy(alphabets[10][4],"#  #  "); 
    strcpy(alphabets[10][5],"#   # "); 
    strcpy(alphabets[10][6],"#    #"); 
     
    strcpy(alphabets[11][1],"#     "); 
    strcpy(alphabets[11][2],"#     "); 
    strcpy(alphabets[11][3],"#     "); 
    strcpy(alphabets[11][4],"#     "); 
    strcpy(alphabets[11][5],"#     "); 
    strcpy(alphabets[11][6],"######"); 
     
    
     
    strcpy(alphabets[12][1],"#    #"); 
    strcpy(alphabets[12][2],"##  ##"); 
    strcpy(alphabets[12][3],"# ## #"); 
    strcpy(alphabets[12][4],"#    #"); 
    strcpy(alphabets[12][5],"#    #"); 
    strcpy(alphabets[12][6],"#    #"); 

	strcpy(alphabets[13][1],"#    #"); 
    strcpy(alphabets[13][2],"##   #"); 
    strcpy(alphabets[13][3],"# #  #"); 
    strcpy(alphabets[13][4],"#  # #"); 
    strcpy(alphabets[13][5],"#   ##"); 
    strcpy(alphabets[13][6],"#    #"); 
     
    strcpy(alphabets[14][1]," #### "); 
    strcpy(alphabets[14][2],"#    #"); 
    strcpy(alphabets[14][3],"#    #"); 
    strcpy(alphabets[14][4],"#    #"); 
    strcpy(alphabets[14][5],"#    #"); 
    strcpy(alphabets[14][6]," #### "); 
     
    strcpy(alphabets[19][1],"##### "); 
    strcpy(alphabets[19][2],"  #   "); 
    strcpy(alphabets[19][3],"  #   "); 
    strcpy(alphabets[19][4],"  #   "); 
    strcpy(alphabets[19][5],"  #   "); 
    strcpy(alphabets[19][6],"  #   "); 
     
    strcpy(alphabets[20][1],"#    #"); 
    strcpy(alphabets[20][2],"#    #"); 
    strcpy(alphabets[20][3],"#    #"); 
    strcpy(alphabets[20][4],"#    #"); 
    strcpy(alphabets[20][5],"#    #"); 
    strcpy(alphabets[20][6]," #### "); 
     
    strcpy(alphabets[21][1],"#    #"); 
    strcpy(alphabets[21][2],"#    #"); 
    strcpy(alphabets[21][3],"#    #"); 
    strcpy(alphabets[21][4],"#    #"); 
    strcpy(alphabets[21][5]," #  # "); 
    strcpy(alphabets[21][6],"  ##  "); 
    
	string name;
	cin >> name;

	int sz = name.size();
	for(int i=1;i<=6;i++){
		cout << " ";
		for(int j=0;j<sz;j++){
			for(int k=0;k<6;k++){
				int x = name[j];
				if(x>96){
					x-=97;
				}
				else{
					x-=65;
				}
				cout << alphabets[x][i][k];
			}
			cout << "  ";
		}
		cout << endl;
	}

 
    return 0; 
} 