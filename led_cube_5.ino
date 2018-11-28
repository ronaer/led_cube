
/*
  4x4x4 LED Cube
  Connection Setup:
  Columns
  [(x,y)-Pin]
  (1,1)-13
  (1,2)-12
  (1,3)-11
  (1,4)-10
  (2,1)-9
  (2,2)-8
  (2,3)-7
  (2,4)-6
  (3,1)-5
  (3-2)-4
  (3-3)-3
  (3,4)-2
  (4,1)-1
  (4,2)-0
  (4,3)-A5
  (4,4)-A4
  Layers
  [layer-Pin]
  a-A0
  b-A1
  c-A2
  d-A3
*/
//initializing and declaring led rows
int column[16] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, A5, A4};
//initializing and declaring led layers
int layer[4] = {A3, A2, A1, A0};

int time = 100;

void setup()
{
  //setting rows to ouput
  for (int i = 0; i < 16; i++)
  {
    pinMode(column[i], OUTPUT);
  }
  //setting layers to output
  for (int i = 0; i < 4; i++)
  {
    pinMode(layer[i], OUTPUT);
  }
  //seeding random for random pattern
  randomSeed(analogRead(10));
}
//xxxxxxxxxxxxxxxxxxxxFUNCTION LOOPxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx





void loop()
{

  delay(time);
  turnEverythingOff();
  flickerOn();
  turnEverythingOn();
  delay(time);
  sutun();
  sutundeneme();
  turnlayersOn_d();
  kare_down();
  kare_kenar();
  turnEverythingOn();
  kare_kenar_();
  turnEverythingOn();
  sutun_dikey_hareket();
  kare_kenar_boy();
  sutun_oblique();
  turnOnAndOffAllByLayerUpAndDownNotTimed();
  layerstompUpAndDown();
  turnOnAndOffAllByColumnSideways();
  delay(time);
  aroundEdgeDown();
  turnEverythingOff();
  kareler();
  chakar();
  randomflicker();
  randomRain();
  randomRain_toomuch();
  randomRainBack();
  diagonalRectangle();
  goThroughAllLedsOneAtATime();
  propeller();
  spiralInAndOut();
  sutunhareket();
  flickerOff();
  turnEverythingOff();
  delay(time);
}


//xxxxxxxxxxxxxxxxxxxxFUNCTIONSxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


void kare_down()
{

  int x = 500;
  int x1 = 25;


for(int x = 0; x <15; x++)
{
  digitalWrite(layer[0], 1);

  digitalWrite(layer[1], 0);
  digitalWrite(layer[2], 0);
  digitalWrite(layer[3], 0);


  digitalWrite(column[0], 0);
  delay(x1);
  digitalWrite(column[1], 0);
  delay(x1);
  digitalWrite(column[2], 0);
  delay(x1);
  digitalWrite(column[3], 0);
  delay(x1);
  digitalWrite(column[4], 0);
  delay(x1);
  digitalWrite(column[5], 0);
  delay(x1);
  digitalWrite(column[6], 0);
  delay(x1);
  digitalWrite(column[7], 0);
  delay(x1);
  digitalWrite(column[8], 0);
  delay(x1);
  digitalWrite(column[9], 0);
  delay(x1);
  digitalWrite(column[10], 0);
  delay(x1);
  digitalWrite(column[11], 0);
  delay(x1);
  digitalWrite(column[12], 0);
  delay(x1);
  digitalWrite(column[13], 0);
  delay(x1);
  digitalWrite(column[14], 0);
  delay(x1);
  digitalWrite(column[15], 0);
  delay(x);

  digitalWrite(layer[0], 0);
  digitalWrite(layer[1], 1);
  digitalWrite(layer[2], 0);
  digitalWrite(layer[3], 0);

  digitalWrite(column[0], 0);
  delay(x1);
  digitalWrite(column[1], 0);
  delay(x1);
  digitalWrite(column[2], 0);
  delay(x1);
  digitalWrite(column[3], 0);
  delay(x1);
  digitalWrite(column[4], 0);
  delay(x1);
  digitalWrite(column[5], 0);
  delay(x1);
  digitalWrite(column[6], 0);
  delay(x1);
  digitalWrite(column[7], 0);
  delay(x1);
  digitalWrite(column[8], 0);
  delay(x1);
  digitalWrite(column[9], 0);
  delay(x1);
  digitalWrite(column[10], 0);
  delay(x1);
  digitalWrite(column[11], 0);
  delay(x1);
  digitalWrite(column[12], 1);
  delay(x1);
  digitalWrite(column[13], 1);
  delay(x1);
  digitalWrite(column[14], 1);
  delay(x1);
  digitalWrite(column[15], 1);
  delay(x);


  digitalWrite(layer[0], 0);
  digitalWrite(layer[1], 0);
  digitalWrite(layer[2], 1);
  digitalWrite(layer[3], 0);

  digitalWrite(column[0], 0);
  delay(x1);
  digitalWrite(column[1], 0);
  delay(x1);
  digitalWrite(column[2], 0);
  delay(x1);
  digitalWrite(column[3], 0);
  delay(x1);
  digitalWrite(column[4], 0);
  delay(x1);
  digitalWrite(column[5], 0);
  delay(x1);
  digitalWrite(column[6], 0);
  delay(x1);
  digitalWrite(column[7], 0);
  delay(x1);
  digitalWrite(column[8], 1);
  delay(x1);
  digitalWrite(column[9], 1);
  delay(x1);
  digitalWrite(column[10], 1);
  delay(x1);
  digitalWrite(column[11], 1);
  delay(x1);
  digitalWrite(column[12], 1);
  delay(x1);
  digitalWrite(column[13], 1);
  delay(x1);
  digitalWrite(column[14], 1);
  delay(x1);
  digitalWrite(column[15], 1);
  delay(x);

  digitalWrite(layer[0], 0);
  digitalWrite(layer[1], 0);
  digitalWrite(layer[2], 0);
  digitalWrite(layer[3], 1);

  digitalWrite(column[0], 0);
  delay(x1);
  digitalWrite(column[1], 0);
  delay(x1);
  digitalWrite(column[2], 0);
  delay(x1);
  digitalWrite(column[3], 0);
  delay(x1);
  digitalWrite(column[4], 1);
  delay(x1);
  digitalWrite(column[5], 1);
  delay(x1);
  digitalWrite(column[6], 1);
  delay(x1);
  digitalWrite(column[7], 1);
  delay(x1);
  digitalWrite(column[8], 1);
  delay(x1);
  digitalWrite(column[9], 1);
  delay(x1);
  digitalWrite(column[10], 1);
  delay(x1);
  digitalWrite(column[11], 1);
  delay(x1);
  digitalWrite(column[12], 1);
  delay(x1);
  digitalWrite(column[13], 1);
  delay(x1);
  digitalWrite(column[14], 1);
  delay(x1);
  digitalWrite(column[15], 1);
  delay(x);

  digitalWrite(layer[3], 1);
  delay(x);
  digitalWrite(layer[2], 1);
  delay(x);
  digitalWrite(layer[1], 1);
  delay(x);
  digitalWrite(layer[0], 1);
  delay(x);
  //
}
}


