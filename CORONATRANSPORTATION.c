#include<graphics.h>
#include<stdio.h>
void giris(int a){

//konusma balonu
 for(a=0;a<1300;a+=10)
 {
 	setcolor(RED);
  rectangle(10+a,100,800+a,700);//konusma balonu
	settextstyle(2,HORIZ_DIR,17);  //konusma balonu
    outtextxy(200+a,200,"KORONA NEDEN?YLE");  //konusma balonu	
	settextstyle(2,HORIZ_DIR,17);  //konusma balonu
    outtextxy(90+a,300," METROYA SINIRLI YOLCU  ALIMI");//konusma balonu
    setcolor(BLUE);
setcolor(BROWN);
    settextstyle(2,HORIZ_DIR,17);  //konusma balonu
    outtextxy(450+a,625," OZAN K?RTELL?");//konusma balonu
	  delay(100);
cleardevice();
 }

}

void gorevli()
{  //gorevli
	setcolor(BLUE)  ;
         arc(650,40,0,180,12);//?apka
	  line(640,40,670,40);// ?apka
	  settextstyle(2,HORIZ_DIR,5); // ?apka
      outtextxy(645,30,"G"); // ?apka
	setcolor(BLUE);
	circle(650,50,10); // bas
    line(650,60,650,110);// govde
	line(650,75,635,90); //sol el
	line(650,75,665,90); //sag el
	line(650,110,635,125); //sol ayak
	line(650,110,665,125); //sag ayak
}
void durak1()
{ setcolor(BLUE);
     rectangle(125,200,500,540);
      setfillstyle(SOLID_FILL,BLACK);
      floodfill(400,400,BLACK);
       setcolor(RED);
	 rectangle(125,200,500,300);
      settextstyle(4,HORIZ_DIR,4);  //DURAK
      outtextxy(220,230,"ACIBADEM");  //DURAK
}
void durak2()
{setcolor(BLUE);
     rectangle(125,200,750,540);
      setfillstyle(SOLID_FILL,BLACK);
      floodfill(400,400,BLACK);
       setcolor(RED);
	 rectangle(125,200,750,300);
      settextstyle(4,HORIZ_DIR,4);  //DURAK
 outtextxy(320,230,"G?ZTEPE");   //DURAK
}
void adam1(int i){// 1.adam 

	circle(1000-i,100,10); // bas
    line(1000-i,110,1000-i,160);// govde
	line(1000-i,115,985-i,130); //sol el
	line(1000-i,115,1015-i,130); //sag el
	line(1000-i,160,985-i,175); //sol ayak
	line(1000-i,160,1015-i,175); //sag ayak
		 
}
void adam2(int i){ //2.adam	 

	circle(1150-i,100,10); // bas
    line(1150-i,110,1150-i,160);// govde
	line(1150-i,115,1135-i,130); //sol el
	line(1150-i,115,1165-i,130); //sag el
	line(1150-i,160,1135-i,175); //sol ayak
	line(1150-i,160,1165-i,175); //sag ayak 
	  
}
void adam3(int i){//3.adam

	circle(1300-i,100,10); // bas
    line(1300-i,110,1300-i,160);// govde
	line(1300-i,115,1285-i,130); //sol el
	line(1300-i,115,1315-i,130); //sag el
	line(1300-i,160,1285-i,175); //sol ayak
	line(1300-i,160,1315-i,175); //sag ayak  
		 
}
void adam4(int i){//4.adam

	circle(1450-i,100,10); // bas
    line(1450-i,110,1450-i,160);// govde
	line(1450-i,115,1435-i,130); //sol el
	line(1450-i,115,1465-i,130); //sag el
	line(1450-i,160,1435-i,175); //sol ayak
	line(1450-i,160,1465-i,175); //sag ayak  
		 
}
void adam5(int i){//5.adam

	circle(1700-i,100,10); // bas
    line(1700-i,110,1700-i,160);// govde
	line(1700-i,115,1685-i,130); //sol el
	line(1700-i,115,1715-i,130); //sag el
	line(1700-i,160,1685-i,175); //sol ayak
	line(1700-i,160,1715-i,175); //sag ayak
	 }
