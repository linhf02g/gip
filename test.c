#include <stdio.h>
#include <stdlib.h>//required to use 'rand()'
#include <time.h>//required to use 'srand(time(NULL))'
//program test(
int inmon();
int random();
int random()
{
    srand(time(NULL));
    int r;
    r = rand()%70+1;
}
int hoi();
int hoi()
{
    int tra;
    printf("Ban co muon lam tiep ko (1. co, 0. khong)\n");
    scanf("%d",&tra);
    if (tra==1)
    {
        return inmon();
    }
    else
        return 0;
}
int inmon()
{
    int m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13,m14,m15,m16,m17,m18,m19,m20,m41,m42,m43;
    int m21,m22,m23,m24,m25,m26,m27,m28,m29,m30,m31,m32,m33,m34,m35,m36,m37,m38,m39,m40;
    int m45,m46,m47,m48,m49,m50,m51,m52,m53,m54,m55,m56,m57,m58,m59,m60,m61,m62,m63,m64,m65;
    int m66,m67,m68,m69,m70,m44;

    if (random()==1)
    {
        printf("Sup Rau:\n");
        scanf("%d",&m1);
        if (m1==1)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==2)
    {
        printf("Sup Ga:\n");
        scanf("%d",&m2);
        if (m2==2)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==3)
    {
        printf("Sup Vit:\n");
        scanf("%d",&m3);
        if (m3==3)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==4)
    {
        printf("Sup Wan tan:\n");
        scanf("%d",&m4);
        if (m4==4)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }

    if(random()==5)
    {
        printf("Sup Tom Kha tofu:\n");
        scanf("%d",&m5);
        if (m5==5)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }

    if(random()==6)
    {
        printf("Sup Tom kha chicken:\n");
        scanf("%d",&m6);
        if (m6==6)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }

    if(random()==7)
    {
        printf("Sup Tom kha Tom:\n");
        scanf("%d",&m7);
        if (m7==7)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }

    if(random()==8)
    {
        printf("Goi ngo sen tofu:\n");
        scanf("%d",&m8);
        if (m8==8)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }

    if(random()==9)
    {
        printf("goi ngo sen ga:\n");
        scanf("%d",&m9);
        if (m9==9)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }

    if(random()==10)
    {
        printf("goi ngo sen tom:\n");
        scanf("%d",&m10);
        if (m10==10)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }

    if(random()==11)
    {
        printf("Goi mien tofu:\n");
        scanf("%d",&m11);
        if (m11==11)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }

    if(random()==12)
    {
        printf("Goi mien ga:\n");
        scanf("%d",&m12);
        if (m12==12)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }

    if(random()==13)
    {
        printf("Goi mien tom:\n");
        scanf("%d",&m13);
        if (m13==13)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }

    if(random()==14)
    {
        printf("Somme rolle tofu:\n");
        scanf("%d",&m14);
        if (m14==14)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }

    if(random()==15)
    {
        printf("sommer rolle Ga:\n");
        scanf("%d",&m15);
        if (m15==15)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }

    if(random()==16)
    {
        printf("Sommer Rolle Vit:\n");
        scanf("%d",&m16);
        if (m16==16)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==17)
    {
        printf("Sommer Rolle Tom:\n");
        scanf("%d",&m17);
        if (m17==17)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==18)
    {
        printf("Dimsum chay:\n");
        scanf("%d",&m18);
        if (m18==18)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==19)
    {
        printf("Dimsum tom:\n");
        scanf("%d",&m19);
        if (m19==19)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==20)
    {
        printf("Nem hanoi:\n");
        scanf("%d",&m20);
        if (m20==20)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==21)
    {
        printf("Nem Sai gon:\n");
        scanf("%d",&m21);
        if (m21==21)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==22)
    {
        printf("Nem Chay:\n");
        scanf("%d",&m22);
        if (m22==22)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==23)
    {
        printf("Wan tan chien:\n");
        scanf("%d",&m23);
        if (m23==23)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==24)
    {
        printf("Knusperkorb:\n");
        scanf("%d",&m24);
        if (m24==24)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==25)
    {
        printf("Bun Bo:\n");
        scanf("%d",&m25);
        if (m25==25)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==26)
    {
        printf("Bun Tom Vit:\n");
        scanf("%d",&m26);
        if (m26==26)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==27)
    {
        printf("Pho Xao pad thai:\n" );
        scanf("%d",&m27);
        if (m27==27)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==28)
    {
        printf("Pho xao vit:\n");
        scanf("%d",&m28);
        if (m28==28)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==29)
    {
        printf("Bun Nem Chay:\n");
        scanf("%d",&m29);
        if (m29==29)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==30)
    {
        printf("Pho Tofu:\n");
        scanf("%d",&m30);
        if (m30==30)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==31)
    {
        printf("Pho ga:\n");
        scanf("%d",&m31);
        if (m31==31)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==32)
    {
        printf("Pho rind:\n");
        scanf("%d",&m32);
        if (m32==32)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==33)
    {
        printf("Bun Mang vit:\n");
        scanf("%d",&m33);
        if (m33==33)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==34)
    {
        printf("Bun tom kha tofu:\n");
        scanf("%d",&m34);
        if (m34==40)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==35)
    {
        printf("Bun Tom kha hahnchen:\n");
        scanf("%d",&m35);
        if (m35==41)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==36)
    {
        printf("Bum Tom kha garnelen:\n");
        scanf("%d",&m36);
        if (m36==44)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==37)
    {
        printf("Gelbes curry mit Tofu:\n");
        scanf("%d",&m37);
        if (m37==60)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==38)
    {
        printf("Gelbes curry mit hahnchen:\n");
        scanf("%d",&m38);
        if (m38==61)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==39)
    {
        printf("Gelbes curry mit Ente:\n");
        scanf("%d",&m39);
        if (m39==63)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==40)
    {
        printf("Gelbes curry mit knuspriges hahnchen:\n");
        scanf("%d",&m40);
        if (m40==65)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==41)
    {
        printf("Gruenes curry mit tofu:\n");
        scanf("%d",&m41);
        if (m41==70)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==42)
    {
        printf("Gruenes curry mit hahnchen:\n");
        scanf("%d",&m42);
        if (m42==71)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==43)
    {
        printf("Gruenes curry mit Rind:\n");
        scanf("%d",&m43);
        if (m43==72)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==44)
    {
        printf("Gruenes curry mit Ente:\n");
        scanf("%d",&m44);
        if (m44==73)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==45)
    {
        printf("Gruenes curry mit garnelen:\n");
        scanf("%d",&m45);
        if (m45==74)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==46)
    {
        printf("Gruenes curry mit knuspriges hahnchen:\n");
        scanf("%d",&m46);
        if (m46==75)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==47)
    {
        printf("Rotes curry mit tofu:\n");
        scanf("%d",&m47);
        if (m47==80)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==48)
    {
        printf("Rotes curry mit hahnchen:\n");
        scanf("%d",&m48);
        if (m48==81)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==49)
    {
        printf("Rotes curry mit rind:\n");
        scanf("%d",&m49);
        if (m49==82)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==50)
    {
        printf("Rotes curry mit Ente:\n");
        scanf("%d",&m50);
        if (m50==83)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==51)
    {
        printf("Rotes curry mit garnelen:\n");
        scanf("%d",&m51);
        if (m51==84)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==70)
    {
        printf("Rotes curry mit knuspriges hahnchen:\n");
        scanf("%d",&m70);
        if (m70==85)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==52)
    {
        printf("Mango curry mit tofu:\n");
        scanf("%d",&m52);
        if (m52==90)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==53)
    {
        printf("Mango curry mit hahnchen:\n");
        scanf("%d",&m53);
        if (m53==91)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==54)
    {
        printf("Erdnuss curry mit tofu:\n");
        scanf("%d",&m54);
        if (m54==100)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==55)
    {
        printf("Erdnuss curry mit hahnchen:\n" );
        scanf("%d",&m55);
        if (m55==101)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==56)
    {
        printf("Erdnuss curry mit Ente:\n");
        scanf("%d",&m56);
        if (m56==103)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==57)
    {
        printf("Ga Sot Me:\n");
        scanf("%d",&m57);
        if (m57==111)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==58)
    {
        printf("Tauxi tofi:\n" );
        scanf("%d",&m58);
        if (m58==120)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==59)
    {
        printf("Tauxi rind:\n");
        scanf("%d",&m59);
        if (m59==122)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==60)
    {
        printf("tauxi Ente:\n");
        scanf("%d",&m60);
        if (m60==123)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==61)
    {
        printf("chili basil hahnchen:\n");
        scanf("%d",&m61);
        if (m61==131)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==62)
    {
        printf("chili basil rind:\n");
        scanf("%d",&m62);
        if (m62==132)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==63)
    {
        printf("saigon wok vegetarisch:\n");
        scanf("%d",&m63);
        if (m63==140)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==64)
    {
        printf("saigon wok hahnchen:\n");
        scanf("%d",&m64);
        if (m64==141)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==65)
    {
        printf("sai gon wok Ente:\n" );
        scanf("%d",&m65);
        if (m65==143)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==66)
    {
        printf("sa ot hahnchen:\n" );
        scanf("%d",&m66);
        if (m66==151)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==67)
    {
        printf("sa ot garnelen:\n" );
        scanf("%d",&m67);
        if (m67==154)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==68)
    {
        printf("Gebratene Reisnudeln:\n" );
        scanf("%d",&m68);
        if (m68==161)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
    if(random()==69)
    {
        printf("knuspriges hahnchen:\n" );
        scanf("%d",&m69);
        if (m69==162)
            printf("dung\n");
        else
            printf("sai\n");
        return hoi();
    }
}
int main ()
{
    printf("Test ten mon an va so\n");
    inmon();
}