void kareler()
{
  int x = 500;
  int x1 = 15;
  int x2 = 80;
  int x3 = 450;

  for (int i = 0; i < 8; i++)
  {
    //up
    digitalWrite(layer[0], 1);
    delay(x1);
    digitalWrite(layer[1], 0);
    digitalWrite(layer[2], 0);
    digitalWrite(layer[3], 0);


    digitalWrite(column[0], 0);
    delay(x1);
    digitalWrite(column[1], 0);
    delay(x1);
    digitalWrite(column[2], 0);
    delay(x1);
    digitalWrite(column[3], 0);
    delay(x1);
    digitalWrite(column[4], 0);
    delay(x1);
    digitalWrite(column[5], 0);
    delay(x1);
    digitalWrite(column[6], 0);
    delay(x1);
    digitalWrite(column[7], 0);
    delay(x1);
    digitalWrite(column[8], 0);
    delay(x1);
    digitalWrite(column[9], 0);
    delay(x1);
    digitalWrite(column[10], 0);
    delay(x1);
    digitalWrite(column[11], 0);
    delay(x1);
    digitalWrite(column[12], 0);
    delay(x1);
    digitalWrite(column[13], 0);
    delay(x1);
    digitalWrite(column[14], 0);
    delay(x1);
    digitalWrite(column[15], 0);
    delay(x);

    digitalWrite(column[0], 1);
    delay(x1);
    digitalWrite(column[1], 1);
    delay(x1);
    digitalWrite(column[2], 1);
    delay(x1);
    digitalWrite(column[3], 1);
    delay(x1);
    digitalWrite(column[4], 1);
    delay(x1);
    digitalWrite(column[5], 1);
    delay(x1);
    digitalWrite(column[6], 1);
    delay(x1);
    digitalWrite(column[7], 1);
    delay(x1);
    digitalWrite(column[8], 1);
    delay(x1);
    digitalWrite(column[9], 1);
    delay(x1);
    digitalWrite(column[10], 1);
    delay(x1);
    digitalWrite(column[11], 1);
    delay(x1);
    //side 1
    digitalWrite(layer[0], 1);
    digitalWrite(column[12], 0);
    delay(x1);
    digitalWrite(layer[1], 1);
    digitalWrite(column[13], 0);
    delay(x1);
    digitalWrite(layer[2], 1);
    digitalWrite(column[14], 0);
    delay(x1);
    digitalWrite(layer[3], 1);
    digitalWrite(column[15], 0);
    delay(x);

    digitalWrite(column[12], 1);
    delay(x1);
    digitalWrite(column[13], 1);
    delay(x1);
    digitalWrite(column[14], 1);
    delay(x1);
    digitalWrite(column[15], 1);
    delay(x1);
    //down
    digitalWrite(layer[0], 0);
    digitalWrite(layer[1], 0);
    digitalWrite(layer[2], 0);
    digitalWrite(layer[3], 1);

    digitalWrite(column[15], 0);
    delay(x1);
    digitalWrite(column[14], 0);
    delay(x1);
    digitalWrite(column[13], 0);
    delay(x1);
    digitalWrite(column[12], 0);
    delay(x1);
    digitalWrite(column[11], 0);
    delay(x1);
    digitalWrite(column[10], 0);
    delay(x1);
    digitalWrite(column[9], 0);
    delay(x1);
    digitalWrite(column[8], 0);
    delay(x1);
    digitalWrite(column[7], 0);
    delay(x1);
    digitalWrite(column[6], 0);
    delay(x1);
    digitalWrite(column[5], 0);
    delay(x1);
    digitalWrite(column[4], 0);
    delay(x1);
    digitalWrite(column[3], 0);
    delay(x1);
    digitalWrite(column[2], 0);
    delay(x1);
    digitalWrite(column[1], 0);
    delay(x1);
    digitalWrite(column[0], 0);
    delay(x);

    digitalWrite(column[15], 1);
    delay(x1);
    digitalWrite(column[14], 1);
    delay(x1);
    digitalWrite(column[13], 1);
    delay(x1);
    digitalWrite(column[12], 1);
    delay(x1);
    digitalWrite(column[11], 1);
    delay(x1);
    digitalWrite(column[10], 1);
    delay(x1);
    digitalWrite(column[9], 1);
    delay(x1);
    digitalWrite(column[8], 1);
    delay(x1);
    digitalWrite(column[7], 1);
    delay(x1);
    digitalWrite(column[6], 1);
    delay(x1);
    digitalWrite(column[5], 1);
    delay(x1);
    digitalWrite(column[4], 1);
    delay(x1);
    digitalWrite(column[3], 1);
    delay(x1);
    digitalWrite(column[2], 1);
    delay(x1);
    digitalWrite(column[1], 1);
    delay(x1);
    digitalWrite(column[0], 1);
    delay(x1);
    //side2
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);

    digitalWrite(column[0], 0);
    delay(x1);
    digitalWrite(column[1], 0);
    delay(x1);
    digitalWrite(column[2], 0);
    delay(x1);
    digitalWrite(column[3], 0);
    delay(x);

    digitalWrite(column[0], 1);
    delay(x1);
    digitalWrite(column[1], 1);
    delay(x1);
    digitalWrite(column[2], 1);
    delay(x1);
    digitalWrite(column[3], 1);
    //delay(x);

    //////////////////////////////////////////


    //    for (int x = 0; x < 4; x++)
    //    {
    //      digitalWrite(column[x], 1);
    //      delay(x2);
    //    }
    //delay(x2);
    for (int x = 3; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 0);
      delay(x);
    }

    delay(x3);
    for (int x = 3; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 1);
      delay(x);
    }
    delay(x2);
    for (int x = 12; x < 16; x++)
    {
      digitalWrite(column[x], 0);
      delay(x);
    }
    delay(x3);
    for (int x = 12; x < 16; x++)
    {
      digitalWrite(column[x], 1);
      delay(x);
    }
    delay(x2);
    for (int x = 0; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 0);
      delay(x);
    }
    delay(x3);
    for (int x = 0; x < 16; x = x + 4)

    {
      digitalWrite(column[x], 1);
      delay(x);
    }
    delay(x2);
    for (int x = 0; x < 4; x++)
    {
      digitalWrite(column[x], 0);
      delay(x);
    }

    delay(x3);
  }
  ////////////////////////
}



