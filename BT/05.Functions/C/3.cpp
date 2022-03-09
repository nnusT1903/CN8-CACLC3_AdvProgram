/**
 * @file 3.cpp
 * @author TsunN(DuyDang)
 * @brief BT03.C7(Banner) Advanced
 * @version 0.1
 * @date 2022-03-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;

//global variables:
char alphabets[28][6][6];

void init() {
    /** 
     * char A
     */
    strcpy(alphabets[0][1]," #### "); 
    strcpy(alphabets[0][2],"#    #"); 
    strcpy(alphabets[0][3],"#    #"); 
    strcpy(alphabets[0][4],"######"); 
    strcpy(alphabets[0][5],"#    #"); 
    strcpy(alphabets[0][6],"#    #"); 
    
    /** 
     * char B
     */
    strcpy(alphabets[1][1],"##### "); 
    strcpy(alphabets[1][2],"#    #"); 
    strcpy(alphabets[1][3],"##### "); 
    strcpy(alphabets[1][4],"#    #"); 
    strcpy(alphabets[1][5],"#    #"); 
    strcpy(alphabets[1][6],"##### "); 

    /** 
     * char C
     */
    strcpy(alphabets[2][1]," #####"); 
    strcpy(alphabets[2][2],"#     "); 
    strcpy(alphabets[2][3],"#     "); 
    strcpy(alphabets[2][4],"#     "); 
    strcpy(alphabets[2][5],"#     "); 
    strcpy(alphabets[2][6]," #####"); 

    /** 
     * char D
     */
    strcpy(alphabets[3][1],"##### "); 
    strcpy(alphabets[3][2],"#    #"); 
    strcpy(alphabets[3][3],"#    #"); 
    strcpy(alphabets[3][4],"#    #"); 
    strcpy(alphabets[3][5],"#    #"); 
    strcpy(alphabets[3][6],"##### "); 

    /**
     * char E
     */
    strcpy(alphabets[4][1],"######"); 
    strcpy(alphabets[4][2],"#     "); 
    strcpy(alphabets[4][3],"######"); 
    strcpy(alphabets[4][4],"#     "); 
    strcpy(alphabets[4][5],"#     "); 
    strcpy(alphabets[4][6],"######"); 

    /** 
     * char F
     */
    strcpy(alphabets[5][1],"######"); 
    strcpy(alphabets[5][2],"#     "); 
    strcpy(alphabets[5][3],"######"); 
    strcpy(alphabets[5][4],"#     "); 
    strcpy(alphabets[5][5],"#     "); 
    strcpy(alphabets[5][6],"#     "); 

    /** 
     * char G
     */
    strcpy(alphabets[6][1]," #####"); 
    strcpy(alphabets[6][2],"#     "); 
    strcpy(alphabets[6][3],"#     "); 
    strcpy(alphabets[6][4],"#  ###"); 
    strcpy(alphabets[6][5],"#    #"); 
    strcpy(alphabets[6][6]," #####"); 
     
    /** 
     * char H
     */
    strcpy(alphabets[7][1],"#    #"); 
    strcpy(alphabets[7][2],"#    #"); 
    strcpy(alphabets[7][3],"######"); 
    strcpy(alphabets[7][4],"#    #"); 
    strcpy(alphabets[7][5],"#    #"); 
    strcpy(alphabets[7][6],"#    #"); 
     
    /**
     * char I
     */
    strcpy(alphabets[8][1],"  #   "); 
    strcpy(alphabets[8][2],"  #   "); 
    strcpy(alphabets[8][3],"  #   "); 
    strcpy(alphabets[8][4],"  #   "); 
    strcpy(alphabets[8][5],"  #   "); 
    strcpy(alphabets[8][6],"  #   "); 
    
    /** 
     * char J
     */
    strcpy(alphabets[9][1],"######"); 
    strcpy(alphabets[9][2],"     #"); 
    strcpy(alphabets[9][3],"     #"); 
    strcpy(alphabets[9][4],"     #"); 
    strcpy(alphabets[9][5],"#    #"); 
    strcpy(alphabets[9][6]," #### "); 
    
    /**
     * char K
     */
    strcpy(alphabets[10][1],"#    #"); 
    strcpy(alphabets[10][2],"#   # "); 
    strcpy(alphabets[10][3],"####  "); 
    strcpy(alphabets[10][4],"#  #  "); 
    strcpy(alphabets[10][5],"#   # "); 
    strcpy(alphabets[10][6],"#    #"); 
     
    /**
     * char L
     */
    strcpy(alphabets[11][1],"#     "); 
    strcpy(alphabets[11][2],"#     "); 
    strcpy(alphabets[11][3],"#     "); 
    strcpy(alphabets[11][4],"#     "); 
    strcpy(alphabets[11][5],"#     "); 
    strcpy(alphabets[11][6],"######"); 
     
    
    /**
     * char M
     */ 
    strcpy(alphabets[12][1],"#    #"); 
    strcpy(alphabets[12][2],"##  ##"); 
    strcpy(alphabets[12][3],"# ## #"); 
    strcpy(alphabets[12][4],"#    #"); 
    strcpy(alphabets[12][5],"#    #"); 
    strcpy(alphabets[12][6],"#    #"); 

    /**
     * char N
     */
	strcpy(alphabets[13][1],"#    #"); 
    strcpy(alphabets[13][2],"##   #"); 
    strcpy(alphabets[13][3],"# #  #"); 
    strcpy(alphabets[13][4],"#  # #"); 
    strcpy(alphabets[13][5],"#   ##"); 
    strcpy(alphabets[13][6],"#    #"); 
     
    /**
     * char O
     */
    strcpy(alphabets[14][1]," #### "); 
    strcpy(alphabets[14][2],"#    #"); 
    strcpy(alphabets[14][3],"#    #"); 
    strcpy(alphabets[14][4],"#    #"); 
    strcpy(alphabets[14][5],"#    #"); 
    strcpy(alphabets[14][6]," #### "); 
     
    /** 
     * char P
     */
    strcpy(alphabets[15][1],"##### "); 
    strcpy(alphabets[15][2],"#    #"); 
    strcpy(alphabets[15][3],"##### "); 
    strcpy(alphabets[15][4],"#     "); 
    strcpy(alphabets[15][5],"#     "); 
    strcpy(alphabets[15][6],"#     "); 

    /** 
     * char Q
     */
    strcpy(alphabets[16][1]," ##### "); 
    strcpy(alphabets[16][2],"#     #"); 
    strcpy(alphabets[16][3],"#     #"); 
    strcpy(alphabets[16][4],"#     #"); 
    strcpy(alphabets[16][5]," ##### "); 
    strcpy(alphabets[16][6],"     # "); 

    /** 
     * char R
     */
    strcpy(alphabets[17][1],"##### "); 
    strcpy(alphabets[17][2],"#    #"); 
    strcpy(alphabets[17][3],"##### "); 
    strcpy(alphabets[17][4],"#  #  "); 
    strcpy(alphabets[17][5],"#   # "); 
    strcpy(alphabets[17][6],"#    #"); 

    /** 
     * char S
     */
    strcpy(alphabets[18][1]," #### "); 
    strcpy(alphabets[18][2],"#    #"); 
    strcpy(alphabets[18][3]," ##   "); 
    strcpy(alphabets[18][4],"   ## "); 
    strcpy(alphabets[18][5],"#    #"); 
    strcpy(alphabets[18][6]," #### "); 

    /**
     * char T
     */
    strcpy(alphabets[19][1],"######"); 
    strcpy(alphabets[19][2],"  #   "); 
    strcpy(alphabets[19][3],"  #   "); 
    strcpy(alphabets[19][4],"  #   "); 
    strcpy(alphabets[19][5],"  #   "); 
    strcpy(alphabets[19][6],"  #   "); 
     
    /**
    * char U
    */
    strcpy(alphabets[20][1],"#    #"); 
    strcpy(alphabets[20][2],"#    #"); 
    strcpy(alphabets[20][3],"#    #"); 
    strcpy(alphabets[20][4],"#    #"); 
    strcpy(alphabets[20][5],"#    #"); 
    strcpy(alphabets[20][6]," #### "); 
     
    /**
     * char V
     */
    strcpy(alphabets[21][1],"#    #"); 
    strcpy(alphabets[21][2],"#    #"); 
    strcpy(alphabets[21][3],"#    #"); 
    strcpy(alphabets[21][4],"#    #"); 
    strcpy(alphabets[21][5]," #  # "); 
    strcpy(alphabets[21][6],"  ##  "); 

    /** 
     * char W
     */
    strcpy(alphabets[22][1],"#    #"); 
    strcpy(alphabets[22][2],"#    #"); 
    strcpy(alphabets[22][3],"#    #"); 
    strcpy(alphabets[22][4],"#  # #"); 
    strcpy(alphabets[22][5],"# ## #"); 
    strcpy(alphabets[22][6]," #  # "); 

    /** 
     * char X
     */
    strcpy(alphabets[23][1],"#    #"); 
    strcpy(alphabets[23][2]," #  # "); 
    strcpy(alphabets[23][3],"  ##  "); 
    strcpy(alphabets[23][4],"  ##  "); 
    strcpy(alphabets[23][5]," #  # "); 
    strcpy(alphabets[23][6],"#    #"); 

    /** 
     * char X
     */
    strcpy(alphabets[24][1],"#    #"); 
    strcpy(alphabets[24][2]," #  # "); 
    strcpy(alphabets[24][3],"  ##  "); 
    strcpy(alphabets[24][4],"  ##  "); 
    strcpy(alphabets[24][5],"  ##  "); 
    strcpy(alphabets[24][6],"  ##  "); 

    /** 
     * char Z
     */
    strcpy(alphabets[25][1],"######"); 
    strcpy(alphabets[25][2],"    # "); 
    strcpy(alphabets[25][3],"   #  "); 
    strcpy(alphabets[25][4],"  #   "); 
    strcpy(alphabets[25][5]," #    "); 
    strcpy(alphabets[25][6],"######"); 

    /** 
     * whitespace
     */
    strcpy(alphabets[26][1],"      "); 
    strcpy(alphabets[26][2],"      "); 
    strcpy(alphabets[26][3],"      "); 
    strcpy(alphabets[26][4],"      "); 
    strcpy(alphabets[26][5],"      "); 
    strcpy(alphabets[26][6],"      "); 
    return;
}


/**
 * @brief Literally Print The Given Text
 * @param text String
 */
void printText(string text, int indent){
    int sz = text.size();
	for(int i=1;i<=6;i++){
		for(int j=0;j<indent;j++) cout << " ";
		for(int j=0;j<sz;j++){
			for(int k=0;k<6;k++){
				int x = text[j];
				if(text[j]==' ') x=26;
                else{
                    if(x>96) x-=97;
                    else x-=65;
                }
				cout << alphabets[x][i][k];
			}
			cout << "  ";
		}
		cout << endl;
	}
}

/**
 * @brief Draw Given Text In Given Coordinates.
 * @param text  String  
 * @param x     coordinate
 * @param y     coordinate
 */
void draw(string text, int x, int y){
    for(int i=0;i<y;i++){
        cout << endl;
    }
    printText(text, y);
    return;
}

void IOS(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    return;
}

/**
 * @brief Main Function.
 * @return End Program.
 */
signed main(){
    IOS();
    init();
    string str;
    int x,y;
    getline(cin, str);
    cin >> x >> y;
    draw(str,x,y);
    return 0;
}