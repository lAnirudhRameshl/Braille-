#include<string.h>
int m[][2]={{2,3},{4,5},{6,7},{8,9},{10,11},{12,13}};
String code[] = {
   "a","100000",
   "b","101000",
   "c","110000",
   "d","110100",
   "e","100100",
   "f","111000",
   "g","111100",
   "h","101100",
   "i","011000",
   "j","011100",
   "k","100010",
   "l","101010",
   "m","110010",
   "n","110110",
   "o","100110",
   "p","111010",
   "q","111110",
   "r","101110",
   "s","011010",
   "t","011110",
   "u","100011",
   "v","101011",
   "w","011101",
   "x","110011",
   "y","110111",
   "z","100111",
   ".","001101",
   ",","001000",
   "?","001011",
   "!","001110",
   "'","000010",
   "-","000011",
   "#","010111",
   "0","011100",
   "1","100000",
   "2","101000",
   "3","110000",
   "4","110100",
   "5","100100",
   "6","111000",
   "7","111100",
   "8","101100",
   "9","011100",
};
void setup() {
  Serial.begin(9600);
  pinMode(m[0][0],OUTPUT);
  pinMode(m[0][1],OUTPUT);
  pinMode(m[1][0],OUTPUT);
  pinMode(m[1][1],OUTPUT);
  pinMode(m[2][0],OUTPUT);
  pinMode(m[2][1],OUTPUT);
  pinMode(m[3][0],OUTPUT);
  pinMode(m[3][1],OUTPUT);
  pinMode(m[4][0],OUTPUT);
  pinMode(m[4][1],OUTPUT);
  pinMode(m[5][0],OUTPUT);
  pinMode(m[5][1],OUTPUT);
}