void sutun_oblique()
{
  int x = 110;
  int x1 = 100;



  for (int tekrar = 0; tekrar < 16; tekrar++)
  {
    turnEverythingOff();

    delay(x1 + x1);
    digitalWrite(layer[0], 0);
    digitalWrite(layer[1], 0);
    digitalWrite(layer[2], 0);
    digitalWrite(layer[3], 1);
    digitalWrite(column[3], 0);
    delay(x1);

    digitalWrite(layer[0], 0);
    digitalWrite(layer[1], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(x1);

    digitalWrite(layer[0], 0);
    digitalWrite(layer[1], 0);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(x1);

    digitalWrite(layer[0], 0);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(x1);

    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 0);
    digitalWrite(layer[2], 0);
    digitalWrite(layer[3], 0);

    digitalWrite(column[3], 0);
    digitalWrite(column[0], 1);
    digitalWrite(column[1], 1);
    digitalWrite(column[2], 1);
    digitalWrite(column[4], 1);
    digitalWrite(column[5], 1);
    digitalWrite(column[6], 1);
    digitalWrite(column[7], 1);
    digitalWrite(column[8], 1);
    digitalWrite(column[9], 1);
    digitalWrite(column[10], 1);
    digitalWrite(column[11], 1);
    digitalWrite(column[12], 1);
    digitalWrite(column[13], 1);
    digitalWrite(column[14], 1);
    digitalWrite(column[15], 1);

    delay(x);
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 0);
    digitalWrite(layer[3], 0);

    digitalWrite(column[2], 0);
    digitalWrite(column[6], 0);
    digitalWrite(column[7], 0);
    digitalWrite(column[3], 0);

    delay(x);

    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 0);

    digitalWrite(column[1], 0);
    digitalWrite(column[5], 0);
    digitalWrite(column[9], 0);
    digitalWrite(column[10], 0);
    digitalWrite(column[11], 0);

    digitalWrite(column[2], 1);
    digitalWrite(column[6], 1);
    digitalWrite(column[7], 1);

    delay(x);

    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);

    digitalWrite(column[0], 0);
    digitalWrite(column[4], 0);
    digitalWrite(column[8], 0);
    digitalWrite(column[11], 0);
    digitalWrite(column[12], 0);
    digitalWrite(column[13], 0);
    digitalWrite(column[14], 0);
    digitalWrite(column[15], 0);

    digitalWrite(column[1], 1);
    digitalWrite(column[5], 1);
    digitalWrite(column[9], 1);
    digitalWrite(column[10], 1);
    digitalWrite(column[11], 1);

    delay(x + 40);
  }
}


void kare_kenar_boy()
{
  int x = 80;
  digitalWrite(layer[0], 1);
  digitalWrite(layer[1], 1);
  digitalWrite(layer[2], 1);
  digitalWrite(layer[3], 1);

  for (int x = 0; x < 16; x++)
  {
    digitalWrite(column[x], 1);
  }
  /////////////

  for (int tekrar = 0; tekrar < 16; tekrar++)
  {

    for (int x = 3; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 0);
    }

    delay(x);
    for (int x = 3; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 1);
    }
    //   delay(x);
    ///////////
    for (int x = 2; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 0);
    }

    delay(x);
    for (int x = 2; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 1);
    }
    //   delay(x);
    /////////////


    for (int x = 1; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 0);
    }

    delay(x);
    for (int x = 1; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 1);
    }
    //   delay(x);

    for (int x = 0; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 0);
    }

    delay(x);
    for (int x = 0; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 1);
    }
    //   delay(x);
  }
}





void kare_kenar_()
{
  int x = 100;
  digitalWrite(layer[0], 1);
  digitalWrite(layer[1], 1);
  digitalWrite(layer[2], 1);
  digitalWrite(layer[3], 1);



  for (int tekrar = 0; tekrar < 16; tekrar++)
  {
    for (int x = 0; x < 4; x++)
    {
      digitalWrite(column[x], 0);
    }

    delay(x);

    for (int x = 0; x < 4; x++)
    {
      digitalWrite(column[x], 1);

    }
    for (int x = 3; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 0);
    }

    delay(x);
    for (int x = 3; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 1);
    }

    for (int x = 12; x < 16; x++)
    {
      digitalWrite(column[x], 0);
    }
    delay(x);
    for (int x = 12; x < 16; x++)
    {
      digitalWrite(column[x], 1);
    }
    for (int x = 0; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 0);
    }
    delay(x);
    for (int x = 0; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 1);
    }
  }
}

