const int orange = 2;
const int blue = 3;
const int green = 4;

const int a = 1;
const int b = 2;
const int c = 3;
const int d = 4;
const int e = 5;
const int f = 6;
const int g = 7;
const int h = 8;
const int i = 9;
const int j = 10;
const int k = 11;
const int l = 12;
const int m = 13;
const int n = 14;
const int o = 15;
const int p = 16;
const int q = 17;
const int r = 18;
const int s = 19;
const int t = 20;
const int u = 21;
const int v = 22;
const int w = 23;
const int x = 24;
const int y = 25;
const int z = 26;

const int len = 1 + 4 + 3;
const int phrase[len] = {i, l, o, v, e, y, o, u};
const int cap[len] = {1, 1, 0, 0, 0, 1, 0, 0};

void setup() {
  pinMode(orange, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int colour;
  int letter;

  //for letters in phrase
  for(int iter = 0; iter < len; iter++){
    colour = pickColour(iter, colour);
    letter = phrase[iter];
    print(colour, letter);
  }

  delay(2000);
}

void print(int colour, int letter){
  switch(letter) {
    case 1: //sl
      shortPulse(colour);
      longPulse(colour);
      break;
    case 2: //lsss
      longPulse(colour);
      shortPulse(colour);
      shortPulse(colour);
      shortPulse(colour);
      break;
    case 3: //lsls
      longPulse(colour);
      shortPulse(colour);
      longPulse(colour);
      shortPulse(colour);
      break;
    case 4: //lss
      longPulse(colour);
      shortPulse(colour);
      shortPulse(colour);
      break;
    case 5: //s
      shortPulse(colour);
      break;
    case 6: //ssls
      shortPulse(colour);
      shortPulse(colour);
      longPulse(colour);
      shortPulse(colour);
      break;
    case 7: //lls
      longPulse(colour);
      longPulse(colour);
      shortPulse(colour);
      break;
    case 8: //ssss
      shortPulse(colour);
      shortPulse(colour);
      shortPulse(colour);
      shortPulse(colour);
      break;
    case 9: //ss
      shortPulse(colour);
      shortPulse(colour);
      break;
    case 10: //slll
      shortPulse(colour);
      longPulse(colour);
      longPulse(colour);
      longPulse(colour);
      break;
    case 11: //lsl
      longPulse(colour);
      shortPulse(colour);
      longPulse(colour);
      break;
    case 12: //slss
      shortPulse(colour);
      longPulse(colour);
      shortPulse(colour);
      shortPulse(colour);
      break;
    case 13: //ll
      longPulse(colour);
      longPulse(colour);
      break;
    case 14: //ls
      longPulse(colour);
      shortPulse(colour);
      break;
    case 15: //lll
      longPulse(colour);
      longPulse(colour);
      longPulse(colour);
      break;
    case 16: //slls
      shortPulse(colour);
      longPulse(colour);
      longPulse(colour);
      shortPulse(colour);
      break;
    case 17: //llsl
      longPulse(colour);
      longPulse(colour);
      shortPulse(colour);
      longPulse(colour);
      break;
    case 18: //sls
      shortPulse(colour);
      longPulse(colour);
      shortPulse(colour);
      break;
    case 19: //sss
      shortPulse(colour);
      shortPulse(colour);
      shortPulse(colour);
      break;
    case 20: //l
      longPulse(colour);
      break;
    case 21: //ssl
      shortPulse(colour);
      shortPulse(colour);
      longPulse(colour);
      break;
    case 22: //sssl
      shortPulse(colour);
      shortPulse(colour);
      shortPulse(colour);
      longPulse(colour);
      break;
    case 23: //sll
      shortPulse(colour);
      longPulse(colour);
      longPulse(colour);
      break;
    case 24: //lssl
      longPulse(colour);
      shortPulse(colour);
      shortPulse(colour);
      longPulse(colour);
      break;
    case 25: //lsll
      longPulse(colour);
      shortPulse(colour);
      longPulse(colour);
      longPulse(colour);
      break;
    case 26: //llss
      longPulse(colour);
      longPulse(colour);
      shortPulse(colour);
      shortPulse(colour);
      break;
  }
}

void longPulse(int colour) {
  digitalWrite(colour, HIGH);
  delay(1000);
  digitalWrite(colour, LOW);
  delay(500);
}

void shortPulse(int colour) {
  digitalWrite(colour, HIGH);
  delay(500);
  digitalWrite(colour, LOW);
  delay(500);
}

int pickColour(int iter, int curr) {
  if(cap[iter] == 1){
    return orange;
  }
  
  if(curr == blue){
    return green;
  } else {
    return blue;
  }
}