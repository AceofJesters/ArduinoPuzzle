const int orange = 2;
const int blue = 3;
const int green = 4;
const int yellow = 5;

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

const int len = 4 + 5;
const int message[len] = {j,o,l,l,y,c,o,o,p};
int pulses[len] = {};
int colours[len] = {};

void setup() {
  pinMode(orange, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);

  for(int inc = 0; inc < len; inc++) {
    colours[inc] = pickColour(message[inc]);
    pulses[inc] = pickPulses(message[inc]);
  }
}

void loop() {
  for(int inc = 0; inc < len; inc++) {
    blinkAll();
    blink(pulses[inc], colours[inc]);
  }
}

void blinkAll() {
  for(int inc = 2; inc <= 5; inc++) {
    digitalWrite(inc, HIGH);
  }
  delay(500);
  for(int inc = 2; inc <= 5; inc++) {
    digitalWrite(inc, LOW);
  }
  delay(500);
}

void blink(int pulses, int colour) {
  for(int blinks = 1; blinks <= pulses; blinks++) {
    digitalWrite(colour, HIGH);
    delay(500);
    digitalWrite(colour, LOW);
    delay(500);
  }
}

int pickPulses(int letter) {
  switch(letter) {
    case a: case b: case c: case d:
      return 1;
    case e: case f: case g: case h:
      return 2;
    case i: case j: case k: case l:
      return 3;
    case m: case n: case o: case p:
      return 4;
    case q: case r: case s: case t:
      return 5;
    case u: case v: case w: case x:
      return 6;
    case y: case z:
      return 7;
  }
}

int pickColour(int letter) {
  switch(letter) {
    case a: case e: case i: case m: case q: case u: case y:
      return orange;
    case b: case f: case j: case n: case r: case v: case z:
      return blue;
    case c: case g: case k: case o: case s: case w:
      return green;
    case d: case h: case l: case p: case t: case x:
      return yellow;
  }
}