void kare_kenar()
{
  int x = 100;
  digitalWrite(layer[0], 1);
  digitalWrite(layer[1], 1);
  digitalWrite(layer[2], 1);
  digitalWrite(layer[3], 1);

  for (int x = 4; x < 16; x++)
  {
    digitalWrite(column[x], 1);
  }
  /////////////

  for (int tekrar = 0; tekrar < 16; tekrar++)
  {
    for (int x = 0; x < 4; x++)
    {
      digitalWrite(column[x], 0);
    }

    delay(x);

    for (int x = 0; x < 4; x++)
    {
      digitalWrite(column[x], 1);

    }
    for (int x = 3; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 0);
    }

    delay(x);
    for (int x = 3; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 1);
    }

    for (int x = 12; x < 16; x++)
    {
      digitalWrite(column[x], 0);
    }
    delay(x);
    for (int x = 12; x < 16; x++)
    {
      digitalWrite(column[x], 1);
    }
    for (int x = 0; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 0);
    }
    delay(x);
    for (int x = 0; x < 16; x = x + 4)
    {
      digitalWrite(column[x], 1);
    }

  }

}

void chakar() //çakar efekti
{
  int x = 50;
  digitalWrite(layer[0], 1);
  digitalWrite(layer[1], 1);
  digitalWrite(layer[2], 1);
  digitalWrite(layer[3], 1);

  for (int tekrar = 0; tekrar < 16; tekrar++)
  {
    for (int i = 0; i < 4; i++) // bir yarımı x ms yakıp söndürme
    {
      //bir yarımın yanması için
      digitalWrite(column[0], 0);
      digitalWrite(column[1], 0);
      digitalWrite(column[2], 0);
      digitalWrite(column[3], 0);
      digitalWrite(column[4], 0);
      digitalWrite(column[5], 0);
      digitalWrite(column[6], 0);
      digitalWrite(column[7], 0);

      delay(x);

      //yanan yarımın sönmesi için
      digitalWrite(column[0], 1);
      digitalWrite(column[1], 1);
      digitalWrite(column[2], 1);
      digitalWrite(column[3], 1);
      digitalWrite(column[4], 1);
      digitalWrite(column[5], 1);
      digitalWrite(column[6], 1);
      digitalWrite(column[7], 1);
      delay(x);
    }

    for (int i = 0; i < 4; i++)// diğer yarımı x ms yakıp söndürme
    {
      digitalWrite(column[8], 0);
      digitalWrite(column[9], 0);
      digitalWrite(column[10], 0);
      digitalWrite(column[11], 0);
      digitalWrite(column[12], 0);
      digitalWrite(column[13], 0);
      digitalWrite(column[14], 0);
      digitalWrite(column[15], 0);
      delay(x);
      digitalWrite(column[8], 1);
      digitalWrite(column[9], 1);
      digitalWrite(column[10], 1);
      digitalWrite(column[11], 1);
      digitalWrite(column[12], 1);
      digitalWrite(column[13], 1);
      digitalWrite(column[14], 1);
      digitalWrite(column[15], 1);
      delay(x);
    }
  }
}

void sutun_dikey_hareket()
{
  turnEverythingOff();
  delay(250);
  int x = 40;
  digitalWrite(layer[0], 1);
  digitalWrite(layer[1], 1);
  digitalWrite(layer[2], 1);
  digitalWrite(layer[3], 1);


  for (int tekrar = 0; tekrar < 10; tekrar++) ////fonksiyon tekrar sayısı
  {

    for (int i = 0; i < 4; i++)
    {
      digitalWrite(column[i], 0);
    }
    delay(x);

    for (int i = 4; i < 8; i++)
    {
      digitalWrite(column[i], 0);
    }
    delay(x);
    for (int i = 8; i < 12; i++)
    {
      digitalWrite(column[i], 0);
    }
    delay(x);

    for (int i = 12; i < 16; i++)
    {
      digitalWrite(column[i], 0);
    }
    delay(x);

    /////////////////// söndürme
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(column[i], 1);
    }
    delay(x);

    for (int i = 4; i < 8; i++)
    {
      digitalWrite(column[i], 1);
    }
    delay(x);
    for (int i = 8; i < 12; i++)
    {
      digitalWrite(column[i], 1);
    }
    delay(x);

    for (int i = 12; i < 16; i++)
    {
      digitalWrite(column[i], 1);
    }
    delay(x);




    ///////////////////////geri
    for (int i = 12; i < 16; i++)
    {
      digitalWrite(column[i], 0);
    }
    delay(x);

    for (int i = 8; i < 12; i++)
    {
      digitalWrite(column[i], 0);
    }
    delay(x);
    for (int i = 4; i < 8; i++)
    {
      digitalWrite(column[i], 0);
    }
    delay(x);
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(column[i], 0);
    }
    delay(x);

    /////////////////// geri söndürme


    for (int i = 12; i < 16; i++)
    {
      digitalWrite(column[i], 1);
    }
    delay(x);

    for (int i = 8; i < 12; i++)
    {
      digitalWrite(column[i], 1);
    }
    delay(x);
    for (int i = 4; i < 8; i++)
    {
      digitalWrite(column[i], 1);
    }
    delay(x);
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(column[i], 1);
    }
    delay(x);

  }
}

//////////////////////////////////////////////////

void sutunhareket()

