#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //PonerB();
    connect (&Tempo,SIGNAL(timeout()),this,SLOT(OnTempo()));
    Tempo.start(2000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::OnTempo()
{
   ui->contSpinBox->setValue(ui->contSpinBox->value()+1);

}

void MainWindow::delay()
{
    QTime dieTime= QTime::currentTime().addMSecs(25);
    while (QTime::currentTime() < dieTime)
     QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
}

void MainWindow::on_btn_dibujar_clicked()
{
    int y=2;
    int yy=2;
    int o=1;
    QPixmap  pixmap(ui->miani->size());
    QPainter painter(&pixmap);
    QPen penr(Qt::SolidLine);
    penr.setColor(Qt::red);
    penr.setWidth(5);
    painter.setPen(penr);
    painter.setBrush(Qt::white);
    painter.drawRect(0,0,500,249);/*c*/
    painter.drawRect(0,60,30,200);/*p1*/
    painter.setPen(penr);
    painter.setBrush(Qt::blue);
    painter.drawRect(0,50,180,10);/*t1*/
    penr.setColor(Qt::blue);
    painter.setPen(penr);
    penr.setColor(Qt::red);
    painter.setPen(penr);
    painter.drawLine(175,75,170,55);/***/
    painter.drawLine(180,55,175,75);/***/
    painter.drawLine(47,162,47,225);/*p1*/
    painter.drawLine(53,162,53,225);/*p1*/
    painter.drawLine(47,225,27,295);/*p1*/
    painter.drawLine(53,225,73,295);/*p1*/
    painter.drawLine(147,162,147,225);/*p2*/
    painter.drawLine(153,162,153,225);/*p2*/
    painter.drawLine(147,225,127,295);/*p2*/
    painter.drawLine(153,225,173,295);/*p2*/
    painter.drawLine(247,160,247,205);/*p3*/
    painter.drawLine(253,160,253,205);/*p3*/
    painter.drawLine(247,225,227,295);/*p3*/
    painter.drawLine(253,225,273,295);/*p3*/
    painter.drawLine(347,225,327,295);/*p4*/
    painter.drawLine(353,225,373,295);/*p4*/
    painter.drawLine(447,225,427,295);/*p5*/
    painter.drawLine(453,225,473,295);/*p5*/
    penr.setColor(Qt::blue);
    painter.setPen(penr);
    painter.drawLine(160,55,175,55);
    penr.setColor(Qt::red);
    painter.setPen(penr);
    painter.setBrush(Qt::white);
    painter.drawRect(480,60,40,198);/*p2*/
    QPen penc(Qt::SolidLine);
    ui->miani->setPixmap(pixmap);
    delay();
    QPen pen(Qt::DashLine);
    pen.setColor(Qt::red);
    pen.setWidth(3);
    painter.setBrush(Qt::white);
    painter.setPen(pen);
    painter.drawEllipse(QPoint(50,150),10,10);/*e1*/
    painter.drawEllipse(QPoint(150,150),10,10);/*e2*/
    painter.drawEllipse(QPoint(250,150),10,10);/*e3*/
    painter.drawEllipse(QPoint(250,215),10,10);/*e4*/
    painter.drawEllipse(QPoint(350,215),10,10);/*e5*/
    painter.drawEllipse(QPoint(450,215),10,10);/*e6*/
    painter.drawLine(30,140,250,140);/*ct1*/
    painter.drawLine(30,160,250,160);/*ct2*/
    painter.drawLine(250,205,480,205);/*ct3*/
    painter.drawLine(250,225,480,225);/*ct4*/
    penc.setColor(Qt::red);
    penc.setWidth(1);
    painter.setPen(penc);
    painter.drawLine(240,215,260,215);
    painter.drawLine(340,215,360,215);
    painter.drawLine(440,215,460,215);
    pen.setColor(Qt::black);
    pen.setWidth(3);
    painter.setPen(pen);
    painter.drawText(20,20,"Caja grande");
    /*carga caja*/
    for (int x=0;x<50;x=x+2)
    {
        QPen penc1(Qt::SolidLine);
        penc1.setColor(Qt::black);
        penc1.setWidth(3);
        painter.setPen(penc1);
        painter.setBrush(Qt::yellow);
        painter.drawRect(264,142+50-x,50,0+x);
        penc1.setWidth(2);
        painter.setPen(penc1);
        painter.drawLine(262+x,198,268+x,198);
        delay();
        ui->miani->setPixmap(pixmap);
    }
    ui->miani->setPixmap(pixmap);
    delay();
    QPen pen1(Qt::SolidLine);
for(int a=0;a<2;a++)
{
    /*mov bot*/
    QPen pen1(Qt::SolidLine);
    pen1.setColor(Qt::red);
    painter.setPen(pen1);
    for (int x=0;x<=120;x=x+10)
    {
            pen1.setColor(Qt::red);
            painter.setBrush(Qt::white);
            painter.setPen(pen1);
            painter.drawRect((40+x),80,10,20);
            painter.drawRect((35+x),100,20,30);
            penc.setWidth(2);
            painter.drawLine(35+x,135,55+x,135);/***/
            if(o==1)
            {
                pen1.setColor(Qt::red);
                painter.setPen(pen1);
                painter.drawLine(50,160,50,140);/***/
                painter.drawLine(150,160,150,140);
                painter.drawLine(250,160,250,140);
                pen1.setColor(Qt::white);
                painter.setPen(pen1);
                painter.drawLine(40,150,60,150);/***/
                painter.drawLine(140,150,160,150);
                painter.drawLine(240,150,260,150);
                o=0;
                ui->miani->setPixmap(pixmap);
                delay();
                delay();
                delay();
            }
            else
            {
                pen1.setColor(Qt::red);
                painter.setPen(pen1);
                painter.drawLine(40,150,60,150);/***/
                painter.drawLine(140,150,160,150);
                painter.drawLine(240,150,260,150);
                pen1.setColor(Qt::white);
                painter.setPen(pen1);
                painter.drawLine(50,160,50,140);/***/
                painter.drawLine(150,160,150,140);
                painter.drawLine(250,160,250,140);
                o=1;
                ui->miani->setPixmap(pixmap);
                delay();
                delay();
                delay();
            }
            ui->miani->setPixmap(pixmap);
            delay();
            pen1.setColor(Qt::white);
            painter.setPen(pen1);
            penc.setWidth(2);
            painter.drawLine(35+x,135,55+x,135);/***/
            pen1.setWidth(3);
            pen1.setColor(Qt::white);
            painter.setBrush(Qt::white);
            painter.setPen(pen1);
            painter.drawRect((35+x),78,30,52);
            pen1.setColor(Qt::red);
            painter.setPen(pen1);
            ui->miani->setPixmap(pixmap);
    }
    pen1.setColor(Qt::red);
    painter.setBrush(Qt::white);
    painter.setPen(pen1);
    painter.drawRect(170,80,10,20);
    painter.drawRect(165,100,20,30);
    painter.drawLine(165,135,185,135);/***/
    ui->miani->setPixmap(pixmap);
    /*llenado de botella*/
    for (int x=0;x<=20;x++)
        {
            pen1.setColor(Qt::blue);
            painter.setPen(pen1);
            painter.drawLine(168,128-x,182,128-x);
            penc.setWidth(2);
            painter.drawLine(165+x,135,167+x,135);/***/
            ui->miani->setPixmap(pixmap);
            delay();
            delay();
            delay();
        }
    for (int x=0;x<=100;x=x+10)
    {
            pen1.setColor(Qt::red);
            painter.setBrush(Qt::white);
            painter.setPen(pen1);
            painter.drawRect((170+x),80,10,20);
            painter.drawRect((165+x),100,20,30);
            pen1.setColor(Qt::blue);
            painter.setBrush(Qt::blue);
            painter.setPen(pen1);
            painter.drawRect((168+x),102,14,26);
            penc.setWidth(2);
            painter.drawLine(165+x,135,185+x,135);
            if(o==1)
            {
                pen1.setColor(Qt::red);
                painter.setPen(pen1);
                painter.drawLine(50,160,50,140);/***/
                painter.drawLine(150,160,150,140);
                painter.drawLine(250,160,250,140);
                pen1.setColor(Qt::white);
                painter.setPen(pen1);
                painter.drawLine(40,150,60,150);/***/
                painter.drawLine(140,150,160,150);
                painter.drawLine(240,150,260,150);
                o=0;
                ui->miani->setPixmap(pixmap);
                delay();
                delay();
                delay();
            }
            else
            {
                pen1.setColor(Qt::red);
                painter.setPen(pen1);
                painter.drawLine(40,150,60,150);/***/
                painter.drawLine(140,150,160,150);
                painter.drawLine(240,150,260,150);
                pen1.setColor(Qt::white);
                painter.setPen(pen1);
                painter.drawLine(50,160,50,140);/***/
                painter.drawLine(150,160,150,140);
                painter.drawLine(250,160,250,140);
                o=1;
                ui->miani->setPixmap(pixmap);
                delay();
                delay();
                delay();
            }
            ui->miani->setPixmap(pixmap);
            delay();
            pen1.setColor(Qt::white);
            painter.setPen(pen1);
            penc.setWidth(2);
            painter.drawLine(165+x,135,185+x,135);/***/
            painter.setBrush(Qt::white);
            painter.drawRect((164+x),78,30,52);
            ui->miani->setPixmap(pixmap);
    }
/*guarda en caja*/
    y=2;
    yy=2;
    for (int x=10;x<=36;x=x+2)
    {
            pen1.setColor(Qt::red);
            painter.setBrush(Qt::white);
            painter.setPen(pen1);
            painter.drawRect(270,80+x,10,20);
            penc.setWidth(2);
            painter.drawRect(265,100+x,20,30-y);
            pen1.setColor(Qt::blue);
            painter.setBrush(Qt::blue);
            painter.setPen(pen1);
            painter.setBrush(Qt::blue);
            penc.setWidth(2);
            painter.drawRect(268,102+x,14,26-y);
            y=y+2;
            ui->miani->setPixmap(pixmap);
            delay();
            pen1.setColor(Qt::white);
            painter.setPen(pen1);
            painter.setBrush(Qt::white);
            painter.drawRect(264,78+x,30,56-y);
            delay();
            ui->miani->setPixmap(pixmap);
            penc.setWidth(2);
            painter.setPen(penc);
            painter.drawLine(262+x-10,198,266+x-10,198);
    }
    for (int x=10;x<=20;x=x+2)
    {
        pen1.setColor(Qt::red);
        painter.setBrush(Qt::white);
        painter.setPen(pen1);
        painter.drawRect(270,80+x+y,10,20-yy);
        yy=yy+2;
        ui->miani->setPixmap(pixmap);
        delay();
        pen1.setColor(Qt::white);
        painter.setPen(pen1);
        painter.setBrush(Qt::white);
        painter.drawRect(268,78+x+y,14,26-yy);
        delay();
        ui->miani->setPixmap(pixmap);
        penc.setWidth(2);
        painter.setPen(penc);
        painter.drawLine(290+x-10,198,304+x-10,198);/***/
    }
    pen1.setColor(Qt::black);
    pen1.setWidth(2);
    painter.setPen(pen1);
    painter.drawLine(262,198,314,198);/***/
    delay();
    ui->miani->setPixmap(pixmap);
}
    /*mov caja*/
    for (int x=0;x<=160;x=x+2)
    {
        QPen penc(Qt::SolidLine);
        penc.setColor(Qt::black);
        penc.setWidth(3);
        painter.setPen(penc);
        painter.setBrush(Qt::yellow);
        painter.drawRect(264+x,142,50,50);
        penc.setColor(Qt::red);
        penc.setWidth(2);
        painter.setPen(penc);
        painter.drawLine(262+x,198,316+x,198);/***/
        ui->miani->setPixmap(pixmap);
        delay();
        if(o==1)
        {
            pen1.setColor(Qt::red);
            painter.setPen(pen1);
            painter.drawLine(250,225,250,205);/***/
            painter.drawLine(350,225,350,205);
            painter.drawLine(450,225,450,205);
            pen1.setColor(Qt::white);
            painter.setPen(pen1);
            painter.drawLine(240,215,260,215);/***/
            painter.drawLine(340,215,360,215);
            painter.drawLine(440,215,460,215);
            o=0;
            ui->miani->setPixmap(pixmap);
            delay();
            delay();
        }
        else
        {
            pen1.setColor(Qt::red);
            painter.setPen(pen1);
            painter.drawLine(240,215,260,215);/***/
            painter.drawLine(340,215,360,215);
            painter.drawLine(440,215,460,215);
            pen1.setColor(Qt::white);
            painter.setPen(pen1);
            painter.drawLine(250,225,250,205);/***/
            painter.drawLine(350,225,350,205);
            painter.drawLine(450,225,450,205);
            o=1;
            ui->miani->setPixmap(pixmap);
            delay();
            delay();
        }
        penc.setColor(Qt::white);
        painter.setPen(penc);
        painter.setBrush(Qt::white);
        painter.drawRect(262+x,140,48,56);
        penc.setWidth(2);
        painter.setPen(penc);
        painter.drawLine(262+x,198,314,198);/***/
        delay();
        ui->miani->setPixmap(pixmap);
    }
    y=0;
    for (int x=0;x<52;x=x+2)
    {
        QPen penc(Qt::SolidLine);
        penc.setColor(Qt::black);
        penc.setWidth(3);
        painter.setPen(penc);
        painter.setBrush(Qt::yellow);
        painter.drawRect(424+x,142,50-y,50);
        penc.setWidth(2);
        penc.setColor(Qt::red);
        painter.setPen(penc);
        painter.drawLine(422+x,198,476,198);/***/
        ui->miani->setPixmap(pixmap);
        delay();
        if(o==1)
        {
            pen1.setColor(Qt::red);
            painter.setPen(pen1);
            painter.drawLine(250,225,250,205);/***/
            painter.drawLine(350,225,350,205);
            painter.drawLine(450,225,450,205);
            pen1.setColor(Qt::white);
            painter.setPen(pen1);
            painter.drawLine(240,215,260,215);/***/
            painter.drawLine(340,215,360,215);
            painter.drawLine(440,215,460,215);
            o=0;
            ui->miani->setPixmap(pixmap);
            delay();
            delay();
        }
        else
        {
            pen1.setColor(Qt::red);
            painter.setPen(pen1);
            painter.drawLine(240,215,260,215);/***/
            painter.drawLine(340,215,360,215);
            painter.drawLine(440,215,460,215);
            pen1.setColor(Qt::white);
            painter.setPen(pen1);
            painter.drawLine(250,225,250,205);/***/
            painter.drawLine(350,225,350,205);
            painter.drawLine(450,225,450,205);
            o=1;
            ui->miani->setPixmap(pixmap);
            delay();
            delay();
        }
        penc.setColor(Qt::white);
        penc.setWidth(3);
        painter.setPen(penc);
        painter.setBrush(Qt::white);
        painter.drawRect(424+x,140,50-y,56);
        penc.setWidth(2);
        painter.setPen(penc);
        painter.drawLine(422+x,198,476,198);/***/
        y=y+2;
        ui->miani->setPixmap(pixmap);
    }
}

void MainWindow::on_bnt_gra_clicked()
{
    QPixmap *pixmap1=new QPixmap(ui->migra->size());
    QPainter painter(pixmap1);
    QPen peng(Qt::SolidLine);
    peng.setColor(Qt::red);
    peng.setWidth(5);
    painter.setPen(peng);
    painter.setBrush(Qt::white);
    painter.drawRect(0,500,300,249);/*c*/
    ui->miani->setPixmap(*pixmap1);
    delay();
}
