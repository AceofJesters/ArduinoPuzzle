const bool heart[9][8] =  {{false, false, true, true, false, false, false, false},
                         {false, true, false, false, true, false, false, false},
                         {true, false, false, false, false, true, false, false},
                         {true, false, false, false, false, false, true, false},
                         {false, true, false, false, false, false, false, true},
                         {true, false, false, false, false, false, true, false},
                         {true, false, false, false, false, true, false, false},
                         {false, true, false, false, true, false, false, false},
                         {false, false, true, true, false, false, false, false}};

void setup() {
  pinMode(OUTPUT, 2);
  pinMode(OUTPUT, 3);
  pinMode(OUTPUT, 4);
  pinMode(OUTPUT, 5);
  pinMode(OUTPUT, 6);
  pinMode(OUTPUT, 7);
  pinMode(OUTPUT, 8);
  pinMode(OUTPUT, 9);
  pinMode(OUTPUT, 10);
  pinMode(OUTPUT, 11);
}

void loop() {
  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < 8; j++) {
      if(heart[i][j] == true){
        int temp = 9 - j;
        digitalWrite(temp, HIGH);
      }
    }
    delay(500);
    for(int j = 2; j < 11; j++) {
      digitalWrite(j, LOW);
    }
    delay(500);
  }
}