{
  digitalWrite(layer[0], 1);
  digitalWrite(layer[1], 1);
  digitalWrite(layer[2], 1);
  digitalWrite(layer[3], 1);

  int x = 50;

  for (int tekrar = 0; tekrar < 2; tekrar++)
  {
    for (int i = 0; i < 16; i++)
    {
      digitalWrite(column[i], 1);
    }
    for (int y = 0; y < 3; y++)
    {
      for (int count = 0; count < 1; count++)
      {
        for (int i = 0; i < 4; i++)
        {
          digitalWrite(column[i], 0);
          delay(x);
          digitalWrite(column[i], 1);
        }
        for (int i = 16; i != 0; i--)
        {
          digitalWrite(column[i - 1], 0);
          delay(x);
          digitalWrite(column[i - 1], 1);
        }
      }
      for (int i = 0; i < 8; i++)
      {
        digitalWrite(column[i], 0);
        delay(x);
      }
      for (int i = 16; i != 0; i--)
      {
        digitalWrite(column[i - 1], 0);
        delay(x);
      }
    }
  }
}



void sutundeneme()
{
  turnEverythingOn();

  int x = 75;
  for (int i = 4; i != 0; i--)
  {

    for (int i = 16; i != 0; i--)
    {
      digitalWrite(column[i - 1], 0);
      delay(x);
    }
    for (int i = 0; i < 16; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
    for (int i = 0; i < 16; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    for (int i = 16; i != 0; i--)
    {
      digitalWrite(column[i - 1], 1);
      delay(x);
    }
  }
}


void sutun()//////////////////////////////////////////////////////tek tek sütun yakma
{
  turnEverythingOff();

  digitalWrite(layer[0], 1);
  digitalWrite(layer[1], 1);
  digitalWrite(layer[2], 1);
  digitalWrite(layer[3], 1);

  for (int i = 0; i < 16; i++)
  {
    digitalWrite(column[i], 0);

    delay(400);
  }
  delay(1000);

  for (int i = 0; i < 16; i = i + 1) //tek tek sütun söndürme
  {
    digitalWrite(column[i], 1);
    delay(85);

  }
  for (int i = 15; i > -1; i = i - 1) //tek tek tersten sütun yakma
  {
    digitalWrite(column[i], 0);
    delay(400);

  }
  delay(1000);

  for (int i = 15; i > -1; i = i - 1) //tek tek tersten sütun söndürme
  {
    digitalWrite(column[i], 1);
    delay(85);
  }

  turnEverythingOff();


}
void turnlayersOn_d()////////////////////////////////////////////////////////////turn all on d
{
  for (int i = 0; i < 2; i++)
  {
    int y = 50;
    for (int i = 0; i < 16; i++)
    {
      digitalWrite(column[i], 0);
    }
    //turning on layers
    for (int i = 0; i < 3; i++)
    {
      digitalWrite(layer[0], 1);
      delay(y);
      digitalWrite(layer[1], 1);
      delay(y);
      digitalWrite(layer[2], 1);
      delay(y);
      digitalWrite(layer[3], 1);
      delay(y);
      digitalWrite(layer[0], 0);//geri sönme
      delay(y);
      digitalWrite(layer[1], 0);
      delay(y);
      digitalWrite(layer[2], 0);
      delay(y);
      digitalWrite(layer[3], 0);
      delay(y + y);
      ///////
      digitalWrite(layer[3], 1);
      delay(y + 100);
      digitalWrite(layer[2], 1);
      delay(y + 150);
      digitalWrite(layer[1], 1);
      delay(y + 200);
      digitalWrite(layer[0], 1);
      delay(y + 250);
      digitalWrite(layer[3], 0);//geri sönme
      delay(y);
      digitalWrite(layer[2], 0);
      delay(y);
      digitalWrite(layer[1], 0);
      delay(y);
      digitalWrite(layer[0], 0);
      delay(y + y);

    }
  }
}

///////////////////////////////////////////////////////////turn all off
void turnEverythingOff()
{
  for (int i = 0; i < 16; i++)
  {
    digitalWrite(column[i], 1);
  }
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(layer[i], 0);
  }
}

////////////////////////////////////////////////////////////turn all on
void turnEverythingOn()
{
  for (int i = 0; i < 16; i++)
  {
    digitalWrite(column[i], 0);
  }
  //turning on layers
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(layer[i], 1);
  }
}
///////////////////////////////////////////////////////turn columns off
void turnColumnsOff()
{
  for (int i = 0; i < 16; i++)
  {
    digitalWrite(column[i], 1);
  }
}
///////////////////////////////////////////////////////////////////////////////flicker on
void flickerOn()
{
  int i = 150;
  while (i != 0)
  {
    turnEverythingOn();
    delay(i);
    turnEverythingOff();
    delay(i);
    i -= 5;
  }
}
///////////////////////////////////////////////////turn everything on and off by layer up and down NOT TIMED
void turnOnAndOffAllByLayerUpAndDownNotTimed()
{
  int x = 75;
  for (int i = 5; i != 0; i--)
  {
    turnEverythingOn();
    for (int i = 4; i != 0; i--)
    {
      digitalWrite(layer[i - 1], 0);
      delay(x);
    }
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(layer[i], 1);
      delay(x);
    }
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(layer[i], 0);
      delay(x);
    }
    for (int i = 4; i != 0; i--)
    {
      digitalWrite(layer[i - 1], 1);
      delay(x);
    }
  }
}
//////////////////////////////////////////////////////////turn everything on and off by column sideways
void turnOnAndOffAllByColumnSideways()
{
  int x = 75;
  turnEverythingOff();
  //turn on layers
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(layer[i], 1);
  }
  for (int y = 0; y < 3; y++)
  {
    //turn on 0-3
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    //turn on 4-7
    for (int i = 4; i < 8; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    //turn on 8-11
    for (int i = 8; i < 12; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    //turn on 12-15
    for (int i = 12; i < 16; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    //turn off 0-3
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
    //turn off 4-7
    for (int i = 4; i < 8; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
    //turn off 8-11
    for (int i = 8; i < 12; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
    //turn off 12-15
    for (int i = 12; i < 16; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
    //turn on 12-15
    for (int i = 12; i < 16; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    //turn on 8-11
    for (int i = 8; i < 12; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    //turn on 4-7
    for (int i = 4; i < 8; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    //turn on 0-3
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(column[i], 0);
      delay(x);
    }
    //turn off 12-15
    for (int i = 12; i < 16; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
    //turn off 8-11
    for (int i = 8; i < 12; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
    //turn off 4-7
    for (int i = 4; i < 8; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
    //turn off 0-3
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(column[i], 1);
      delay(x);
    }
  }
}
/////////////////////////////////////////////////////////////////////up and down single layer stomp
void layerstompUpAndDown()
{
  int x = 75;
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(layer[i], 0);
  }
  for (int y = 0; y < 5; y++)
  {
    for (int count = 0; count < 1; count++)
    {
      for (int i = 0; i < 4; i++)
      {
        digitalWrite(layer[i], 1);
        delay(x);
        digitalWrite(layer[i], 0);
      }
      for (int i = 4; i != 0; i--)
      {
        digitalWrite(layer[i - 1], 1);
        delay(x);
        digitalWrite(layer[i - 1], 0);
      }
    }
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(layer[i], 1);
      delay(x);
    }
    for (int i = 4; i != 0; i--)
    {
      digitalWrite(layer[i - 1], 0);
      delay(x);
    }
  }
}
////////////////////////////////////////////////////////////flicker off
void flickerOff()
{
  turnEverythingOn();
  for (int i = 0; i != 150; i += 5)
  {
    turnEverythingOff();
    delay(i + 50);
    turnEverythingOn();
    delay(i);
  }
}
///////////////////////////////////////////around edge of the cube down
void aroundEdgeDown()
{
  for (int x = 200; x != 0; x -= 50)
  {
    turnEverythingOff();
    for (int i = 4; i != 0; i--)
    {
      digitalWrite(layer[i - 1], 1);
      digitalWrite(column[5], 0);
      digitalWrite(column[6], 0);
      digitalWrite(column[9], 0);
      digitalWrite(column[10], 0);

      digitalWrite(column[0], 0);
      delay(x);
      digitalWrite(column[0], 1);
      digitalWrite(column[4], 0);
      delay(x);
      digitalWrite(column[4], 1);
      digitalWrite(column[8], 0);
      delay(x);
      digitalWrite(column[8], 1);
      digitalWrite(column[12], 0);
      delay(x);
      digitalWrite(column[12], 1);
      digitalWrite(column[13], 0);
      delay(x);
      digitalWrite(column[13], 1);
      digitalWrite(column[15], 0);
      delay(x);
      digitalWrite(column[15], 1);
      digitalWrite(column[14], 0);
      delay(x);
      digitalWrite(column[14], 1);
      digitalWrite(column[11], 0);
      delay(x);
      digitalWrite(column[11], 1);
      digitalWrite(column[7], 0);
      delay(x);
      digitalWrite(column[7], 1);
      digitalWrite(column[3], 0);
      delay(x);
      digitalWrite(column[3], 1);
      digitalWrite(column[2], 0);
      delay(x);
      digitalWrite(column[2], 1);
      digitalWrite(column[1], 0);
      delay(x);
      digitalWrite(column[1], 1);
    }
  }
}
/////////////////////////////////////////////////////////random flicker
void randomflicker()
{
  turnEverythingOff();
  int x = 10;
  for (int i = 0; i != 1750; i += 2)
  {
    int randomLayer = random(0, 4);
    int randomColumn = random(0, 16);

    digitalWrite(layer[randomLayer], 1);
    digitalWrite(column[randomColumn], 0);
    delay(x);
    digitalWrite(layer[randomLayer], 0);
    digitalWrite(column[randomColumn], 1);
    delay(x);
  }
}


////////////////////////////////////////////////////////////random rain
void randomRain()
{
  turnEverythingOff();
  int x = 20;
  for (int tekrar = 0; tekrar < 4; tekrar++)
  {
    for (int i = 0; i != 60; i += 2)
    {
      int randomColumn = random(0, 16);
      digitalWrite(column[randomColumn], 0);
      digitalWrite(layer[0], 1);
      delay(x + x);
      digitalWrite(layer[0], 0);
      digitalWrite(layer[1], 1);
      delay(x);
      digitalWrite(layer[1], 0);
      digitalWrite(layer[2], 1);
      delay(x);
      digitalWrite(layer[2], 0);
      digitalWrite(layer[3], 1);
      delay(x + x);
      digitalWrite(layer[3], 0);
      digitalWrite(column[randomColumn], 1);

    }
  }
}

////////////////////////////////////////////////////////////random rain çok
void randomRain_toomuch()
{
  turnEverythingOff();
  int x = 20;
  for (int tekrar = 0; tekrar < 4; tekrar++)
  {
    for (int i = 0; i != 60; i += 2)
    {
      int randomColumn = random(0, 16);
      digitalWrite(column[randomColumn], 0);
      digitalWrite(column[randomColumn] + 1, 0);
      digitalWrite(layer[0], 1);
      delay(x + x);
      digitalWrite(layer[0], 0);
      digitalWrite(layer[1], 1);
      delay(x);
      digitalWrite(layer[1], 0);
      digitalWrite(layer[2], 1);
      delay(x);
      digitalWrite(layer[2], 0);
      digitalWrite(layer[3], 1);
      delay(x + x);
      digitalWrite(layer[3], 0);
      digitalWrite(column[randomColumn], 1);

    }
  }
}
////////////////////////////////////////////////////////////random rain back
void randomRainBack()
{
  turnEverythingOff();
  int x = 100;
  for (int i = 0; i != 60; i += 2)
  {
    int randomColumn = random(0, 16);
    //geri
    digitalWrite(column[randomColumn], 0);
    digitalWrite(layer[3], 1);
    delay(x + 50);
    digitalWrite(layer[3], 0);
    digitalWrite(layer[2], 1);
    delay(x);
    digitalWrite(layer[2], 0);
    digitalWrite(layer[1], 1);
    delay(x);
    digitalWrite(layer[1], 0);
    digitalWrite(layer[0], 1);
    delay(x + 50);
    digitalWrite(layer[0], 0);
    digitalWrite(column[randomColumn], 1);
  }
}

/////////////////////////////////////////////////////diagonal rectangle
void diagonalRectangle()
{
  int x = 350;
  turnEverythingOff();
  for (int count = 0; count < 5; count++)
  {
    //top left
    for (int i = 0; i < 8; i++)
    {
      digitalWrite(column[i], 0);
    }
    digitalWrite(layer[3], 1);
    digitalWrite(layer[2], 1);
    delay(x);
    turnEverythingOff();
    //middle middle
    for (int i = 4; i < 12; i++)
    {
      digitalWrite(column[i], 0);
    }
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(x);
    turnEverythingOff();
    //bottom right
    for (int i = 8; i < 16; i++)
    {
      digitalWrite(column[i], 0);
    }
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    delay(x);
    turnEverythingOff();
    //bottom middle
    for (int i = 4; i < 12; i++)
    {
      digitalWrite(column[i], 0);
    }
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    delay(x);
    turnEverythingOff();
    //bottom left
    for (int i = 0; i < 8; i++)
    {
      digitalWrite(column[i], 0);
    }
    digitalWrite(layer[0], 1);
    digitalWrite(layer[1], 1);
    delay(x);
    turnEverythingOff();
    //middle middle
    for (int i = 4; i < 12; i++)
    {
      digitalWrite(column[i], 0);
    }
    digitalWrite(layer[1], 1);
    digitalWrite(layer[2], 1);
    delay(x);
    turnEverythingOff();
    //top right
    for (int i = 8; i < 16; i++)
    {
      digitalWrite(column[i], 0);
    }
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(x);
    turnEverythingOff();
    //top middle
    for (int i = 4; i < 12; i++)
    {
      digitalWrite(column[i], 0);
    }
    digitalWrite(layer[2], 1);
    digitalWrite(layer[3], 1);
    delay(x);
    turnEverythingOff();
  }
  //top left
  for (int i = 0; i < 8; i++)
  {
    digitalWrite(column[i], 0);
  }
  digitalWrite(layer[3], 1);
  digitalWrite(layer[2], 1);
  delay(x);
  turnEverythingOff();
}
//////////////////////////////////////////////////////////////propeller
void propeller()
{
  turnEverythingOff();
  int x = 90;
  for (int y = 4; y > 0; y--)
  {
    for (int i = 0; i < 6; i++)
    {
      //turn on layer
      digitalWrite(layer[y - 1], 1);
      //a1
      turnColumnsOff();
      digitalWrite(column[0], 0);
      digitalWrite(column[5], 0);
      digitalWrite(column[10], 0);
      digitalWrite(column[15], 0);
      delay(x);
      //b1
      turnColumnsOff();
      digitalWrite(column[4], 0);
      digitalWrite(column[5], 0);
      digitalWrite(column[10], 0);
      digitalWrite(column[11], 0);
      delay(x);
      //c1
      turnColumnsOff();
      digitalWrite(column[6], 0);
      digitalWrite(column[7], 0);
      digitalWrite(column[8], 0);
      digitalWrite(column[9], 0);
      delay(x);
      //d1
      turnColumnsOff();
      digitalWrite(column[3], 0);
      digitalWrite(column[6], 0);
      digitalWrite(column[9], 0);
      digitalWrite(column[12], 0);
      delay(x);
      //d2
      turnColumnsOff();
      digitalWrite(column[2], 0);
      digitalWrite(column[6], 0);
      digitalWrite(column[9], 0);
      digitalWrite(column[13], 0);
      delay(x);
      //d3
      turnColumnsOff();
      digitalWrite(column[1], 0);
      digitalWrite(column[5], 0);
      digitalWrite(column[10], 0);
      digitalWrite(column[14], 0);
      delay(x);
    }
  }
  //d4
  turnColumnsOff();
  digitalWrite(column[0], 0);
  digitalWrite(column[5], 0);
  digitalWrite(column[10], 0);
  digitalWrite(column[15], 0);
  delay(x);
}
//////////////////////////////////////////////////////spiral in and out
void spiralInAndOut()
{
  turnEverythingOn();
  int x = 60;
  for (int i = 0; i < 6; i++)
  {
    //spiral in clockwise
    digitalWrite(column[0], 1);
    delay(x);
    digitalWrite(column[1], 1);
    delay(x);
    digitalWrite(column[2], 1);
    delay(x);
    digitalWrite(column[3], 1);
    delay(x);
    digitalWrite(column[7], 1);
    delay(x);
    digitalWrite(column[11], 1);
    delay(x);
    digitalWrite(column[15], 1);
    delay(x);
    digitalWrite(column[14], 1);
    delay(x);
    digitalWrite(column[13], 1);
    delay(x);
    digitalWrite(column[12], 1);
    delay(x);
    digitalWrite(column[8], 1);
    delay(x);
    digitalWrite(column[4], 1);
    delay(x);
    digitalWrite(column[5], 1);
    delay(x);
    digitalWrite(column[6], 1);
    delay(x);
    digitalWrite(column[10], 1);
    delay(x);
    digitalWrite(column[9], 1);
    delay(x);
    ///////////////////////////////////////spiral out counter clockwise
    digitalWrite(column[9], 0);
    delay(x);
    digitalWrite(column[10], 0);
    delay(x);
    digitalWrite(column[6], 0);
    delay(x);
    digitalWrite(column[5], 0);
    delay(x);
    digitalWrite(column[4], 0);
    delay(x);
    digitalWrite(column[8], 0);
    delay(x);
    digitalWrite(column[12], 0);
    delay(x);
    digitalWrite(column[13], 0);
    delay(x);
    digitalWrite(column[14], 0);
    delay(x);
    digitalWrite(column[15], 0);
    delay(x);
    digitalWrite(column[11], 0);
    delay(x);
    digitalWrite(column[7], 0);
    delay(x);
    digitalWrite(column[3], 0);
    delay(x);
    digitalWrite(column[2], 0);
    delay(x);
    digitalWrite(column[1], 0);
    delay(x);
    digitalWrite(column[0], 0);
    delay(x);
    ///////////////////////////////////////spiral in counter clock wise
    digitalWrite(column[0], 1);
    delay(x);
    digitalWrite(column[4], 1);
    delay(x);
    digitalWrite(column[8], 1);
    delay(x);
    digitalWrite(column[12], 1);
    delay(x);
    digitalWrite(column[13], 1);
    delay(x);
    digitalWrite(column[14], 1);
    delay(x);
    digitalWrite(column[15], 1);
    delay(x);
    digitalWrite(column[11], 1);
    delay(x);
    digitalWrite(column[7], 1);
    delay(x);
    digitalWrite(column[3], 1);
    delay(x);
    digitalWrite(column[2], 1);
    delay(x);
    digitalWrite(column[1], 1);
    delay(x);
    digitalWrite(column[5], 1);
    delay(x);
    digitalWrite(column[9], 1);
    delay(x);
    digitalWrite(column[10], 1);
    delay(x);
    digitalWrite(column[6], 1);
    delay(x);
    //////////////////////////////////////////////spiral out clock wise
    digitalWrite(column[6], 0);
    delay(x);
    digitalWrite(column[10], 0);
    delay(x);
    digitalWrite(column[9], 0);
    delay(x);
    digitalWrite(column[5], 0);
    delay(x);
    digitalWrite(column[1], 0);
    delay(x);
    digitalWrite(column[2], 0);
    delay(x);
    digitalWrite(column[3], 0);
    delay(x);
    digitalWrite(column[7], 0);
    delay(x);
    digitalWrite(column[11], 0);
    delay(x);
    digitalWrite(column[15], 0);
    delay(x);
    digitalWrite(column[14], 0);
    delay(x);
    digitalWrite(column[13], 0);
    delay(x);
    digitalWrite(column[12], 0);
    delay(x);
    digitalWrite(column[8], 0);
    delay(x);
    digitalWrite(column[4], 0);
    delay(x);
    digitalWrite(column[0], 0);
    delay(x);
  }
}
//////////////////////////////////////go through all leds one at a time
void goThroughAllLedsOneAtATime()
{
  int x = 8;
  turnEverythingOff();
  for (int y = 0; y < 10; y++)
  {
    //0-3
    for (int count = 4; count != 0; count--)
    {
      digitalWrite(layer[count - 1], 1);
      for (int i = 0; i < 4; i++)
      {
        digitalWrite(column[i], 0);
        delay(x);
        digitalWrite(column[i], 1);
        delay(x);
      }
      digitalWrite(layer[count - 1], 0);
    }
    //4-7
    for (int count = 0; count < 4; count++)
    {
      digitalWrite(layer[count], 1);
      for (int i = 4; i < 8; i++)
      {
        digitalWrite(column[i], 0);
        delay(x);
        digitalWrite(column[i], 1);
        delay(x);
      }
      digitalWrite(layer[count], 0);
    }
    //8-11
    for (int count = 4; count != 0; count--)
    {
      digitalWrite(layer[count - 1], 1);
      for (int i = 8; i < 12; i++)
      {
        digitalWrite(column[i], 0);
        delay(x);
        digitalWrite(column[i], 1);
        delay(x);
      }
      digitalWrite(layer[count - 1], 0);
    }
    //12-15
    for (int count = 0; count < 4; count++)
    {
      digitalWrite(layer[count], 1);
      for (int i = 12; i < 16; i++)
      {
        digitalWrite(column[i], 0);
        delay(x);
        digitalWrite(column[i], 1);
        delay(x);
      }
      digitalWrite(layer[count], 0);
    }
  }
  /////////////////////////////geri salınım
  turnEverythingOff();
  for (int y = 0; y < 10; y++)
  {

    //12-15
    for (int count = 0; count < 4; count++)
    {
      digitalWrite(layer[count], 1);
      for (int i = 12; i < 16; i++)
      {
        digitalWrite(column[i], 0);
        delay(x);
        digitalWrite(column[i], 1);
        delay(x);
      }
      digitalWrite(layer[count], 0);
    }

    //8-11
    for (int count = 4; count != 0; count--)
    {
      digitalWrite(layer[count - 1], 1);
      for (int i = 8; i < 12; i++)
      {
        digitalWrite(column[i], 0);
        delay(x);
        digitalWrite(column[i], 1);
        delay(x);
      }
      digitalWrite(layer[count - 1], 0);
    }
    //4-7
    for (int count = 0; count < 4; count++)
    {
      digitalWrite(layer[count], 1);
      for (int i = 4; i < 8; i++)
      {
        digitalWrite(column[i], 0);
        delay(x);
        digitalWrite(column[i], 1);
        delay(x);
      }
      digitalWrite(layer[count], 0);
    }

    //0-3
    for (int count = 4; count != 0; count--)
    {
      digitalWrite(layer[count - 1], 1);
      for (int i = 0; i < 4; i++)
      {
        digitalWrite(column[i], 0);
        delay(x);
        digitalWrite(column[i], 1);
        delay(x);
      }
      digitalWrite(layer[count - 1], 0);
    }
  }
}