void loop() {
  Serial.println("Enter the sentence");
  while(Serial.available()==0){
    
  }
  String sentence = Serial.readString();
  int i=0;
  while(sentence[i]!='\0'){
    String binCode;
    for(int j=0;j<=44;j+=2){
      if((String)sentence[i]==code[j])
      {
        binCode = code[j+1];
      }
    }
    int count,countArr[4],k=0;
    for(int j=0;j<6;j++){
      if(binCode[j]=='1'){
        countArr[k]=count;
        k++;
      }
      count++;
    }
   switch(k){
    case 1: digitalWrite(m[countArr[0]][0],HIGH);
            digitalWrite(m[countArr[0]][1],LOW);
            delay(200);
            digitalWrite(m[countArr[0]][0],LOW);
            digitalWrite(m[countArr[0]][1],LOW);
            delay(500);
            digitalWrite(m[countArr[0]][0],LOW);
            digitalWrite(m[countArr[0]][1],HIGH);
    case 2: digitalWrite(m[countArr[0]][0],HIGH);
            digitalWrite(m[countArr[0]][1],LOW);
            digitalWrite(m[countArr[1]][0],HIGH);
            digitalWrite(m[countArr[1]][1],LOW);
            delay(200);
            digitalWrite(m[countArr[0]][0],LOW);
            digitalWrite(m[countArr[0]][1],LOW);
            digitalWrite(m[countArr[1]][0],LOW);
            digitalWrite(m[countArr[1]][1],LOW);
            delay(500);
            digitalWrite(m[countArr[0]][0],LOW);
            digitalWrite(m[countArr[0]][1],HIGH);
            digitalWrite(m[countArr[1]][0],LOW);
            digitalWrite(m[countArr[1]][1],HIGH);
    case 3: digitalWrite(m[countArr[0]][0],HIGH);
            digitalWrite(m[countArr[0]][1],LOW);
            digitalWrite(m[countArr[1]][0],HIGH);
            digitalWrite(m[countArr[1]][1],LOW);
            digitalWrite(m[countArr[2]][0],HIGH);
            digitalWrite(m[countArr[2]][1],LOW);
            delay(200);
            digitalWrite(m[countArr[0]][0],LOW);
            digitalWrite(m[countArr[0]][1],LOW);
            digitalWrite(m[countArr[1]][0],LOW);
            digitalWrite(m[countArr[1]][1],LOW);
            digitalWrite(m[countArr[2]][0],LOW);
            digitalWrite(m[countArr[2]][1],LOW);
            delay(500);
            digitalWrite(m[countArr[0]][0],LOW);
            digitalWrite(m[countArr[0]][1],HIGH);
            digitalWrite(m[countArr[1]][0],LOW);
            digitalWrite(m[countArr[1]][1],HIGH);
            digitalWrite(m[countArr[2]][0],LOW);
            digitalWrite(m[countArr[2]][1],HIGH);
    case 4: digitalWrite(m[countArr[0]][0],HIGH);
            digitalWrite(m[countArr[0]][1],LOW);
            digitalWrite(m[countArr[1]][0],HIGH);
            digitalWrite(m[countArr[1]][1],LOW);
            digitalWrite(m[countArr[2]][0],HIGH);
            digitalWrite(m[countArr[2]][1],LOW);
            digitalWrite(m[countArr[3]][0],HIGH);
            digitalWrite(m[countArr[3]][1],LOW);
            delay(200);
            digitalWrite(m[countArr[0]][0],LOW);
            digitalWrite(m[countArr[0]][1],LOW);
            digitalWrite(m[countArr[1]][0],LOW);
            digitalWrite(m[countArr[1]][1],LOW);
            digitalWrite(m[countArr[2]][0],LOW);
            digitalWrite(m[countArr[2]][1],LOW);
            digitalWrite(m[countArr[3]][0],LOW);
            digitalWrite(m[countArr[3]][1],LOW);
            delay(500);
            digitalWrite(m[countArr[0]][0],LOW);
            digitalWrite(m[countArr[0]][1],HIGH);
            digitalWrite(m[countArr[1]][0],LOW);
            digitalWrite(m[countArr[1]][1],HIGH);
            digitalWrite(m[countArr[2]][0],LOW);
            digitalWrite(m[countArr[2]][1],HIGH);
            digitalWrite(m[countArr[3]][0],LOW);
            digitalWrite(m[countArr[3]][1],HIGH);
    case 5: digitalWrite(m[countArr[0]][0],HIGH);
            digitalWrite(m[countArr[0]][1],LOW);
            digitalWrite(m[countArr[1]][0],HIGH);
            digitalWrite(m[countArr[1]][1],LOW);
            digitalWrite(m[countArr[2]][0],HIGH);
            digitalWrite(m[countArr[2]][1],LOW);
            digitalWrite(m[countArr[3]][0],HIGH);
            digitalWrite(m[countArr[3]][1],LOW);
            digitalWrite(m[countArr[4]][0],HIGH);
            digitalWrite(m[countArr[4]][1],LOW);
            delay(200);
            digitalWrite(m[countArr[0]][0],LOW);
            digitalWrite(m[countArr[0]][1],LOW);
            digitalWrite(m[countArr[1]][0],LOW);
            digitalWrite(m[countArr[1]][1],LOW);
            digitalWrite(m[countArr[2]][0],LOW);
            digitalWrite(m[countArr[2]][1],LOW);
            digitalWrite(m[countArr[3]][0],LOW);
            digitalWrite(m[countArr[3]][1],LOW);
            digitalWrite(m[countArr[4]][0],LOW);
            digitalWrite(m[countArr[4]][1],LOW);
            delay(500);
            digitalWrite(m[countArr[0]][0],LOW);
            digitalWrite(m[countArr[0]][1],HIGH);
            digitalWrite(m[countArr[1]][0],LOW);
            digitalWrite(m[countArr[1]][1],HIGH);
            digitalWrite(m[countArr[2]][0],LOW);
            digitalWrite(m[countArr[2]][1],HIGH);
            digitalWrite(m[countArr[3]][0],LOW);
            digitalWrite(m[countArr[3]][1],HIGH);
            digitalWrite(m[countArr[4]][0],LOW);
            digitalWrite(m[countArr[4]][1],HIGH);
   }
   i++;
  }
}