void adam6(int i){//	6.adam
	circle(1750-i,100,10); // bas
    line(1750-i,110,1750-i,160);// govde
	line(1750-i,115,1735-i,130); //sol el
	line(1750-i,115,1765-i,130); //sag el
	line(1750-i,160,1735-i,175); //sol ayak
	line(1750-i,160,1765-i,175); //sag ayak  
}
void adam7(int i){//7.adam
	circle(2000-i,100,10); // bas
    line(2000-i,110,2000-i,160);// govde
	line(2000-i,115,1985-i,130); //sol el
	line(2000-i,115,2015-i,130); //sag el
	line(2000-i,160,1985-i,175); //sol ayak
	line(2000-i,160,2015-i,175); //sag ayak  
}
void ilkgelenmetro(int x,int j){
setcolor(6); // metronun kendisi icin renk degisimi
      rectangle(50+j-x,400,200+j-x,500);//1. vagon
      rectangle(200+j-x,400,350+j-x,500);//2.vagon
      rectangle(280+j-x,370,350+j-x,400);// guzargahin yazdigi kutucuk
      circle(70+j-x,520,20);   //1.teker
      circle(210+j-x,520,20);  //2.teker
       circle(340+j-x,520,20);  //3.teker
       setcolor(7); //kapilar icin renk degisimi
      rectangle(100+j-x,400,150+j-x,500);  //1.kapi
       line(125+j-x,400,125+j-x,500);   //1.kapiyi ayiran cizgi
       rectangle(250+j-x,400,300+j-x,500);  //2.kapi
       line(275+j-x,400,275+j-x,500);  //2.kapiyi ayiran cizgi
      settextstyle(2,HORIZ_DIR,5); //kadikoy yazi sitili
      outtextxy(285+j-x,371,"KADIKOY");  //guzergah yazissi
      settextstyle(2,HORIZ_DIR,5);  //tansantepe yazi sitili
      outtextxy(285+j-x,384,"TAVSANTEPE");  //guzergah yazissi
        line(350+j-x,400,400+j-x,430);
        line(350+j-x,500,400+j-x,460);
         line(400+j-x,430,400+j-x,460);//metronun onundeki yay
}
void ikincigelenmetro(int x,int j){ setcolor(6); // metronun kendisi icin renk degisimi
      rectangle(50+j-x,400,200+j-x,500);//1. vagon
       rectangle(350+j-x,400,500+j-x,500);//3.vagon
	  rectangle(200+j-x,400,350+j-x,500);//2.vagon
      rectangle(280+j-x,370,350+j-x,400);// guzargahin yazdigi kutucuk
      circle(70+j-x,520,20);   //1.teker
      circle(210+j-x,520,20);  //2.teker
       circle(340+j-x,520,20);  //3.teker
         circle(490+j-x,520,20);  //3.teker
       setcolor(7); //kapilar icin renk degisimi
      rectangle(100+j-x,400,150+j-x,500);  //1.kapi
       line(125+j-x,400,125+j-x,500);   //1.kapiyi ayiran cizgi
       rectangle(250+j-x,400,300+j-x,500);  //2.kapi
       line(275+j-x,400,275+j-x,500);  //2.kapiyi ayiran cizgi
        rectangle(400+j-x,400,450+j-x,500);  //3.kapi
       line(425+j-x,400,425+j-x,500);  //2.kapiyi ayiran cizgi
      settextstyle(2,HORIZ_DIR,5); //kadikoy yazi sitili
      outtextxy(285+j-x,371,"KADIKOY");  //guzergah yazissi
      settextstyle(2,HORIZ_DIR,5);  //tansantepe yazi sitili
      outtextxy(285+j-x,384,"TAVSANTEPE");  //guzergah yazissi
        line(500+j-x,400,550+j-x,430);
        line(500+j-x,500,550+j-x,460);
         line(550+j-x,430,550+j-x,460);//metronun onundeki yay
}
void konusmabalonu(){//konusma balonu
	circle(880,40,37);  
	line(843,50,830,70);
	line(830,70,850,60);
	 
	// balonun icindeki yazi
	settextstyle(2,HORIZ_DIR,5);  
    outtextxy(850,30,"NEDEN ");  
	outtextxy(845,45,"GIREMIYORUM ");  
	
	delay(3000); // iki konusma arasi bekleme suresi

    // guvenlik konusma balonu
     circle(735,40,37);  
	 line(698,50,685,70);
	 line(685,70,705,60);
	  
	// guvenlik balonun icindeki yazi
	settextstyle(2,HORIZ_DIR,5);  
    outtextxy(710,23,"MAKSIMUM  ");  
	 outtextxy(718,37,"SAYIYA ");
 outtextxy(718,52,"ULASILDI "); 
		delay(3000);
 
}
int main()
{
	initwindow(5000,5000);
	int gd = DETECT, gm;
	int i,j,x,o,z,a;
 giris(a);

// ?nsanlari ekrana getirme
setlinestyle(0,0,3);
for(i=0,j=0;i<900 || j<100;i+=10,j+=10)	
  {
line(0,180,2000,180);
adam1(i);
adam2(i);
adam3(i);
adam4(i);
adam5(i);	
gorevli();
durak1();
  
setcolor(WHITE);
	if(j>100) // metroyu durdurma
    x=j-90;
   
      line(0,540,5000,540);  //yol
    
	
      ilkgelenmetro(x,j);
    
	  


    setcolor(WHITE);
	  // ac?k turnike 
	  if(i==270) {
      	line(700,135,700,175);
        line(760,135,760,175);
       
		rectangle(540,50,580,80);
   settextstyle(3,HORIZ_DIR,4); 
      outtextxy(550,50,"0");
   rectangle(580,50,620,80);
   outtextxy(580,50,"1");
		
     setcolor(GREEN);
	 circle(700,135,10);
delay(500);
    setcolor(WHITE);
	  }
	  else if( i==420) {
      	line(700,135,700,175);
        line(760,135,760,175);
       
		rectangle(540,50,580,80);
   settextstyle(3,HORIZ_DIR,4); 
      outtextxy(550,50,"0");
   rectangle(580,50,620,80);
   outtextxy(580,50,"2");
		
     setcolor(GREEN);
	 circle(700,135,10);
delay(500);
    setcolor(WHITE);
	  } 
	  else if(i==570) {
      	line(700,135,700,175);
        line(760,135,760,175);
       
		rectangle(540,50,580,80);
   settextstyle(3,HORIZ_DIR,4); 
      outtextxy(550,50,"0");
   rectangle(580,50,620,80);
   outtextxy(580,50,"3");
		
     setcolor(GREEN);
	 circle(700,135,10);
delay(500);
    setcolor(WHITE); }
	else if (i==720){
      	line(700,135,700,175);
        line(760,135,760,175);
       
		rectangle(540,50,580,80);
   settextstyle(3,HORIZ_DIR,4); 
      outtextxy(550,50,"0");
   rectangle(580,50,620,80);
   outtextxy(580,50,"4");
		
     setcolor(GREEN);
	 circle(700,135,10);
delay(500);
    setcolor(WHITE);
	}
     
	  else
	   {
	  	
    //  kapali turnike
    circle(700,135,10);
           line(700,135,700,175);
           line(760,135,760,175);
           rectangle(700,135,760,145);
           rectangle(540,50,580,80);//saya?
   settextstyle(3,HORIZ_DIR,4); //saya?
      outtextxy(550,50,"-");//saya?
   rectangle(580,50,620,80);//saya?
	  settextstyle(3,HORIZ_DIR,4); //saya?
      outtextxy(580,50,"-");//saya?
	    }

    delay(250);
    cleardevice();
    
    
    
  }
  adam1(i);
	cleardevice();
    adam2(i); 
		cleardevice();
adam3(i);
	cleardevice();
	adam4(i);
    	cleardevice();
	adam5(i);
	
	

    //yol
   
     line(0,540,2000,540);
    
     ilkgelenmetro(x,j);
    cleardevice();
	  durak1();
	 setcolor(WHITE);
	  line(0,180,2000,180);
	    gorevli();
  setcolor(WHITE);
	      	//5.adam
	circle(780,100,10); // bas
    line(780,110,780,160);// govde
	line(780,115,765,130); //sol el
	line(780,115,795,130); //sag el
	line(780,160,765,175); //sol ayak
	line(780,160,795,175); //sag ayak
	    // turnike
            line(700,135,700,175);
           line(760,135,760,175);
          rectangle(700,135,760,145);
             circle(700,135,10);
           //yol
   
     line(0,540,2000,540);
   ilkgelenmetro(x,j);
    setcolor(WHITE);
   
	  rectangle(540,50,580,80);//saya?
   settextstyle(3,HORIZ_DIR,4); //saya?
      outtextxy(550,50,"0");//saya?
   rectangle(580,50,620,80);//saya?
	  settextstyle(3,HORIZ_DIR,4); //saya?
      outtextxy(580,50,"4");//saya?
	 konusmabalonu();

      

 for(o=0;o<1500;o+=5){
 // metronun kendisi icin renk degisimi
      setcolor(7);
	  line(0,180,2000,180);//yolcu yolu
	   setcolor(6);
	  rectangle(150+o,400,300+o,500);//1. vagon
      rectangle(300+o,400,450+o,500);//2.vagon
      rectangle(380+o,370,450+o,400);// guzargahin yazdigi kutucuk
      circle(170+o,520,20);   //1.teker
      circle(310+o,520,20);  //2.teker
       circle(440+o,520,20);  //3.teker
       setcolor(7); //kapilar icin renk degisimi
      rectangle(200+o,400,250+o,500);  //1.kapi
       line(225+o,400,225+o,500);   //1.kapiyi ayiran cizgi
       rectangle(350+o,400,400+o,500);  //2.kapi
       line(375+o,400,375+o,500);  //2.kapiyi ayiran cizgi
      settextstyle(2,HORIZ_DIR,5); //kadikoy yazi sitili
      outtextxy(385+o,371,"KADIKOY");  //guzergah yazissi
      settextstyle(2,HORIZ_DIR,5);  //tansantepe yazi sitili
      outtextxy(385+o,384,"TAVSANTEPE");  //guzergah yazissi
     line(450+o,400,500+o,430);
        line(450+o,500,500+o,460);
         line(500+o,430,500+o,460);  //metronun onundeki yay
      circle(170+o,440,10);//metro i?indeki yolcu 1 kafa
      line(170+o,450,170+o,480);//metro i?indeki yolcu 1 g?vde
      line(170+o,480,190+o,500);//metro i?indeki yolcu 1 ayak
       line(170+o,460,180+o,470);//metro i?indeki yolcu 1 kol
	  line(160+o,450,160+o,480);//koltuk
	  line(160+o,480,180+o,480);//koltuk
	  circle(270+o,440,10);//metro i?indeki yolcu 2 kafa
      line(270+o,450,270+o,480);//metro i?indeki yolcu 2 g?vde
      line(270+o,480,290+o,500);//metro i?indeki yolcu 2 ayak
       line(270+o,460,280+o,470);//metro i?indeki yolcu 2 kol
	  line(260+o,450,260+o,480);//koltuk
	  line(260+o,480,280+o,480);//koltuk
      circle(330+o,440,10);//metro i?indeki yolcu 3 kafa
      line(330+o,450,330+o,480);//metro i?indeki yolcu 3 g?vde
      line(330+o,480,350+o,500);//metro i?indeki yolcu 3 ayak
       line(330+o,460,340+o,470);//metro i?indeki yolcu 3 kol
	  line(320+o,450,320+o,480);//koltuk
	  line(320+o,480,340+o,480);//koltuk 
      circle(430+o,440,10);//metro i?indeki yolcu 4 kafa
         line(430+o,450,430+o,480);//metro i?indeki yolcu 3 g?vde
      line(430+o,480,450+o,500);//metro i?indeki yolcu 3 ayak
       line(430+o,460,440+o,470);//metro i?indeki yolcu 3 kol
	  line(420+o,450,420+o,480);//koltuk
	  line(420+o,480,440+o,480);//koltuk 
      delay(50);
      cleardevice();
        rectangle(540,50,580,80);//saya?
   settextstyle(3,HORIZ_DIR,4); //saya?
      outtextxy(550,50,"0");//saya?
   rectangle(580,50,620,80);//saya?
	  settextstyle(3,HORIZ_DIR,4); //saya?
      outtextxy(580,50,"4");//saya?
	   gorevli();
	   setcolor(WHITE);
	 // turnike
            line(700,135,700,175);
           line(760,135,760,175);
           rectangle(700,135,760,145);
             circle(700,135,10);
           	//5.adam
	circle(780,100,10); // bas
    line(780,110,780,160);// govde
	line(780,115,765,130); //sol el
	line(780,115,795,130); //sag el
	line(780,160,765,175); //sol ayak
	line(780,160,795,175); //sag ayak
	   //yol
	    setcolor(WHITE);
   line(0,540,2000,540  );  
     durak1();
    
    
     setcolor(WHITE);
     line(0,540,2000,540);
    line(0,180,2000,180); }
  

// ?nsanlari ekrana getirme
setlinestyle(0,0,3);
for(i=0,j=0;i<1100 || j<1100;i+=10,j+=10)	
  {
  	  line(0,180,2000,180);
	  setcolor(WHITE);	
adam1(i);
adam2(i);  
adam3(i);  
adam4(i);
//5.adam
circle(1600-i,100,10); // bas
line(1600-i,110,1600-i,160);// govde
line(1600-i,115,1585-i,130); //sol el
line(1600-i,115,1615-i,130); //sag el
line(1600-i,160,1585-i,175); //sol ayak
line(1600-i,160,1615-i,175); //sag ayak  
adam6(i);
adam7(i);	
gorevli();
durak2();

setcolor(WHITE);
	if(j>200) // metroyu durdurma
    x=j-90;
   line(0,540,5000,540);  //yol
    
	
	ikincigelenmetro(x,j);
	
	
	
	setcolor(WHITE);
	  // ac?k turnike 
	  if(i==270) {
      	line(700,135,700,175);
        line(760,135,760,175);
       	rectangle(540,50,580,80);
   settextstyle(3,HORIZ_DIR,4); 
      outtextxy(550,50,"0");
   rectangle(580,50,620,80);
   outtextxy(580,50,"1");
		setcolor(GREEN);
	 circle(700,135,10);
delay(200);
    setcolor(WHITE);
	  }
	  else if( i==420) {
      	line(700,135,700,175);
        line(760,135,760,175);
       
		rectangle(540,50,580,80);
   settextstyle(3,HORIZ_DIR,4); 
      outtextxy(550,50,"0");
   rectangle(580,50,620,80);
   outtextxy(580,50,"2");
		
     setcolor(GREEN);
	 circle(700,135,10);
delay(200);
    setcolor(WHITE);
	  } 
	  else if(i==570) {
      	line(700,135,700,175);
        line(760,135,760,175);
       
		rectangle(540,50,580,80);
   settextstyle(3,HORIZ_DIR,4); 
      outtextxy(550,50,"0");
   rectangle(580,50,620,80);
   outtextxy(580,50,"3");
		
     setcolor(GREEN);
	 circle(700,135,10);
delay(200);
    setcolor(WHITE); }
	else if (i==720){
      	line(700,135,700,175);
        line(760,135,760,175);
       
		rectangle(540,50,580,80);
   settextstyle(3,HORIZ_DIR,4); 
      outtextxy(550,50,"0");
   rectangle(580,50,620,80);
   outtextxy(580,50,"4");
		
     setcolor(GREEN);
	 circle(700,135,10);
	 
delay(200);
setcolor(WHITE);}
	else if (i==870){
      	line(700,135,700,175);
        line(760,135,760,175);
       
		rectangle(540,50,580,80);
   settextstyle(3,HORIZ_DIR,4); 
      outtextxy(550,50,"0");
   rectangle(580,50,620,80);
   outtextxy(580,50,"5");
		
     setcolor(GREEN);
	 circle(700,135,10);
delay(200);
setcolor(WHITE);
	}
	else if (i==1020){
      	line(700,135,700,175);
        line(760,135,760,175);
       
		rectangle(540,50,580,80);
   settextstyle(3,HORIZ_DIR,4); 
      outtextxy(550,50,"0");
   rectangle(580,50,620,80);
   outtextxy(580,50,"6");
		
     setcolor(GREEN);
	 circle(700,135,10);
delay(200);
    setcolor(WHITE);
	}
     
	  else
	   {
	  	
    //  kapali turnike
    circle(700,135,10);
           line(700,135,700,175);
           line(760,135,760,175);
           rectangle(700,135,760,145);
           rectangle(540,50,580,80);//saya?
   settextstyle(3,HORIZ_DIR,4); //saya?
      outtextxy(550,50,"-");//saya?
   rectangle(580,50,620,80);//saya?
	  settextstyle(3,HORIZ_DIR,4); //saya?
      outtextxy(580,50,"-");//saya?
	    }

    delay(250);
    cleardevice();
    
  
  }
 adam1(i);
	cleardevice();
    adam2(i);
		cleardevice();
 adam3(i);  
	cleardevice();
 adam4(i);  
    	cleardevice();
	//5.adam
	circle(1700-i,100,10); // bas
    line(1700-i,110,1700-i,160);// govde
	line(1700-i,115,1685-i,130); //sol el
	line(1700-i,115,1715-i,130); //sag el
	line(1700-i,160,1685-i,175); //sol ayak
	line(1700-i,160,1715-i,175); //sag ayak 
	cleardevice(); 
	 adam6(i); 
		cleardevice();
		 adam7(i);
	
//yol
   
     line(0,540,2000,540);
    
     ikincigelenmetro(x,j);
    cleardevice();
	  durak2();
	 setcolor(WHITE);
	  line(0,180,2000,180);
	    gorevli();
  setcolor(WHITE);
	
    	//7.adam
	circle(790,100,10); // bas
    line(790,110,790,160);// govde
	line(790,115,775,130); //sol el
	line(790,115,805,130); //sag el
	line(790,160,775,175); //sol ayak
	line(790,160,805,175); //sag ayak 
    // turnike
            line(700,135,700,175);
           line(760,135,760,175);
         rectangle(700,135,760,145);
             circle(700,135,10);
               //yol
   
     line(0,540,2000,540);
    ikincigelenmetro(x,j);
    	 setcolor(WHITE);
      rectangle(540,50,580,80);//saya?
   settextstyle(3,HORIZ_DIR,4); //saya?
      outtextxy(550,50,"0");//saya?
   rectangle(580,50,620,80);//saya?
	  settextstyle(3,HORIZ_DIR,4); //saya?
      outtextxy(580,50,"6");//saya?
  konusmabalonu();
  
		

	    
 for(o=0;o<1500;o+=5){
 // metronun kendisi icin renk degisimi
        setcolor(6); // metronun kendisi icin renk degisimi
      rectangle(50+o,400,200+o,500);//1. vagon
       rectangle(350+o,400,500+o,500);//3.vagon
	  rectangle(200+o,400,350+o,500);//2.vagon
      rectangle(280+o,370,350+o,400);// guzargahin yazdigi kutucuk
      circle(70+o,520,20);   //1.teker
      circle(210+o,520,20);  //2.teker
       circle(340+o,520,20);  //3.teker
         circle(490+o,520,20);  //3.teker
       setcolor(7); //kapilar icin renk degisimi
      rectangle(100+o,400,150+o,500);  //1.kapi
       line(125+o,400,125+o,500);   //1.kapiyi ayiran cizgi
       rectangle(250+o,400,300+o,500);  //2.kapi
       line(275+o,400,275+o,500);  //2.kapiyi ayiran cizgi
        rectangle(400+o,400,450+o,500);  //3.kapi
       line(425+o,400,425+o,500);  //3.kapiyi ayiran cizgi
      settextstyle(2,HORIZ_DIR,5); //kadikoy yazi sitili
      outtextxy(285+o,371,"KADIKOY");  //guzergah yazissi
      settextstyle(2,HORIZ_DIR,5);  //tansantepe yazi sitili
      outtextxy(285+o,384,"TAVSANTEPE");  //guzergah yazissi
        line(500+o,400,550+o,430);
        line(500+o,500,550+o,460);
         line(550+o,430,550+o,460);//metronun onundeki yay
      circle(70+o,440,10);//metro i?indeki yolcu 1 kafa
      line(70+o,450,70+o,480);//metro i?indeki yolcu 1 g?vde
      line(70+o,480,90+o,500);//metro i?indeki yolcu 1 ayak
       line(70+o,460,80+o,470);//metro i?indeki yolcu 1 kol
	  line(60+o,450,60+o,480);//koltuk
	  line(60+o,480,80+o,480);//koltuk
	  circle(170+o,440,10);//metro i?indeki yolcu 2 kafa
      line(170+o,450,170+o,480);//metro i?indeki yolcu 2 g?vde
      line(170+o,480,190+o,500);//metro i?indeki yolcu 2 ayak
       line(170+o,460,180+o,470);//metro i?indeki yolcu 2 kol
	  line(160+o,450,160+o,480);//koltuk
	  line(160+o,480,180+o,480);//koltuk
	   circle(230+o,440,10);//metro i?indeki yolcu 3 kafa
      line(230+o,450,230+o,480);//metro i?indeki yolcu 3 g?vde
      line(230+o,480,250+o,500);//metro i?indeki yolcu 3 ayak
       line(230+o,460,240+o,470);//metro i?indeki yolcu 3 kol
	  line(220+o,450,220+o,480);//koltuk
	  line(220+o,480,240+o,480);//koltuk 
      circle(330+o,440,10);//metro i?indeki yolcu 4 kafa
         line(330+o,450,330+o,480);//metro i?indeki yolcu 3 g?vde
      line(330+o,480,350+o,500);//metro i?indeki yolcu 3 ayak
       line(330+o,460,340+o,470);//metro i?indeki yolcu 3 kol
	  line(320+o,450,320+o,480);//koltuk
	  line(320+o,480,340+o,480);//koltuk 
	  circle(380+o,440,10);//metro i?indeki yolcu 5 kafa
         line(380+o,450,380+o,480);//metro i?indeki yolcu 5 g?vde
      line(380+o,480,400+o,500);//metro i?indeki yolcu 5 ayak
       line(380+o,460,390+o,470);//metro i?indeki yolcu 5 kol
	  line(370+o,450,370+o,480);//koltuk
	  line(370+o,480,390+o,480);//koltuk 
	  circle(480+o,440,10);//metro i?indeki yolcu 6 kafa
         line(480+o,450,480+o,480);//metro i?indeki yolcu 6 g?vde
      line(480+o,480,500+o,500);//metro i?indeki yolcu 6 ayak
       line(480+o,460,490+o,470);//metro i?indeki yolcu 6 kol
	  line(470+o,450,470+o,480);//koltuk
	  line(470+o,480,490+o,480);//koltuk 
      delay(50);
      cleardevice();
        rectangle(540,50,580,80);//saya?
   settextstyle(3,HORIZ_DIR,4); //saya?
      outtextxy(550,50,"0");//saya?
   rectangle(580,50,620,80);//saya?
	  settextstyle(3,HORIZ_DIR,4); //saya?
      outtextxy(580,50,"6");//saya?
	      gorevli();
	      setcolor(WHITE);
		//7.adam
	circle(790,100,10); // bas
    line(790,110,790,160);// govde
	line(790,115,775,130); //sol el
	line(790,115,805,130); //sag el
	line(790,160,775,175); //sol ayak
	line(790,160,805,175); //sag ayak 
	 // turnike
            line(700,135,700,175);
           line(760,135,760,175);
           rectangle(700,135,760,145);
             circle(700,135,10);
          line(0,180,2000,180);
	   //yol
	    setcolor(WHITE);
   line(0,540,2000,540  );  
 durak2();
 setcolor(WHITE);
    		//7.adam
	circle(1900,100,10); // bas
    line(1900,110,1900,160);// govde
	line(1900,115,1885,130); //sol el
	line(1900,115,1915,130); //sag el
	line(1900,160,1885,175); //sol ayak
	line(1900,160,1915,175); //sag ayak 
     }
 setcolor(WHITE);
     line(0,540,2000,540);
    line(0,180,2000,180);
	getch();
	closegraph();
}
