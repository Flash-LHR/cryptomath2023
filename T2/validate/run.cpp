#include <cstdio>

int main() {
struct bitDomain {
    int bit;

    bitDomain(int _bit = 0) {
        bit = _bit;
    }

    bitDomain operator+(const bitDomain& _bitDomain) {
        return bit ^ _bitDomain.bit;
    }

    bitDomain operator*(const bitDomain& _bitDomain) {
        return bit & _bitDomain.bit;
    }

    bool operator==(const bitDomain& _bitDomain) {
        return bit == _bitDomain.bit;
    }
};

bitDomain x1;bitDomain x2;bitDomain x3;bitDomain x4;bitDomain x5;bitDomain x6;bitDomain x7;bitDomain x8;bitDomain x9;bitDomain x10;bitDomain x11;bitDomain x12;bitDomain x13;bitDomain x14;bitDomain x15;bitDomain x16;bitDomain x17;bitDomain x18;bitDomain x19;bitDomain x20;bitDomain x21;bitDomain x22;bitDomain x23;bitDomain x24;bitDomain x25;bitDomain x26;bitDomain x27;bitDomain x28;bitDomain x29;bitDomain x30;bitDomain x31;bitDomain x32;bitDomain x33;bitDomain x34;bitDomain x35;bitDomain x36;bitDomain x37;bitDomain x38;bitDomain x39;bitDomain x40;bitDomain x41;bitDomain x42;bitDomain x43;bitDomain x44;bitDomain x45;bitDomain x46;bitDomain x47;bitDomain x48;bitDomain x49;bitDomain x50;bitDomain x51;bitDomain x52;bitDomain x53;bitDomain x54;bitDomain x55;bitDomain x56;bitDomain x57;bitDomain x58;bitDomain x59;bitDomain x60;bitDomain x61;bitDomain x62;bitDomain x63;bitDomain x64;bitDomain x65;bitDomain x66;bitDomain x67;bitDomain x68;bitDomain x69;bitDomain x70;bitDomain x71;bitDomain x72;bitDomain x73;bitDomain x74;bitDomain x75;bitDomain x76;bitDomain x77;bitDomain x78;bitDomain x79;bitDomain x80;bitDomain x81;bitDomain x82;bitDomain x83;bitDomain x84;bitDomain x85;bitDomain x86;bitDomain x87;bitDomain x88;bitDomain x89;bitDomain x90;bitDomain x91;bitDomain x92;bitDomain x93;bitDomain x94;bitDomain x95;bitDomain x96;bitDomain x97;bitDomain x98;bitDomain x99;bitDomain x100;bitDomain x101;bitDomain x102;bitDomain x103;bitDomain x104;bitDomain x105;bitDomain x106;bitDomain x107;bitDomain x108;bitDomain x109;bitDomain x110;bitDomain x111;bitDomain x112;bitDomain x113;bitDomain x114;bitDomain x115;bitDomain x116;bitDomain x117;bitDomain x118;bitDomain x119;bitDomain x120;bitDomain x121;bitDomain x122;bitDomain x123;bitDomain x124;bitDomain x125;bitDomain x126;bitDomain x127;bitDomain x128;bitDomain y1;bitDomain y2;bitDomain y3;bitDomain y4;bitDomain y5;bitDomain y6;bitDomain y7;bitDomain y8;bitDomain y9;bitDomain y10;bitDomain y11;bitDomain y12;bitDomain y13;bitDomain y14;bitDomain y15;bitDomain y16;bitDomain y17;bitDomain y18;bitDomain y19;bitDomain y20;bitDomain y21;bitDomain y22;bitDomain y23;bitDomain y24;bitDomain y25;bitDomain y26;bitDomain y27;bitDomain y28;bitDomain y29;bitDomain y30;bitDomain y31;bitDomain y32;bitDomain y33;bitDomain y34;bitDomain y35;bitDomain y36;bitDomain y37;bitDomain y38;bitDomain y39;bitDomain y40;bitDomain y41;bitDomain y42;bitDomain y43;bitDomain y44;bitDomain y45;bitDomain y46;bitDomain y47;bitDomain y48;bitDomain y49;bitDomain y50;bitDomain y51;bitDomain y52;bitDomain y53;bitDomain y54;bitDomain y55;bitDomain y56;bitDomain y57;bitDomain y58;bitDomain y59;bitDomain y60;bitDomain y61;bitDomain y62;bitDomain y63;bitDomain y64;bitDomain y65;bitDomain y66;bitDomain y67;bitDomain y68;bitDomain y69;bitDomain y70;bitDomain y71;bitDomain y72;bitDomain y73;bitDomain y74;bitDomain y75;bitDomain y76;bitDomain y77;bitDomain y78;bitDomain y79;bitDomain y80;bitDomain y81;bitDomain y82;bitDomain y83;bitDomain y84;bitDomain y85;bitDomain y86;bitDomain y87;bitDomain y88;bitDomain y89;bitDomain y90;bitDomain y91;bitDomain y92;bitDomain y93;bitDomain y94;bitDomain y95;bitDomain y96;bitDomain y97;bitDomain y98;bitDomain y99;bitDomain y100;bitDomain y101;bitDomain y102;bitDomain y103;bitDomain y104;bitDomain y105;bitDomain y106;bitDomain y107;bitDomain y108;bitDomain y109;bitDomain y110;bitDomain y111;bitDomain y112;bitDomain y113;bitDomain y114;bitDomain y115;bitDomain y116;bitDomain y117;bitDomain y118;bitDomain y119;bitDomain y120;bitDomain y121;bitDomain y122;bitDomain y123;bitDomain y124;bitDomain y125;bitDomain y126;bitDomain y127;bitDomain y128;bitDomain y129;bitDomain y130;bitDomain y131;bitDomain y132;bitDomain y133;bitDomain y134;bitDomain y135;bitDomain y136;bitDomain y137;bitDomain y138;bitDomain y139;bitDomain y140;bitDomain y141;bitDomain y142;bitDomain y143;bitDomain y144;bitDomain y145;bitDomain y146;bitDomain y147;bitDomain y148;bitDomain y149;bitDomain y150;bitDomain y151;bitDomain y152;bitDomain y153;bitDomain y154;bitDomain y155;bitDomain y156;bitDomain y157;bitDomain y158;bitDomain y159;bitDomain y160;bitDomain y161;bitDomain y162;bitDomain y163;bitDomain y164;bitDomain y165;bitDomain y166;bitDomain y167;bitDomain y168;bitDomain y169;bitDomain y170;bitDomain y171;bitDomain y172;bitDomain y173;bitDomain y174;bitDomain y175;bitDomain y176;bitDomain y177;bitDomain y178;bitDomain y179;bitDomain y180;bitDomain y181;bitDomain y182;bitDomain y183;bitDomain y184;bitDomain y185;bitDomain y186;bitDomain y187;bitDomain y188;bitDomain y189;bitDomain y190;bitDomain y191;bitDomain y192;bitDomain y193;bitDomain y194;bitDomain y195;bitDomain y196;bitDomain y197;bitDomain y198;bitDomain y199;bitDomain y200;bitDomain y201;bitDomain y202;bitDomain y203;bitDomain y204;bitDomain y205;bitDomain y206;bitDomain y207;bitDomain y208;bitDomain y209;bitDomain y210;bitDomain y211;bitDomain y212;bitDomain y213;bitDomain y214;bitDomain y215;bitDomain y216;bitDomain y217;bitDomain y218;bitDomain y219;bitDomain y220;bitDomain y221;bitDomain y222;bitDomain y223;bitDomain y224;bitDomain y225;bitDomain y226;bitDomain y227;bitDomain y228;bitDomain y229;bitDomain y230;bitDomain y231;bitDomain y232;bitDomain y233;bitDomain y234;bitDomain y235;bitDomain y236;bitDomain y237;bitDomain y238;bitDomain y239;bitDomain y240;bitDomain y241;bitDomain y242;bitDomain y243;bitDomain y244;bitDomain y245;bitDomain y246;bitDomain y247;bitDomain y248;bitDomain y249;bitDomain y250;bitDomain y251;bitDomain y252;bitDomain y253;bitDomain y254;bitDomain y255;bitDomain y256;bitDomain y257;bitDomain y258;bitDomain y259;bitDomain y260;bitDomain y261;bitDomain y262;bitDomain y263;bitDomain y264;bitDomain y265;bitDomain y266;bitDomain y267;bitDomain y268;bitDomain y269;bitDomain y270;bitDomain y271;bitDomain y272;bitDomain y273;bitDomain y274;bitDomain y275;bitDomain y276;bitDomain y277;bitDomain y278;bitDomain y279;bitDomain y280;bitDomain y281;bitDomain y282;bitDomain y283;bitDomain y284;bitDomain y285;bitDomain y286;bitDomain y287;bitDomain y288;bitDomain y289;bitDomain y290;bitDomain y291;bitDomain y292;bitDomain y293;bitDomain y294;bitDomain y295;bitDomain y296;bitDomain y297;bitDomain y298;bitDomain y299;bitDomain y300;bitDomain y301;bitDomain y302;bitDomain y303;bitDomain y304;bitDomain y305;bitDomain y306;bitDomain y307;bitDomain y308;bitDomain y309;bitDomain y310;bitDomain y311;bitDomain y312;bitDomain y313;bitDomain y314;bitDomain y315;bitDomain y316;bitDomain y317;bitDomain y318;bitDomain y319;bitDomain y320;bitDomain y321;bitDomain y322;bitDomain y323;bitDomain y324;bitDomain y325;bitDomain y326;bitDomain y327;bitDomain y328;bitDomain y329;bitDomain y330;bitDomain y331;bitDomain y332;bitDomain y333;bitDomain y334;bitDomain y335;bitDomain y336;bitDomain y337;bitDomain y338;bitDomain y339;bitDomain y340;bitDomain y341;bitDomain y342;bitDomain y343;bitDomain y344;bitDomain y345;bitDomain y346;bitDomain y347;bitDomain y348;bitDomain y349;bitDomain y350;bitDomain y351;bitDomain y352;bitDomain y353;bitDomain y354;bitDomain y355;bitDomain y356;bitDomain y357;bitDomain y358;bitDomain y359;bitDomain y360;bitDomain y361;bitDomain y362;bitDomain y363;bitDomain y364;bitDomain y365;bitDomain y366;bitDomain y367;bitDomain y368;bitDomain y369;bitDomain y370;bitDomain y371;bitDomain y372;bitDomain y373;bitDomain y374;bitDomain y375;bitDomain y376;bitDomain y377;bitDomain y378;bitDomain y379;bitDomain y380;bitDomain y381;bitDomain y382;bitDomain y383;bitDomain y384;bitDomain y385;bitDomain y386;bitDomain y387;bitDomain y388;bitDomain y389;bitDomain y390;bitDomain y391;bitDomain y392;bitDomain y393;bitDomain y394;bitDomain y395;bitDomain y396;bitDomain y397;bitDomain y398;bitDomain y399;bitDomain y400;bitDomain y401;bitDomain y402;bitDomain y403;bitDomain y404;bitDomain y405;bitDomain y406;bitDomain y407;bitDomain y408;bitDomain y409;bitDomain y410;bitDomain y411;bitDomain y412;bitDomain y413;bitDomain y414;bitDomain y415;bitDomain y416;bitDomain y417;bitDomain y418;bitDomain y419;bitDomain y420;bitDomain y421;bitDomain y422;bitDomain y423;bitDomain y424;bitDomain y425;bitDomain y426;bitDomain y427;bitDomain y428;bitDomain y429;bitDomain y430;bitDomain y431;bitDomain y432;bitDomain y433;bitDomain y434;bitDomain y435;bitDomain y436;bitDomain y437;bitDomain y438;bitDomain y439;bitDomain y440;bitDomain y441;bitDomain y442;bitDomain y443;bitDomain y444;bitDomain y445;bitDomain y446;bitDomain y447;bitDomain y448;bitDomain y449;bitDomain y450;bitDomain y451;bitDomain y452;bitDomain y453;bitDomain y454;bitDomain y455;bitDomain y456;bitDomain y457;bitDomain y458;bitDomain y459;bitDomain y460;bitDomain y461;bitDomain y462;bitDomain y463;bitDomain y464;bitDomain y465;bitDomain y466;bitDomain y467;bitDomain y468;bitDomain y469;bitDomain y470;bitDomain y471;bitDomain y472;bitDomain y473;bitDomain y474;bitDomain y475;bitDomain y476;bitDomain y477;bitDomain y478;bitDomain y479;bitDomain y480;bitDomain y481;bitDomain y482;bitDomain y483;bitDomain y484;bitDomain y485;bitDomain y486;bitDomain y487;bitDomain y488;bitDomain y489;bitDomain y490;bitDomain y491;bitDomain y492;bitDomain y493;bitDomain y494;bitDomain y495;bitDomain y496;bitDomain y497;bitDomain y498;bitDomain y499;bitDomain y500;bitDomain y501;bitDomain y502;bitDomain y503;bitDomain y504;bitDomain y505;bitDomain y506;bitDomain y507;bitDomain y508;bitDomain y509;bitDomain y510;bitDomain y511;bitDomain y512;bitDomain y513;bitDomain y514;bitDomain y515;bitDomain y516;bitDomain y517;bitDomain y518;bitDomain y519;bitDomain y520;bitDomain y521;bitDomain y522;bitDomain y523;bitDomain y524;bitDomain y525;bitDomain y526;bitDomain y527;bitDomain y528;bitDomain y529;bitDomain y530;bitDomain y531;bitDomain y532;bitDomain y533;bitDomain y534;bitDomain y535;bitDomain y536;bitDomain y537;bitDomain y538;bitDomain y539;bitDomain y540;bitDomain y541;bitDomain y542;bitDomain y543;bitDomain y544;bitDomain y545;bitDomain y546;bitDomain y547;bitDomain y548;bitDomain y549;bitDomain y550;bitDomain y551;bitDomain y552;bitDomain y553;bitDomain y554;bitDomain y555;bitDomain y556;bitDomain y557;bitDomain y558;bitDomain y559;bitDomain y560;bitDomain y561;bitDomain y562;bitDomain y563;bitDomain y564;bitDomain y565;bitDomain y566;bitDomain y567;bitDomain y568;bitDomain y569;bitDomain y570;bitDomain y571;bitDomain y572;bitDomain y573;bitDomain y574;bitDomain y575;bitDomain y576;bitDomain y577;bitDomain y578;bitDomain y579;bitDomain y580;bitDomain y581;bitDomain y582;bitDomain y583;bitDomain y584;bitDomain y585;bitDomain y586;bitDomain y587;bitDomain y588;bitDomain y589;bitDomain y590;bitDomain y591;bitDomain y592;bitDomain y593;bitDomain y594;bitDomain y595;bitDomain y596;bitDomain y597;bitDomain y598;bitDomain y599;bitDomain y600;bitDomain y601;bitDomain y602;bitDomain y603;bitDomain y604;bitDomain y605;bitDomain y606;bitDomain y607;bitDomain y608;bitDomain y609;bitDomain y610;bitDomain y611;bitDomain y612;bitDomain y613;bitDomain y614;bitDomain y615;bitDomain y616;bitDomain y617;bitDomain y618;bitDomain y619;bitDomain y620;bitDomain y621;bitDomain y622;bitDomain y623;bitDomain y624;bitDomain y625;bitDomain y626;bitDomain y627;bitDomain y628;

// 全1、x1=x128=0：151C407E
x1=0;x2=1;x3=1;x4=1;x5=1;x6=1;x7=1;x8=1;x9=1;x10=1;x11=1;x12=1;x13=1;x14=1;x15=1;x16=1;x17=1;x18=1;x19=1;x20=1;x21=1;x22=1;x23=1;x24=1;x25=1;x26=1;x27=1;x28=1;x29=1;x30=1;x31=1;x32=1;x33=1;x34=1;x35=1;x36=1;x37=1;x38=1;x39=1;x40=1;x41=1;x42=1;x43=1;x44=1;x45=1;x46=1;x47=1;x48=1;x49=1;x50=1;x51=1;x52=1;x53=1;x54=1;x55=1;x56=1;x57=1;x58=1;x59=1;x60=1;x61=1;x62=1;x63=1;x64=1;x65=1;x66=1;x67=1;x68=1;x69=1;x70=1;x71=1;x72=1;x73=1;x74=1;x75=1;x76=1;x77=1;x78=1;x79=1;x80=1;x81=1;x82=1;x83=1;x84=1;x85=1;x86=1;x87=1;x88=1;x89=1;x90=1;x91=1;x92=1;x93=1;x94=1;x95=1;x96=1;x97=1;x98=1;x99=1;x100=1;x101=1;x102=1;x103=1;x104=1;x105=1;x106=1;x107=1;x108=1;x109=1;x110=1;x111=1;x112=1;x113=1;x114=1;x115=1;x116=1;x117=1;x118=1;x119=1;x120=1;x121=1;x122=1;x123=1;x124=1;x125=1;x126=1;x127=1;x128=0;
// 全1、x128=0：951C407E
// x1=1;x2=1;x3=1;x4=1;x5=1;x6=1;x7=1;x8=1;x9=1;x10=1;x11=1;x12=1;x13=1;x14=1;x15=1;x16=1;x17=1;x18=1;x19=1;x20=1;x21=1;x22=1;x23=1;x24=1;x25=1;x26=1;x27=1;x28=1;x29=1;x30=1;x31=1;x32=1;x33=1;x34=1;x35=1;x36=1;x37=1;x38=1;x39=1;x40=1;x41=1;x42=1;x43=1;x44=1;x45=1;x46=1;x47=1;x48=1;x49=1;x50=1;x51=1;x52=1;x53=1;x54=1;x55=1;x56=1;x57=1;x58=1;x59=1;x60=1;x61=1;x62=1;x63=1;x64=1;x65=1;x66=1;x67=1;x68=1;x69=1;x70=1;x71=1;x72=1;x73=1;x74=1;x75=1;x76=1;x77=1;x78=1;x79=1;x80=1;x81=1;x82=1;x83=1;x84=1;x85=1;x86=1;x87=1;x88=1;x89=1;x90=1;x91=1;x92=1;x93=1;x94=1;x95=1;x96=1;x97=1;x98=1;x99=1;x100=1;x101=1;x102=1;x103=1;x104=1;x105=1;x106=1;x107=1;x108=1;x109=1;x110=1;x111=1;x112=1;x113=1;x114=1;x115=1;x116=1;x117=1;x118=1;x119=1;x120=1;x121=1;x122=1;x123=1;x124=1;x125=1;x126=1;x127=1;x128=0;
// 全1：C5C5C5C5
// x1=1;x2=1;x3=1;x4=1;x5=1;x6=1;x7=1;x8=1;x9=1;x10=1;x11=1;x12=1;x13=1;x14=1;x15=1;x16=1;x17=1;x18=1;x19=1;x20=1;x21=1;x22=1;x23=1;x24=1;x25=1;x26=1;x27=1;x28=1;x29=1;x30=1;x31=1;x32=1;x33=1;x34=1;x35=1;x36=1;x37=1;x38=1;x39=1;x40=1;x41=1;x42=1;x43=1;x44=1;x45=1;x46=1;x47=1;x48=1;x49=1;x50=1;x51=1;x52=1;x53=1;x54=1;x55=1;x56=1;x57=1;x58=1;x59=1;x60=1;x61=1;x62=1;x63=1;x64=1;x65=1;x66=1;x67=1;x68=1;x69=1;x70=1;x71=1;x72=1;x73=1;x74=1;x75=1;x76=1;x77=1;x78=1;x79=1;x80=1;x81=1;x82=1;x83=1;x84=1;x85=1;x86=1;x87=1;x88=1;x89=1;x90=1;x91=1;x92=1;x93=1;x94=1;x95=1;x96=1;x97=1;x98=1;x99=1;x100=1;x101=1;x102=1;x103=1;x104=1;x105=1;x106=1;x107=1;x108=1;x109=1;x110=1;x111=1;x112=1;x113=1;x114=1;x115=1;x116=1;x117=1;x118=1;x119=1;x120=1;x121=1;x122=1;x123=1;x124=1;x125=1;x126=1;x127=1;x128=1;
// 全0：34343434
// x1=0;x2=0;x3=0;x4=0;x5=0;x6=0;x7=0;x8=0;x9=0;x10=0;x11=0;x12=0;x13=0;x14=0;x15=0;x16=0;x17=0;x18=0;x19=0;x20=0;x21=0;x22=0;x23=0;x24=0;x25=0;x26=0;x27=0;x28=0;x29=0;x30=0;x31=0;x32=0;x33=0;x34=0;x35=0;x36=0;x37=0;x38=0;x39=0;x40=0;x41=0;x42=0;x43=0;x44=0;x45=0;x46=0;x47=0;x48=0;x49=0;x50=0;x51=0;x52=0;x53=0;x54=0;x55=0;x56=0;x57=0;x58=0;x59=0;x60=0;x61=0;x62=0;x63=0;x64=0;x65=0;x66=0;x67=0;x68=0;x69=0;x70=0;x71=0;x72=0;x73=0;x74=0;x75=0;x76=0;x77=0;x78=0;x79=0;x80=0;x81=0;x82=0;x83=0;x84=0;x85=0;x86=0;x87=0;x88=0;x89=0;x90=0;x91=0;x92=0;x93=0;x94=0;x95=0;x96=0;x97=0;x98=0;x99=0;x100=0;x101=0;x102=0;x103=0;x104=0;x105=0;x106=0;x107=0;x108=0;x109=0;x110=0;x111=0;x112=0;x113=0;x114=0;x115=0;x116=0;x117=0;x118=0;x119=0;x120=0;x121=0;x122=0;x123=0;x124=0;x125=0;x126=0;x127=0;x128=0;
//  Initialization
y1 = x1; y2 = x2; y3 = x3; y4 = x4; y5 = x5; y6 = x6; y7 = x7; y8 = x8; y9 = x9; y10 = x10; y11 = x11; y12 = x12; y13 = x13; y14 = x14; y15 = x15; y16 = x16; y17 = x17; y18 = x18; y19 = x19; y20 = x20; y21 = x21; y22 = x22; y23 = x23; y24 = x24; y25 = x25; y26 = x26; y27 = x27; y28 = x28; y29 = x29; y30 = x30; y31 = x31; y32 = x32; y33 = x33; y34 = x34; y35 = x35; y36 = x36; y37 = x37; y38 = x38; y39 = x39; y40 = x40; y41 = x41; y42 = x42; y43 = x43; y44 = x44; y45 = x45; y46 = x46; y47 = x47; y48 = x48; y49 = x49; y50 = x50; y51 = x51; y52 = x52; y53 = x53; y54 = x54; y55 = x55; y56 = x56; y57 = x57; y58 = x58; y59 = x59; y60 = x60; y61 = x61; y62 = x62; y63 = x63; y64 = x64; y65 = x65; y66 = x66; y67 = x67; y68 = x68; y69 = x69; y70 = x70; y71 = x71; y72 = x72; y73 = x73; y74 = x74; y75 = x75; y76 = x76; y77 = x77; y78 = x78; y79 = x79; y80 = x80; y81 = x81; y82 = x82; y83 = x83; y84 = x84; y85 = x85; y86 = x86; y87 = x87; y88 = x88; y89 = x89; y90 = x90; y91 = x91; y92 = x92; y93 = x93; y94 = x94; y95 = x95; y96 = x96; y97 = x97; y98 = x98; y99 = x99; y100 = x100; y101 = x101; y102 = x102; y103 = x103; y104 = x104; y105 = x105; y106 = x106; y107 = x107; y108 = x108; y109 = x109; y110 = x110; y111 = x111; y112 = x112; y113 = x113; y114 = x114; y115 = x115; y116 = x116; y117 = x117; y118 = x118; y119 = x119; y120 = x120; y121 = x121; y122 = x122; y123 = x123; y124 = x124; y125 = x125; y126 = x126; y127 = x127; y128 = x128; y129 = 0; y130 = 0; y131 = 0; y132 = 0; y133 = 0; y134 = 0; y135 = 0; y136 = 0; y137 = 0; y138 = 0; y139 = 0; y140 = 0; y141 = 0; y142 = 0; y143 = 0; y144 = 0; y145 = 0; y146 = 0; y147 = 0; y148 = 0; y149 = 0; y150 = 0; y151 = 0; y152 = 0; y153 = 0; y154 = 0; y155 = 0; y156 = 0; y157 = 0; y158 = 0; y159 = 0; y160 = 0; y161 = 0; y162 = 0; y163 = 0; y164 = 0; y165 = 0; y166 = 0; y167 = 0; y168 = 0; y169 = 0; y170 = 0; y171 = 0; y172 = 0; y173 = 0; y174 = 0; y175 = 0; y176 = 0; y177 = 0; y178 = 0; y179 = 0; y180 = 0; y181 = 0; y182 = 0; y183 = 0; y184 = 0; y185 = 0; y186 = 0; y187 = 0; y188 = 0; y189 = 0; y190 = 0; y191 = 0; y192 = 0; y193 = 0; y194 = 0; y195 = 0; y196 = 0; y197 = 0; y198 = 0; y199 = 0; y200 = 0; y201 = 0; y202 = 0; y203 = 0; y204 = 0; y205 = 0; y206 = 0; y207 = 0; y208 = 0; y209 = 0; y210 = 0; y211 = 0; y212 = 0; y213 = 0; y214 = 0; y215 = 0; y216 = 0; y217 = 0; y218 = 0; y219 = 0; y220 = 0; y221 = 0; y222 = 0; y223 = 0; y224 = 0; y225 = 0; y226 = 0; y227 = 0; y228 = 0; y229 = 0; y230 = 0; y231 = 0; y232 = 0; y233 = 0; y234 = 0; y235 = 0; y236 = 0; y237 = 0; y238 = 0; y239 = 0; y240 = 0; y241 = 0; y242 = 0; y243 = 0; y244 = 0; y245 = 0; y246 = 0; y247 = 0; y248 = 0; y249 = 0; y250 = 0; y251 = 0; y252 = 0; y253 = 0; y254 = 0; y255 = 0; y256 = 0; y257 = 0; y258 = 0; y259 = 0; y260 = 0; y261 = 0; y262 = 0; y263 = 0; y264 = 0; y265 = 0; y266 = 0; y267 = 0; y268 = 0; y269 = 0; y270 = 0; y271 = 0; y272 = 0; y273 = 0; y274 = 0; y275 = 0; y276 = 0; y277 = 0; y278 = 0; y279 = 0; y280 = 0; y281 = 0; y282 = 0; y283 = 0; y284 = 0; y285 = 0; y286 = 0; y287 = 0; y288 = 0; y289 = 0; y290 = 0; y291 = 0; y292 = 0; y293 = 0; y294 = 0; y295 = 0; y296 = 0; y297 = 0; y298 = 0; y299 = 0; y300 = 0; y301 = 0; y302 = 0; y303 = 0; y304 = 0; y305 = 0; y306 = 0; y307 = 0; y308 = 0; y309 = 0; y310 = 0; y311 = 0; y312 = 0; y313 = 0; y314 = 0; y315 = 0; y316 = 0; y317 = 0; y318 = 0; y319 = 0; y320 = 0; y321 = 0; y322 = 0; y323 = 0; y324 = 0; y325 = 0; y326 = 0; y327 = 0; y328 = 0; y329 = 0; y330 = 0; y331 = 0; y332 = 0; y333 = 0; y334 = 0; y335 = 0; y336 = 0; y337 = 0; y338 = 0; y339 = 0; y340 = 0; y341 = 0; y342 = 0; y343 = 0; y344 = 0; y345 = 0; y346 = 0; y347 = 0; y348 = 0; y349 = 0; y350 = 0; y351 = 0; y352 = 0; y353 = 0; y354 = 0; y355 = 0; y356 = 0; y357 = 0; y358 = 0; y359 = 0; y360 = 0; y361 = 0; y362 = 0; y363 = 0; y364 = 0; y365 = 0; y366 = 0; y367 = 0; y368 = 0; y369 = 0; y370 = 0; y371 = 0; y372 = 0; y373 = 0; y374 = 0; y375 = 0; y376 = 0; y377 = 0; y378 = 0; y379 = 0; y380 = 0; y381 = 0; y382 = 0; y383 = 0; y384 = 0; y385 = 0; y386 = 0; y387 = 0; y388 = 0; y389 = 0; y390 = 0; y391 = 0; y392 = 0; y393 = 0; y394 = 0; y395 = 0; y396 = 0; y397 = 0; y398 = 0; y399 = 0; y400 = 0; y401 = 0; y402 = 0; y403 = 0; y404 = 0; y405 = 0; y406 = 0; y407 = 0; y408 = 0; y409 = 0; y410 = 0; y411 = 0; y412 = 0; y413 = 0; y414 = 0; y415 = 0; y416 = 0; y417 = 0; y418 = 0; y419 = 0; y420 = 0; y421 = 0; y422 = 0; y423 = 0; y424 = 0; y425 = 0; y426 = 0; y427 = 0; y428 = 0; y429 = 0; y430 = 0; y431 = 0; y432 = 0; y433 = 0; y434 = 0; y435 = 0; y436 = 0; y437 = 0; y438 = 0; y439 = 0; y440 = 0; y441 = 0; y442 = 0; y443 = 0; y444 = 0; y445 = 0; y446 = 0; y447 = 0; y448 = 0; y449 = 0; y450 = 0; y451 = 0; y452 = 0; y453 = 0; y454 = 0; y455 = 0; y456 = 0; y457 = 0; y458 = 0; y459 = 0; y460 = 0; y461 = 0; y462 = 0; y463 = 0; y464 = 0; y465 = 0; y466 = 0; y467 = 0; y468 = 0; y469 = 0; y470 = 0; y471 = 0; y472 = 0; y473 = 0; y474 = 0; y475 = 0; y476 = 0; y477 = 0; y478 = 0; y479 = 0; y480 = 0; y481 = 0; y482 = 0; y483 = 0; y484 = 0; y485 = 0; y486 = 0; y487 = 0; y488 = 0; y489 = 0; y490 = 0; y491 = 0; y492 = 0; y493 = 0; y494 = 0; y495 = 0; y496 = 0; y497 = 0; y498 = 0; y499 = 0; y500 = 0; y501 = 0; y502 = 0; y503 = 0; y504 = 0; y505 = 0; y506 = 0; y507 = 0; y508 = 0;


//  Initialization
y1 = x1; y2 = x2; y3 = x3; y4 = x4; y5 = x5; y6 = x6; y7 = x7; y8 = x8; y9 = x9; y10 = x10; y11 = x11; y12 = x12; y13 = x13; y14 = x14; y15 = x15; y16 = x16; y17 = x17; y18 = x18; y19 = x19; y20 = x20; y21 = x21; y22 = x22; y23 = x23; y24 = x24; y25 = x25; y26 = x26; y27 = x27; y28 = x28; y29 = x29; y30 = x30; y31 = x31; y32 = x32; y33 = x33; y34 = x34; y35 = x35; y36 = x36; y37 = x37; y38 = x38; y39 = x39; y40 = x40; y41 = x41; y42 = x42; y43 = x43; y44 = x44; y45 = x45; y46 = x46; y47 = x47; y48 = x48; y49 = x49; y50 = x50; y51 = x51; y52 = x52; y53 = x53; y54 = x54; y55 = x55; y56 = x56; y57 = x57; y58 = x58; y59 = x59; y60 = x60; y61 = x61; y62 = x62; y63 = x63; y64 = x64; y65 = x65; y66 = x66; y67 = x67; y68 = x68; y69 = x69; y70 = x70; y71 = x71; y72 = x72; y73 = x73; y74 = x74; y75 = x75; y76 = x76; y77 = x77; y78 = x78; y79 = x79; y80 = x80; y81 = x81; y82 = x82; y83 = x83; y84 = x84; y85 = x85; y86 = x86; y87 = x87; y88 = x88; y89 = x89; y90 = x90; y91 = x91; y92 = x92; y93 = x93; y94 = x94; y95 = x95; y96 = x96; y97 = x97; y98 = x98; y99 = x99; y100 = x100; y101 = x101; y102 = x102; y103 = x103; y104 = x104; y105 = x105; y106 = x106; y107 = x107; y108 = x108; y109 = x109; y110 = x110; y111 = x111; y112 = x112; y113 = x113; y114 = x114; y115 = x115; y116 = x116; y117 = x117; y118 = x118; y119 = x119; y120 = x120; y121 = x121; y122 = x122; y123 = x123; y124 = x124; y125 = x125; y126 = x126; y127 = x127; y128 = x128; y129 = 0; y130 = 0; y131 = 0; y132 = 0; y133 = 0; y134 = 0; y135 = 0; y136 = 0; y137 = 0; y138 = 0; y139 = 0; y140 = 0; y141 = 0; y142 = 0; y143 = 0; y144 = 0; y145 = 0; y146 = 0; y147 = 0; y148 = 0; y149 = 0; y150 = 0; y151 = 0; y152 = 0; y153 = 0; y154 = 0; y155 = 0; y156 = 0; y157 = 0; y158 = 0; y159 = 0; y160 = 0; y161 = 0; y162 = 0; y163 = 0; y164 = 0; y165 = 0; y166 = 0; y167 = 0; y168 = 0; y169 = 0; y170 = 0; y171 = 0; y172 = 0; y173 = 0; y174 = 0; y175 = 0; y176 = 0; y177 = 0; y178 = 0; y179 = 0; y180 = 0; y181 = 0; y182 = 0; y183 = 0; y184 = 0; y185 = 0; y186 = 0; y187 = 0; y188 = 0; y189 = 0; y190 = 0; y191 = 0; y192 = 0; y193 = 0; y194 = 0; y195 = 0; y196 = 0; y197 = 0; y198 = 0; y199 = 0; y200 = 0; y201 = 0; y202 = 0; y203 = 0; y204 = 0; y205 = 0; y206 = 0; y207 = 0; y208 = 0; y209 = 0; y210 = 0; y211 = 0; y212 = 0; y213 = 0; y214 = 0; y215 = 0; y216 = 0; y217 = 0; y218 = 0; y219 = 0; y220 = 0; y221 = 0; y222 = 0; y223 = 0; y224 = 0; y225 = 0; y226 = 0; y227 = 0; y228 = 0; y229 = 0; y230 = 0; y231 = 0; y232 = 0; y233 = 0; y234 = 0; y235 = 0; y236 = 0; y237 = 0; y238 = 0; y239 = 0; y240 = 0; y241 = 0; y242 = 0; y243 = 0; y244 = 0; y245 = 0; y246 = 0; y247 = 0; y248 = 0; y249 = 0; y250 = 0; y251 = 0; y252 = 0; y253 = 0; y254 = 0; y255 = 0; y256 = 0; y257 = 0; y258 = 0; y259 = 0; y260 = 0; y261 = 0; y262 = 0; y263 = 0; y264 = 0; y265 = 0; y266 = 0; y267 = 0; y268 = 0; y269 = 0; y270 = 0; y271 = 0; y272 = 0; y273 = 0; y274 = 0; y275 = 0; y276 = 0; y277 = 0; y278 = 0; y279 = 0; y280 = 0; y281 = 0; y282 = 0; y283 = 0; y284 = 0; y285 = 0; y286 = 0; y287 = 0; y288 = 0; y289 = 0; y290 = 0; y291 = 0; y292 = 0; y293 = 0; y294 = 0; y295 = 0; y296 = 0; y297 = 0; y298 = 0; y299 = 0; y300 = 0; y301 = 0; y302 = 0; y303 = 0; y304 = 0; y305 = 0; y306 = 0; y307 = 0; y308 = 0; y309 = 0; y310 = 0; y311 = 0; y312 = 0; y313 = 0; y314 = 0; y315 = 0; y316 = 0; y317 = 0; y318 = 0; y319 = 0; y320 = 0; y321 = 0; y322 = 0; y323 = 0; y324 = 0; y325 = 0; y326 = 0; y327 = 0; y328 = 0; y329 = 0; y330 = 0; y331 = 0; y332 = 0; y333 = 0; y334 = 0; y335 = 0; y336 = 0; y337 = 0; y338 = 0; y339 = 0; y340 = 0; y341 = 0; y342 = 0; y343 = 0; y344 = 0; y345 = 0; y346 = 0; y347 = 0; y348 = 0; y349 = 0; y350 = 0; y351 = 0; y352 = 0; y353 = 0; y354 = 0; y355 = 0; y356 = 0; y357 = 0; y358 = 0; y359 = 0; y360 = 0; y361 = 0; y362 = 0; y363 = 0; y364 = 0; y365 = 0; y366 = 0; y367 = 0; y368 = 0; y369 = 0; y370 = 0; y371 = 0; y372 = 0; y373 = 0; y374 = 0; y375 = 0; y376 = 0; y377 = 0; y378 = 0; y379 = 0; y380 = 0; y381 = 0; y382 = 0; y383 = 0; y384 = 0; y385 = 0; y386 = 0; y387 = 0; y388 = 0; y389 = 0; y390 = 0; y391 = 0; y392 = 0; y393 = 0; y394 = 0; y395 = 0; y396 = 0; y397 = 0; y398 = 0; y399 = 0; y400 = 0; y401 = 0; y402 = 0; y403 = 0; y404 = 0; y405 = 0; y406 = 0; y407 = 0; y408 = 0; y409 = 0; y410 = 0; y411 = 0; y412 = 0; y413 = 0; y414 = 0; y415 = 0; y416 = 0; y417 = 0; y418 = 0; y419 = 0; y420 = 0; y421 = 0; y422 = 0; y423 = 0; y424 = 0; y425 = 0; y426 = 0; y427 = 0; y428 = 0; y429 = 0; y430 = 0; y431 = 0; y432 = 0; y433 = 0; y434 = 0; y435 = 0; y436 = 0; y437 = 0; y438 = 0; y439 = 0; y440 = 0; y441 = 0; y442 = 0; y443 = 0; y444 = 0; y445 = 0; y446 = 0; y447 = 0; y448 = 0; y449 = 0; y450 = 0; y451 = 0; y452 = 0;


// Full depth 1 and Toffoli depth 0
y33 = y33 + y65;  y34 = y34 + y66;  y35 = y35 + y67;  y36 = y36 + y68;  y37 = y37 + y69;  y38 = y38 + y70;  y39 = y39 + y71;  y40 = y40 + y72;  y41 = y41 + y73;  y42 = y42 + y74;  y43 = y43 + y75;  y44 = y44 + y76;  y45 = y45 + y77;  y46 = y46 + y78;  y47 = y47 + y79;  y48 = y48 + y80;  y49 = y49 + y81;  y50 = y50 + y82;  y51 = y51 + y83;  y52 = y52 + y84;  y53 = y53 + y85;  y54 = y54 + y86;  y55 = y55 + y87;  y56 = y56 + y88;  y57 = y57 + y89;  y58 = y58 + y90;  y59 = y59 + y91;  y60 = y60 + y92;  y61 = y61 + y93;  y62 = y62 + y94;  y63 = y63 + y95;  y64 = y64 + y96;

// Full depth 2 and Toffoli depth 0
y33 = y33 + y97;  y34 = y34 + y98;  y35 = y35 + y99;  y36 = y36 + y100;  y37 = y37 + y101;  y38 = y38 + y102;  y39 = y39 + y103;  y40 = y40 + y104;  y41 = y41 + y105;  y42 = y42 + y106;  y43 = y43 + y107;  y44 = y44 + y108;  y45 = y45 + y109;  y46 = y46 + y110;  y47 = y47 + y111;  y48 = y48 + y112;  y49 = y49 + y113;  y50 = y50 + y114;  y51 = y51 + y115;  y52 = y52 + y116;  y53 = y53 + y117;  y54 = y54 + y118;  y55 = y55 + y119;  y56 = y56 + y120;  y57 = y57 + y121;  y58 = y58 + y122;  y59 = y59 + y123;  y60 = y60 + y124;  y61 = y61 + y125;  y62 = y62 + y126;  y63 = y63 + y127;  y64 = y64 + y128;

// Full depth 3 and Toffoli depth 0
y308 = y308+y38;  y329 = y329+y46;  y350 = y350+y54;  y370 = y370+y62;  y306 = y306+y39;  y327 = y327+y47;  y348 = y348+y55;  y368 = y368+y63;  y161 = y161+y37;  y264 = y264+y45;  y162 = y162+y53;  y201 = y201+y61;  y315 = y315+y40;  y318 = y318+y48;  y339 = y339+y56;  y359 = y359+y64;  y314 = y314+y34;  y336 = y336+y42;  y356 = y356+y50;  y377 = y377+y58;  y237 = y237+y36;  y265 = y265+y44;  y163 = y163+y52;  y202 = y202+y60;  y379 = y379+y35;  y324 = y324+y43;  y346 = y346+y51;  y366 = y366+y59;  y242 = y242+y33;  y266 = y266+y41;  y164 = y164+y49;  y203 = y203+y57;

// Full depth 4 and Toffoli depth 0
y308 = y308+y34;  y329 = y329+y42;  y350 = y350+y50;  y370 = y370+y58;  y161 = y161+y35;  y264 = y264+y43;  y162 = y162+y51;  y201 = y201+y59;  y335 = y335+y39;  y320 = y320+y47;  y341 = y341+y55;  y361 = y361+y63;  y380 = y380+y37;  y326 = y326+y45;  y347 = y347+y53;  y367 = y367+y61;  y40 = y40+1;  y48 = y48+1;  y56 = y56+1;  y64 = y64+1;  y237 = y237+y33;  y265 = y265+y41;  y163 = y163+y49;  y202 = y202+y57;  y252 = y252+y38;  y267 = y267+y46;  y165 = y165+y54;  y204 = y204+y62;

// Full depth 5 and Toffoli depth 0
y306 = y306+y308;  y327 = y327+y329;  y348 = y348+y350;  y368 = y368+y370;  y315 = y315+y161;  y318 = y318+y264;  y339 = y339+y162;  y359 = y359+y201;  y345 = y345+y40;  y321 = y321+y48;  y342 = y342+y56;  y362 = y362+y64;  y379 = y379+y237;  y324 = y324+y265;  y346 = y346+y163;  y366 = y366+y202;  y34 = y34+1;  y42 = y42+1;  y50 = y50+1;  y58 = y58+1;  y252 = y252+y33;  y267 = y267+y41;  y165 = y165+y49;  y204 = y204+y57;

// Full depth 6 and Toffoli depth 0
y335 = y335+y315;  y320 = y320+y318;  y341 = y341+y339;  y361 = y361+y359;  y314 = y314+y161;  y336 = y336+y264;  y356 = y356+y162;  y377 = y377+y201;  y305 = y305+y379;  y317 = y317+y324;  y338 = y338+y346;  y358 = y358+y366;  y325 = y325+y308;  y319 = y319+y329;  y340 = y340+y350;  y360 = y360+y370;  y312 = y312+y34;  y333 = y333+y42;  y354 = y354+y50;  y374 = y374+y58;  y310 = y310+y40;  y331 = y331+y48;  y352 = y352+y56;  y372 = y372+y64;  y316 = y316+y252;  y337 = y337+y267;  y357 = y357+y165;  y378 = y378+y204;

// Full depth 7 and Toffoli depth 0
y380 = y380+y335;  y326 = y326+y320;  y347 = y347+y341;  y367 = y367+y361;  y305 = y305+y315;  y317 = y317+y318;  y338 = y338+y339;  y358 = y358+y359;  y316 = y316+y161;  y337 = y337+y264;  y357 = y357+y162;  y378 = y378+y201;

// Full depth 8 and Toffoli depth 0
y345 = y345+y380;  y321 = y321+y326;  y342 = y342+y347;  y362 = y362+y367;  y325 = y325+y305;  y319 = y319+y317;  y340 = y340+y338;  y360 = y360+y358;  y311 = y311+y335;  y332 = y332+y320;  y353 = y353+y341;  y373 = y373+y361;  y242 = y242+y315;  y266 = y266+y318;  y164 = y164+y339;  y203 = y203+y359;

// Full depth 9 and Toffoli depth 0
y311 = y311+y325;  y332 = y332+y319;  y353 = y353+y340;  y373 = y373+y360;  y307 = y307+y380;  y328 = y328+y326;  y349 = y349+y347;  y369 = y369+y367;  y375 = y375+y242;  y323 = y323+y266;  y344 = y344+y164;  y365 = y365+y203;  y313 = y313+y335;  y334 = y334+y320;  y355 = y355+y341;  y376 = y376+y361;

// Full depth 10 and Toffoli depth 0
y312 = y312+y311;  y333 = y333+y332;  y354 = y354+y353;  y374 = y374+y373;

// Full depth 11 and Toffoli depth 0
y307 = y307+y312;  y328 = y328+y333;  y349 = y349+y354;  y369 = y369+y374;

// Full depth 12 and Toffoli depth 0
y375 = y375+y307;  y323 = y323+y328;  y344 = y344+y349;  y365 = y365+y369;  y364 = y364+y312;  y322 = y322+y333;  y343 = y343+y354;  y363 = y363+y374;

// Full depth 13 and Toffoli depth 0
y310 = y310+y375;  y331 = y331+y323;  y352 = y352+y344;  y372 = y372+y365;  y309 = y309+y307;  y330 = y330+y328;  y351 = y351+y349;  y371 = y371+y369;

// Full depth 14 and Toffoli depth 0
y364 = y364+y375;  y322 = y322+y323;  y343 = y343+y344;  y363 = y363+y365;  y309 = y309+y310;  y330 = y330+y331;  y351 = y351+y352;  y371 = y371+y372;

// Full depth 15 and Toffoli depth 0
y313 = y313+y375;  y334 = y334+y323;  y355 = y355+y344;  y376 = y376+y365;

// Full depth 16 and Toffoli depth 1
y263 = y263+y375*y335;  y268 = y268+y323*y320;  y166 = y166+y344*y341;  y205 = y205+y365*y361;  y274 = y274+y311*y312;  y269 = y269+y332*y333;  y167 = y167+y353*y354;  y206 = y206+y373*y374;  y278 = y278+y364*y325;  y270 = y270+y322*y319;  y168 = y168+y343*y340;  y207 = y207+y363*y360;  y283 = y283+y309*y308;  y271 = y271+y330*y329;  y169 = y169+y351*y350;  y208 = y208+y371*y370;  y293 = y293+y307*y306;  y272 = y272+y328*y327;  y170 = y170+y349*y348;  y209 = y209+y369*y368;  y304 = y304+y310*y39;  y273 = y273+y331*y47;  y171 = y171+y352*y55;  y210 = y210+y372*y63;  y172 = y172+y40*y315;  y275 = y275+y48*y318;  y173 = y173+y56*y339;  y211 = y211+y64*y359;  y176 = y176+y380*y379;  y276 = y276+y326*y324;  y174 = y174+y347*y346;  y212 = y212+y367*y366;  y181 = y181+y345*y305;  y277 = y277+y321*y317;  y175 = y175+y342*y338;  y213 = y213+y362*y358;

// Full depth 17 and Toffoli depth 1
y238 = y238+y263;  y279 = y279+y268;  y177 = y177+y166;  y214 = y214+y205;  y239 = y239+y278;  y280 = y280+y270;  y178 = y178+y168;  y215 = y215+y207;  y240 = y240+y274;  y281 = y281+y269;  y179 = y179+y167;  y216 = y216+y206;  y241 = y241+y283;  y282 = y282+y271;  y180 = y180+y169;  y217 = y217+y208;  y246 = y246+y304;  y287 = y287+y273;  y185 = y185+y171;  y221 = y221+y210;  y248 = y248+y172;  y289 = y289+y275;  y187 = y187+y173;  y223 = y223+y211;  y254 = y254+y313;  y295 = y295+y334;  y192 = y192+y355;  y228 = y228+y376;

// Full depth 18 and Toffoli depth 1
y238 = y238+y278;  y279 = y279+y270;  y177 = y177+y168;  y214 = y214+y207;  y239 = y239+y263;  y280 = y280+y268;  y178 = y178+y166;  y215 = y215+y205;  y240 = y240+y172;  y281 = y281+y275;  y179 = y179+y173;  y216 = y216+y211;  y241 = y241+y274;  y282 = y282+y269;  y180 = y180+y167;  y217 = y217+y206;  y246 = y246+y283;  y287 = y287+y271;  y185 = y185+y169;  y221 = y221+y208;  y248 = y248+y304;  y289 = y289+y273;  y187 = y187+y171;  y223 = y223+y210;  y254 = y254+y34;  y295 = y295+y42;  y192 = y192+y50;  y228 = y228+y58;

// Full depth 19 and Toffoli depth 1
y238 = y238+y293;  y279 = y279+y272;  y177 = y177+y170;  y214 = y214+y209;  y239 = y239+y172;  y280 = y280+y275;  y178 = y178+y173;  y215 = y215+y211;  y240 = y240+y263;  y281 = y281+y268;  y179 = y179+y166;  y216 = y216+y205;  y241 = y241+y176;  y282 = y282+y276;  y180 = y180+y174;  y217 = y217+y212;  y246 = y246+y181;  y287 = y287+y277;  y185 = y185+y175;  y221 = y221+y213;  y248 = y248+y274;  y289 = y289+y269;  y187 = y187+y167;  y223 = y223+y206;

// Full depth 20 and Toffoli depth 1
y238 = y238+y304;  y279 = y279+y273;  y177 = y177+y171;  y214 = y214+y210;  y239 = y239+y181;  y280 = y280+y277;  y178 = y178+y175;  y215 = y215+y213;  y240 = y240+y176;  y281 = y281+y276;  y179 = y179+y174;  y216 = y216+y212;  y241 = y241+y263;  y282 = y282+y268;  y180 = y180+y166;  y217 = y217+y205;  y246 = y246+y278;  y287 = y287+y270;  y185 = y185+y168;  y221 = y221+y207;  y248 = y248+y283;  y289 = y289+y271;  y187 = y187+y169;  y223 = y223+y208;

// Full depth 21 and Toffoli depth 1
y238 = y238+y172;  y279 = y279+y275;  y177 = y177+y173;  y214 = y214+y211;  y239 = y239+y313;  y280 = y280+y334;  y178 = y178+y355;  y215 = y215+y376;  y240 = y240+y34;  y281 = y281+y42;  y179 = y179+y50;  y216 = y216+y58;  y241 = y241+y293;  y282 = y282+y272;  y180 = y180+y170;  y217 = y217+y209;  y246 = y246+y316;  y287 = y287+y337;  y185 = y185+y357;  y221 = y221+y378;  y248 = y248+y278;  y289 = y289+y270;  y187 = y187+y168;  y223 = y223+y207;  y254 = y254+y181;  y295 = y295+y277;  y192 = y192+y175;  y228 = y228+y213;

// Full depth 22 and Toffoli depth 1
y238 = y238+y176;  y279 = y279+y276;  y177 = y177+y174;  y214 = y214+y212;  y241 = y241+y181;  y282 = y282+y277;  y180 = y180+y175;  y217 = y217+y213;  y244 = y244+y239;  y285 = y285+y280;  y183 = y183+y178;  y219 = y219+y215;  y246 = y246+y172;  y287 = y287+y275;  y185 = y185+y173;  y221 = y221+y211;  y248 = y248+y243;  y289 = y289+y284;  y187 = y187+y182;  y223 = y223+y218;  y254 = y254+y278;  y295 = y295+y270;  y192 = y192+y168;  y228 = y228+y207;

// Full depth 23 and Toffoli depth 1
y238 = y238+y314;  y279 = y279+y336;  y177 = y177+y356;  y214 = y214+y377;  y241 = y241+y316;  y282 = y282+y337;  y180 = y180+y357;  y217 = y217+y378;  y246 = y246+y274;  y287 = y287+y269;  y185 = y185+y167;  y221 = y221+y206;  y247 = y247+y239;  y288 = y288+y280;  y186 = y186+y178;  y222 = y222+y215;  y248 = y248+y181;  y289 = y289+y277;  y187 = y187+y175;  y223 = y223+y213;  y254 = y254+y176;  y295 = y295+y276;  y192 = y192+y174;  y228 = y228+y212;

// Full depth 24 and Toffoli depth 2
y241 = y241+y314;  y282 = y282+y336;  y180 = y180+y356;  y217 = y217+y377;  y243 = y243+y238*y240;  y284 = y284+y279*y281;  y182 = y182+y177*y179;  y218 = y218+y214*y216;  y248 = y248+y316;  y289 = y289+y337;  y187 = y187+y357;  y223 = y223+y378;  y250 = y250+y239;  y291 = y291+y280;  y189 = y189+y178;  y225 = y225+y215;  y254 = y254+y274;  y295 = y295+y269;  y192 = y192+y167;  y228 = y228+y206;

// Full depth 25 and Toffoli depth 2
y244 = y244+y243;  y285 = y285+y284;  y183 = y183+y182;  y219 = y219+y218;  y247 = y247+y240;  y288 = y288+y281;  y186 = y186+y179;  y222 = y222+y216;  y257 = y257+y241;  y298 = y298+y282;  y195 = y195+y180;  y231 = y231+y217;

// Full depth 26 and Toffoli depth 3
y245 = y245+y241*y244;  y286 = y286+y282*y285;  y184 = y184+y180*y183;  y220 = y220+y217*y219;  y249 = y249+y247*y248;  y290 = y290+y288*y289;  y188 = y188+y186*y187;  y224 = y224+y222*y223;  y251 = y251+y243;  y292 = y292+y284;  y190 = y190+y182;  y226 = y226+y218;

// Full depth 27 and Toffoli depth 3
y246 = y246+y245;  y287 = y287+y286;  y185 = y185+y184;  y221 = y221+y220;  y250 = y250+y249;  y291 = y291+y290;  y189 = y189+y188;  y225 = y225+y224;  y255 = y255+y244;  y296 = y296+y285;  y193 = y193+y183;  y229 = y229+y219;

// Full depth 28 and Toffoli depth 3
y251 = y251+y249;  y292 = y292+y290;  y190 = y190+y188;  y226 = y226+y224;  y258 = y258+y250;  y299 = y299+y291;  y196 = y196+y189;  y232 = y232+y225;

// Full depth 29 and Toffoli depth 4
y253 = y253+y239*y251;  y294 = y294+y280*y292;  y191 = y191+y178*y190;  y227 = y227+y215*y226;  y254 = y254+y249;  y295 = y295+y290;  y192 = y192+y188;  y228 = y228+y224;  y259 = y259+y250;  y300 = y300+y291;  y197 = y197+y189;  y233 = y233+y225;

// Full depth 30 and Toffoli depth 4
y254 = y254+y253;  y295 = y295+y294;  y192 = y192+y191;  y228 = y228+y227;

// Full depth 31 and Toffoli depth 4
y255 = y255+y253;  y296 = y296+y294;  y193 = y193+y191;  y229 = y229+y227;  y258 = y258+y254;  y299 = y299+y295;  y196 = y196+y192;  y232 = y232+y228;

// Full depth 32 and Toffoli depth 5
y256 = y256+y246*y255;  y297 = y297+y287*y296;  y194 = y194+y185*y193;  y230 = y230+y221*y229;  y260 = y260+y254;  y301 = y301+y295;  y198 = y198+y192;  y234 = y234+y228;

// Full depth 33 and Toffoli depth 5
y257 = y257+y256;  y298 = y298+y297;  y195 = y195+y194;  y231 = y231+y230;  y259 = y259+y246;  y300 = y300+y287;  y197 = y197+y185;  y233 = y233+y221;

// Full depth 34 and Toffoli depth 5
y260 = y260+y257;  y301 = y301+y298;  y198 = y198+y195;  y234 = y234+y231;  y261 = y261+y259;  y302 = y302+y300;  y199 = y199+y197;  y235 = y235+y233;  y262 = y262+y246;  y303 = y303+y287;  y200 = y200+y185;  y236 = y236+y221;

// Full depth 35 and Toffoli depth 5
y261 = y261+y260;  y302 = y302+y301;  y199 = y199+y198;  y235 = y235+y234;  y262 = y262+y257;  y303 = y303+y298;  y200 = y200+y195;  y236 = y236+y231;

// Full depth 36 and Toffoli depth 6
y383 = y383+y246*y315;  y402 = y402+y287*y318;  y422 = y422+y185*y339;  y442 = y442+y221*y359;  y389 = y389+y250*y335;  y409 = y409+y291*y320;  y429 = y429+y189*y341;  y449 = y449+y225*y361;  y387 = y387+y254*y325;  y407 = y407+y295*y319;  y427 = y427+y192*y340;  y446 = y446+y228*y360;  y452 = y452+y257*y305;  y400 = y400+y298*y317;  y420 = y420+y195*y338;  y440 = y440+y231*y358;  y450 = y450+y258*y312;  y398 = y398+y299*y333;  y418 = y418+y196*y354;  y438 = y438+y232*y374;  y384 = y384+y259*y39;  y404 = y404+y300*y47;  y423 = y423+y197*y55;  y443 = y443+y233*y63;  y385 = y385+y260*y308;  y405 = y405+y301*y329;  y424 = y424+y198*y350;  y444 = y444+y234*y370;  y436 = y436+y261*y307;  y396 = y396+y302*y328;  y416 = y416+y199*y349;  y435 = y435+y235*y369;  y382 = y382+y262*y379;  y401 = y401+y303*y324;  y421 = y421+y200*y346;  y441 = y441+y236*y366;

// Full depth 37 and Toffoli depth 7
y403 = y403+y246*y40;  y393 = y393+y287*y48;  y412 = y412+y185*y56;  y432 = y432+y221*y64;  y451 = y451+y250*y375;  y399 = y399+y291*y323;  y419 = y419+y189*y344;  y439 = y439+y225*y365;  y447 = y447+y254*y364;  y397 = y397+y295*y322;  y417 = y417+y192*y343;  y437 = y437+y228*y363;  y381 = y381+y257*y345;  y390 = y390+y298*y321;  y410 = y410+y195*y342;  y430 = y430+y231*y362;  y388 = y388+y258*y311;  y408 = y408+y299*y332;  y428 = y428+y196*y353;  y448 = y448+y232*y373;  y414 = y414+y259*y310;  y394 = y394+y300*y331;  y413 = y413+y197*y352;  y433 = y433+y233*y372;  y425 = y425+y260*y309;  y395 = y395+y301*y330;  y415 = y415+y198*y351;  y434 = y434+y234*y371;  y386 = y386+y261*y306;  y406 = y406+y302*y327;  y426 = y426+y199*y348;  y445 = y445+y235*y368;  y392 = y392+y262*y380;  y391 = y391+y303*y326;  y411 = y411+y200*y347;  y431 = y431+y236*y367;

// Full depth 38 and Toffoli depth 7
y140 = y140+y436;  y160 = y160+y396;  y137 = y137+y416;  y146 = y146+y435;  y129 = y129+y452;  y159 = y159+y400;  y136 = y136+y420;  y145 = y145+y440;  y151 = y151+y382;  y130 = y130+y401;  y138 = y138+y421;  y147 = y147+y441;  y154 = y154+y384;  y131 = y131+y404;  y139 = y139+y423;  y148 = y148+y443;  y155 = y155+y387;  y132 = y132+y407;  y141 = y141+y427;  y149 = y149+y446;  y156 = y156+y450;  y133 = y133+y398;  y142 = y142+y418;  y150 = y150+y438;  y157 = y157+y388;  y134 = y134+y408;  y143 = y143+y428;  y152 = y152+y448;  y158 = y158+y385;  y135 = y135+y405;  y144 = y144+y424;  y153 = y153+y444;

// Full depth 39 and Toffoli depth 7
y140 = y140+y392;  y160 = y160+y391;  y137 = y137+y411;  y146 = y146+y431;  y129 = y129+y388;  y159 = y159+y408;  y136 = y136+y428;  y145 = y145+y448;  y151 = y151+y385;  y130 = y130+y405;  y138 = y138+y424;  y147 = y147+y444;  y154 = y154+y389;  y131 = y131+y409;  y139 = y139+y429;  y148 = y148+y449;  y155 = y155+y384;  y132 = y132+y404;  y141 = y141+y423;  y149 = y149+y443;  y156 = y156+y383;  y133 = y133+y402;  y142 = y142+y422;  y150 = y150+y442;  y157 = y157+y387;  y134 = y134+y407;  y143 = y143+y427;  y152 = y152+y446;  y158 = y158+y450;  y135 = y135+y398;  y144 = y144+y418;  y153 = y153+y438;

// Full depth 40 and Toffoli depth 7
y140 = y140+y403;  y160 = y160+y393;  y137 = y137+y412;  y146 = y146+y432;  y129 = y129+y387;  y159 = y159+y407;  y136 = y136+y427;  y145 = y145+y446;  y151 = y151+y384;  y130 = y130+y404;  y138 = y138+y423;  y147 = y147+y443;  y154 = y154+y388;  y131 = y131+y408;  y139 = y139+y428;  y148 = y148+y448;  y155 = y155+y386;  y132 = y132+y406;  y141 = y141+y426;  y149 = y149+y445;  y156 = y156+y385;  y133 = y133+y405;  y142 = y142+y424;  y150 = y150+y444;  y157 = y157+y383;  y134 = y134+y402;  y143 = y143+y422;  y152 = y152+y442;  y158 = y158+y389;  y135 = y135+y409;  y144 = y144+y429;  y153 = y153+y449;

// Full depth 41 and Toffoli depth 7
y140 = y140+y414;  y160 = y160+y394;  y137 = y137+y413;  y146 = y146+y433;  y129 = y129+y382;  y159 = y159+y401;  y136 = y136+y421;  y145 = y145+y441;  y151 = y151+y383;  y130 = y130+y402;  y138 = y138+y422;  y147 = y147+y442;  y154 = y154+y385;  y131 = y131+y405;  y139 = y139+y424;  y148 = y148+y444;  y155 = y155+y388;  y132 = y132+y408;  y141 = y141+y428;  y149 = y149+y448;  y156 = y156+y384;  y133 = y133+y404;  y142 = y142+y423;  y150 = y150+y443;  y157 = y157+y386;  y134 = y134+y406;  y143 = y143+y426;  y152 = y152+y445;  y158 = y158+y447;  y135 = y135+y397;  y144 = y144+y417;  y153 = y153+y437;

// Full depth 42 and Toffoli depth 7
y140 = y140+y447;  y160 = y160+y397;  y137 = y137+y417;  y146 = y146+y437;  y151 = y151+y451;  y130 = y130+y399;  y138 = y138+y419;  y147 = y147+y439;  y154 = y154+y425;  y131 = y131+y395;  y139 = y139+y415;  y148 = y148+y434;  y156 = y156+y382;  y133 = y133+y401;  y142 = y142+y421;  y150 = y150+y441;  y157 = y157+y385;  y134 = y134+y405;  y143 = y143+y424;  y152 = y152+y444;  y158 = y158+y388;  y135 = y135+y408;  y144 = y144+y428;  y153 = y153+y448;

// Full depth 43 and Toffoli depth 7
y140 = y140+y451;  y160 = y160+y399;  y137 = y137+y419;  y146 = y146+y439;  y151 = y151+y450;  y130 = y130+y398;  y138 = y138+y418;  y147 = y147+y438;  y154 = y154+y414;  y131 = y131+y394;  y139 = y139+y413;  y148 = y148+y433;  y156 = y156+y447;  y133 = y133+y397;  y142 = y142+y417;  y150 = y150+y437;  y157 = y157+y382;  y134 = y134+y401;  y143 = y143+y421;  y152 = y152+y441;  y158 = y158+y425;  y135 = y135+y395;  y144 = y144+y415;  y153 = y153+y434;

// Full depth 44 and Toffoli depth 7
y140 = y140+y382;  y160 = y160+y401;  y137 = y137+y421;  y146 = y146+y441;  y151 = y151+y425;  y130 = y130+y395;  y138 = y138+y415;  y147 = y147+y434;  y154 = y154+y403;  y131 = y131+y393;  y139 = y139+y412;  y148 = y148+y432;  y156 = y156+y392;  y133 = y133+y391;  y142 = y142+y411;  y150 = y150+y431;  y157 = y157+y414;  y134 = y134+y394;  y143 = y143+y413;  y152 = y152+y433;  y158 = y158+y384;  y135 = y135+y404;  y144 = y144+y423;  y153 = y153+y443;

// Full depth 45 and Toffoli depth 7
y140 = y140+y383;  y160 = y160+y402;  y137 = y137+y422;  y146 = y146+y442;  y151 = y151+y414;  y130 = y130+y394;  y138 = y138+y413;  y147 = y147+y433;  y154 = y154+y392;  y131 = y131+y391;  y139 = y139+y411;  y148 = y148+y431;  y156 = y156+y381;  y133 = y133+y390;  y142 = y142+y410;  y150 = y150+y430;  y157 = y157+y425;  y134 = y134+y395;  y143 = y143+y415;  y152 = y152+y434;  y158 = y158+y403;  y135 = y135+y393;  y144 = y144+y412;  y153 = y153+y432;

// Full depth 46 and Toffoli depth 7
y140 = y140+y385;  y160 = y160+y405;  y137 = y137+y424;  y146 = y146+y444;  y157 = y157+y403;  y134 = y134+y393;  y143 = y143+y412;  y152 = y152+y432;  y158 = y158+y414;  y135 = y135+y394;  y144 = y144+y413;  y153 = y153+y433;

// Full depth 47 and Toffoli depth 7
y140 = y140+y386;  y160 = y160+y406;  y137 = y137+y426;  y146 = y146+y445;  y157 = y157+y392;  y134 = y134+y391;  y143 = y143+y411;  y152 = y152+y431;  y158 = y158+y381;  y135 = y135+y390;  y144 = y144+y410;  y153 = y153+y430;

// Full depth 48 and Toffoli depth 7
y140 = y140+y387;  y160 = y160+y407;  y137 = y137+y427;  y146 = y146+y446;

// Full depth 49 and Toffoli depth 7
y140 = y140+y388;  y160 = y160+y408;  y137 = y137+y428;  y146 = y146+y448;

// Full depth 50 and Toffoli depth 7
y129 = y129+1;  y159 = y159+1;  y136 = y136+1;  y145 = y145+1;  y140 = y140+1;  y160 = y160+1;  y137 = y137+1;  y146 = y146+1;  y154 = y154+1;  y131 = y131+1;  y139 = y139+1;  y148 = y148+1;  y157 = y157+1;  y134 = y134+1;  y143 = y143+1;  y152 = y152+1;  y158 = y158+1;  y135 = y135+1;  y144 = y144+1;  y153 = y153+1;

// Full depth 51 and Toffoli depth 7
y1 = y1 + y129;  y2 = y2 + y140;  y3 = y3 + y151;  y4 = y4 + y154;  y5 = y5 + y155;  y6 = y6 + y156;  y7 = y7 + y157;  y8 = y8 + y158;  y9 = y9 + y159;  y10 = y10 + y160;  y11 = y11 + y130;  y12 = y12 + y131;  y13 = y13 + y132;  y14 = y14 + y133;  y15 = y15 + y134;  y16 = y16 + y135;  y17 = y17 + y136;  y18 = y18 + y137;  y19 = y19 + y138;  y20 = y20 + y139;  y21 = y21 + y141;  y22 = y22 + y142;  y23 = y23 + y143;  y24 = y24 + y144;  y25 = y25 + y145;  y26 = y26 + y146;  y27 = y27 + y147;  y28 = y28 + y148;  y29 = y29 + y149;  y30 = y30 + y150;  y31 = y31 + y152;  y32 = y32 + y153;

// Full depth 52 and Toffoli depth 7
y1 = y1 + y151;  y2 = y2 + y154;  y3 = y3 + y155;  y4 = y4 + y156;  y5 = y5 + y157;  y6 = y6 + y158;  y7 = y7 + y159;  y8 = y8 + y160;  y9 = y9 + y130;  y10 = y10 + y131;  y11 = y11 + y132;  y12 = y12 + y133;  y13 = y13 + y134;  y14 = y14 + y135;  y15 = y15 + y136;  y16 = y16 + y137;  y17 = y17 + y138;  y18 = y18 + y139;  y19 = y19 + y141;  y20 = y20 + y142;  y21 = y21 + y143;  y22 = y22 + y144;  y23 = y23 + y145;  y24 = y24 + y146;  y25 = y25 + y147;  y26 = y26 + y148;  y27 = y27 + y149;  y28 = y28 + y150;  y29 = y29 + y152;  y30 = y30 + y153;  y31 = y31 + y129;  y32 = y32 + y140;

// Full depth 53 and Toffoli depth 7
y1 = y1 + y130;  y2 = y2 + y131;  y3 = y3 + y132;  y4 = y4 + y133;  y5 = y5 + y134;  y6 = y6 + y135;  y7 = y7 + y136;  y8 = y8 + y137;  y9 = y9 + y138;  y10 = y10 + y139;  y11 = y11 + y141;  y12 = y12 + y142;  y13 = y13 + y143;  y14 = y14 + y144;  y15 = y15 + y145;  y16 = y16 + y146;  y17 = y17 + y147;  y18 = y18 + y148;  y19 = y19 + y149;  y20 = y20 + y150;  y21 = y21 + y152;  y22 = y22 + y153;  y23 = y23 + y129;  y24 = y24 + y140;  y25 = y25 + y151;  y26 = y26 + y154;  y27 = y27 + y155;  y28 = y28 + y156;  y29 = y29 + y157;  y30 = y30 + y158;  y31 = y31 + y159;  y32 = y32 + y160;

// Full depth 54 and Toffoli depth 7
y1 = y1 + y134;  y2 = y2 + y135;  y3 = y3 + y136;  y4 = y4 + y137;  y5 = y5 + y138;  y6 = y6 + y139;  y7 = y7 + y141;  y8 = y8 + y142;  y9 = y9 + y143;  y10 = y10 + y144;  y11 = y11 + y145;  y12 = y12 + y146;  y13 = y13 + y147;  y14 = y14 + y148;  y15 = y15 + y149;  y16 = y16 + y150;  y17 = y17 + y152;  y18 = y18 + y153;  y19 = y19 + y129;  y20 = y20 + y140;  y21 = y21 + y151;  y22 = y22 + y154;  y23 = y23 + y155;  y24 = y24 + y156;  y25 = y25 + y157;  y26 = y26 + y158;  y27 = y27 + y159;  y28 = y28 + y160;  y29 = y29 + y130;  y30 = y30 + y131;  y31 = y31 + y132;  y32 = y32 + y133;

// Full depth 55 and Toffoli depth 7
y1 = y1 + y138;  y2 = y2 + y139;  y3 = y3 + y141;  y4 = y4 + y142;  y5 = y5 + y143;  y6 = y6 + y144;  y7 = y7 + y145;  y8 = y8 + y146;  y9 = y9 + y147;  y10 = y10 + y148;  y11 = y11 + y149;  y12 = y12 + y150;  y13 = y13 + y152;  y14 = y14 + y153;  y15 = y15 + y129;  y16 = y16 + y140;  y17 = y17 + y151;  y18 = y18 + y154;  y19 = y19 + y155;  y20 = y20 + y156;  y21 = y21 + y157;  y22 = y22 + y158;  y23 = y23 + y159;  y24 = y24 + y160;  y25 = y25 + y130;  y26 = y26 + y131;  y27 = y27 + y132;  y28 = y28 + y133;  y29 = y29 + y134;  y30 = y30 + y135;  y31 = y31 + y136;  y32 = y32 + y137;

// Full depth 56 and Toffoli depth 7
y1 = y1 + y145;  y2 = y2 + y146;  y3 = y3 + y147;  y4 = y4 + y148;  y5 = y5 + y149;  y6 = y6 + y150;  y7 = y7 + y152;  y8 = y8 + y153;  y9 = y9 + y129;  y10 = y10 + y140;  y11 = y11 + y151;  y12 = y12 + y154;  y13 = y13 + y155;  y14 = y14 + y156;  y15 = y15 + y157;  y16 = y16 + y158;  y17 = y17 + y159;  y18 = y18 + y160;  y19 = y19 + y130;  y20 = y20 + y131;  y21 = y21 + y132;  y22 = y22 + y133;  y23 = y23 + y134;  y24 = y24 + y135;  y25 = y25 + y136;  y26 = y26 + y137;  y27 = y27 + y138;  y28 = y28 + y139;  y29 = y29 + y141;  y30 = y30 + y142;  y31 = y31 + y143;  y32 = y32 + y144;

// Full depth 57 and Toffoli depth 7
y1 = y1 + y150;  y2 = y2 + y152;  y3 = y3 + y153;  y4 = y4 + y129;  y5 = y5 + y140;  y6 = y6 + y151;  y7 = y7 + y154;  y8 = y8 + y155;  y9 = y9 + y156;  y10 = y10 + y157;  y11 = y11 + y158;  y12 = y12 + y159;  y13 = y13 + y160;  y14 = y14 + y130;  y15 = y15 + y131;  y16 = y16 + y132;  y17 = y17 + y133;  y18 = y18 + y134;  y19 = y19 + y135;  y20 = y20 + y136;  y21 = y21 + y137;  y22 = y22 + y138;  y23 = y23 + y139;  y24 = y24 + y141;  y25 = y25 + y142;  y26 = y26 + y143;  y27 = y27 + y144;  y28 = y28 + y145;  y29 = y29 + y146;  y30 = y30 + y147;  y31 = y31 + y148;  y32 = y32 + y149;

// Full depth 58 and Toffoli depth 7
y153 = y153+1;  y144 = y144+1;  y135 = y135+1;  y158 = y158+1;  y152 = y152+1;  y143 = y143+1;  y134 = y134+1;  y157 = y157+1;  y148 = y148+1;  y139 = y139+1;  y131 = y131+1;  y154 = y154+1;  y146 = y146+1;  y137 = y137+1;  y160 = y160+1;  y140 = y140+1;  y145 = y145+1;  y136 = y136+1;  y159 = y159+1;  y129 = y129+1;

// Full depth 59 and Toffoli depth 7
y146 = y146+y448;  y137 = y137+y428;  y160 = y160+y408;  y140 = y140+y388;

// Full depth 60 and Toffoli depth 7
y146 = y146+y446;  y137 = y137+y427;  y160 = y160+y407;  y140 = y140+y387;

// Full depth 61 and Toffoli depth 7
y153 = y153+y430;  y144 = y144+y410;  y135 = y135+y390;  y158 = y158+y381;  y152 = y152+y431;  y143 = y143+y411;  y134 = y134+y391;  y157 = y157+y392;  y146 = y146+y445;  y137 = y137+y426;  y160 = y160+y406;  y140 = y140+y386;

// Full depth 62 and Toffoli depth 7
y153 = y153+y433;  y144 = y144+y413;  y135 = y135+y394;  y158 = y158+y414;  y152 = y152+y432;  y143 = y143+y412;  y134 = y134+y393;  y157 = y157+y403;  y146 = y146+y444;  y137 = y137+y424;  y160 = y160+y405;  y140 = y140+y385;

// Full depth 63 and Toffoli depth 7
y153 = y153+y432;  y144 = y144+y412;  y135 = y135+y393;  y158 = y158+y403;  y152 = y152+y434;  y143 = y143+y415;  y134 = y134+y395;  y157 = y157+y425;  y150 = y150+y430;  y142 = y142+y410;  y133 = y133+y390;  y156 = y156+y381;  y148 = y148+y431;  y139 = y139+y411;  y131 = y131+y391;  y154 = y154+y392;  y147 = y147+y433;  y138 = y138+y413;  y130 = y130+y394;  y151 = y151+y414;  y146 = y146+y442;  y137 = y137+y422;  y160 = y160+y402;  y140 = y140+y383;

// Full depth 64 and Toffoli depth 7
y153 = y153+y443;  y144 = y144+y423;  y135 = y135+y404;  y158 = y158+y384;  y152 = y152+y433;  y143 = y143+y413;  y134 = y134+y394;  y157 = y157+y414;  y150 = y150+y431;  y142 = y142+y411;  y133 = y133+y391;  y156 = y156+y392;  y148 = y148+y432;  y139 = y139+y412;  y131 = y131+y393;  y154 = y154+y403;  y147 = y147+y434;  y138 = y138+y415;  y130 = y130+y395;  y151 = y151+y425;  y146 = y146+y441;  y137 = y137+y421;  y160 = y160+y401;  y140 = y140+y382;

// Full depth 65 and Toffoli depth 7
y153 = y153+y434;  y144 = y144+y415;  y135 = y135+y395;  y158 = y158+y425;  y152 = y152+y441;  y143 = y143+y421;  y134 = y134+y401;  y157 = y157+y382;  y150 = y150+y437;  y142 = y142+y417;  y133 = y133+y397;  y156 = y156+y447;  y148 = y148+y433;  y139 = y139+y413;  y131 = y131+y394;  y154 = y154+y414;  y147 = y147+y438;  y138 = y138+y418;  y130 = y130+y398;  y151 = y151+y450;  y146 = y146+y439;  y137 = y137+y419;  y160 = y160+y399;  y140 = y140+y451;

// Full depth 66 and Toffoli depth 7
y153 = y153+y448;  y144 = y144+y428;  y135 = y135+y408;  y158 = y158+y388;  y152 = y152+y444;  y143 = y143+y424;  y134 = y134+y405;  y157 = y157+y385;  y150 = y150+y441;  y142 = y142+y421;  y133 = y133+y401;  y156 = y156+y382;  y148 = y148+y434;  y139 = y139+y415;  y131 = y131+y395;  y154 = y154+y425;  y147 = y147+y439;  y138 = y138+y419;  y130 = y130+y399;  y151 = y151+y451;  y146 = y146+y437;  y137 = y137+y417;  y160 = y160+y397;  y140 = y140+y447;

// Full depth 67 and Toffoli depth 7
y153 = y153+y437;  y144 = y144+y417;  y135 = y135+y397;  y158 = y158+y447;  y152 = y152+y445;  y143 = y143+y426;  y134 = y134+y406;  y157 = y157+y386;  y150 = y150+y443;  y142 = y142+y423;  y133 = y133+y404;  y156 = y156+y384;  y149 = y149+y448;  y141 = y141+y428;  y132 = y132+y408;  y155 = y155+y388;  y148 = y148+y444;  y139 = y139+y424;  y131 = y131+y405;  y154 = y154+y385;  y147 = y147+y442;  y138 = y138+y422;  y130 = y130+y402;  y151 = y151+y383;  y145 = y145+y441;  y136 = y136+y421;  y159 = y159+y401;  y129 = y129+y382;  y146 = y146+y433;  y137 = y137+y413;  y160 = y160+y394;  y140 = y140+y414;

// Full depth 68 and Toffoli depth 7
y153 = y153+y449;  y144 = y144+y429;  y135 = y135+y409;  y158 = y158+y389;  y152 = y152+y442;  y143 = y143+y422;  y134 = y134+y402;  y157 = y157+y383;  y150 = y150+y444;  y142 = y142+y424;  y133 = y133+y405;  y156 = y156+y385;  y149 = y149+y445;  y141 = y141+y426;  y132 = y132+y406;  y155 = y155+y386;  y148 = y148+y448;  y139 = y139+y428;  y131 = y131+y408;  y154 = y154+y388;  y147 = y147+y443;  y138 = y138+y423;  y130 = y130+y404;  y151 = y151+y384;  y145 = y145+y446;  y136 = y136+y427;  y159 = y159+y407;  y129 = y129+y387;  y146 = y146+y432;  y137 = y137+y412;  y160 = y160+y393;  y140 = y140+y403;

// Full depth 69 and Toffoli depth 7
y153 = y153+y438;  y144 = y144+y418;  y135 = y135+y398;  y158 = y158+y450;  y152 = y152+y446;  y143 = y143+y427;  y134 = y134+y407;  y157 = y157+y387;  y150 = y150+y442;  y142 = y142+y422;  y133 = y133+y402;  y156 = y156+y383;  y149 = y149+y443;  y141 = y141+y423;  y132 = y132+y404;  y155 = y155+y384;  y148 = y148+y449;  y139 = y139+y429;  y131 = y131+y409;  y154 = y154+y389;  y147 = y147+y444;  y138 = y138+y424;  y130 = y130+y405;  y151 = y151+y385;  y145 = y145+y448;  y136 = y136+y428;  y159 = y159+y408;  y129 = y129+y388;  y146 = y146+y431;  y137 = y137+y411;  y160 = y160+y391;  y140 = y140+y392;

// Full depth 70 and Toffoli depth 7
y153 = y153+y444;  y144 = y144+y424;  y135 = y135+y405;  y158 = y158+y385;  y152 = y152+y448;  y143 = y143+y428;  y134 = y134+y408;  y157 = y157+y388;  y150 = y150+y438;  y142 = y142+y418;  y133 = y133+y398;  y156 = y156+y450;  y149 = y149+y446;  y141 = y141+y427;  y132 = y132+y407;  y155 = y155+y387;  y148 = y148+y443;  y139 = y139+y423;  y131 = y131+y404;  y154 = y154+y384;  y147 = y147+y441;  y138 = y138+y421;  y130 = y130+y401;  y151 = y151+y382;  y145 = y145+y440;  y136 = y136+y420;  y159 = y159+y400;  y129 = y129+y452;  y146 = y146+y435;  y137 = y137+y416;  y160 = y160+y396;  y140 = y140+y436;

// Full depth 71 and Toffoli depth 8
y431 = y431+y236*y367;  y411 = y411+y200*y347;  y391 = y391+y303*y326;  y392 = y392+y262*y380;  y445 = y445+y235*y368;  y426 = y426+y199*y348;  y406 = y406+y302*y327;  y386 = y386+y261*y306;  y434 = y434+y234*y371;  y415 = y415+y198*y351;  y395 = y395+y301*y330;  y425 = y425+y260*y309;  y433 = y433+y233*y372;  y413 = y413+y197*y352;  y394 = y394+y300*y331;  y414 = y414+y259*y310;  y448 = y448+y232*y373;  y428 = y428+y196*y353;  y408 = y408+y299*y332;  y388 = y388+y258*y311;  y430 = y430+y231*y362;  y410 = y410+y195*y342;  y390 = y390+y298*y321;  y381 = y381+y257*y345;  y437 = y437+y228*y363;  y417 = y417+y192*y343;  y397 = y397+y295*y322;  y447 = y447+y254*y364;  y439 = y439+y225*y365;  y419 = y419+y189*y344;  y399 = y399+y291*y323;  y451 = y451+y250*y375;  y432 = y432+y221*y64;  y412 = y412+y185*y56;  y393 = y393+y287*y48;  y403 = y403+y246*y40;

// Full depth 72 and Toffoli depth 9
y441 = y441+y236*y366;  y421 = y421+y200*y346;  y401 = y401+y303*y324;  y382 = y382+y262*y379;  y435 = y435+y235*y369;  y416 = y416+y199*y349;  y396 = y396+y302*y328;  y436 = y436+y261*y307;  y444 = y444+y234*y370;  y424 = y424+y198*y350;  y405 = y405+y301*y329;  y385 = y385+y260*y308;  y443 = y443+y233*y63;  y423 = y423+y197*y55;  y404 = y404+y300*y47;  y384 = y384+y259*y39;  y438 = y438+y232*y374;  y418 = y418+y196*y354;  y398 = y398+y299*y333;  y450 = y450+y258*y312;  y440 = y440+y231*y358;  y420 = y420+y195*y338;  y400 = y400+y298*y317;  y452 = y452+y257*y305;  y446 = y446+y228*y360;  y427 = y427+y192*y340;  y407 = y407+y295*y319;  y387 = y387+y254*y325;  y449 = y449+y225*y361;  y429 = y429+y189*y341;  y409 = y409+y291*y320;  y389 = y389+y250*y335;  y442 = y442+y221*y359;  y422 = y422+y185*y339;  y402 = y402+y287*y318;  y383 = y383+y246*y315;

// Full depth 73 and Toffoli depth 9
y236 = y236+y231;  y200 = y200+y195;  y303 = y303+y298;  y262 = y262+y257;  y235 = y235+y234;  y199 = y199+y198;  y302 = y302+y301;  y261 = y261+y260;

// Full depth 74 and Toffoli depth 9
y236 = y236+y221;  y200 = y200+y185;  y303 = y303+y287;  y262 = y262+y246;  y235 = y235+y233;  y199 = y199+y197;  y302 = y302+y300;  y261 = y261+y259;  y234 = y234+y231;  y198 = y198+y195;  y301 = y301+y298;  y260 = y260+y257;

// Full depth 75 and Toffoli depth 9
y233 = y233+y221;  y197 = y197+y185;  y300 = y300+y287;  y259 = y259+y246;  y231 = y231+y230;  y195 = y195+y194;  y298 = y298+y297;  y257 = y257+y256;

// Full depth 76 and Toffoli depth 10
y234 = y234+y228;  y198 = y198+y192;  y301 = y301+y295;  y260 = y260+y254;  y230 = y230+y221*y229;  y194 = y194+y185*y193;  y297 = y297+y287*y296;  y256 = y256+y246*y255;

// Full depth 77 and Toffoli depth 10
y232 = y232+y228;  y196 = y196+y192;  y299 = y299+y295;  y258 = y258+y254;  y229 = y229+y227;  y193 = y193+y191;  y296 = y296+y294;  y255 = y255+y253;

// Full depth 78 and Toffoli depth 10
y228 = y228+y227;  y192 = y192+y191;  y295 = y295+y294;  y254 = y254+y253;

// Full depth 79 and Toffoli depth 11
y233 = y233+y225;  y197 = y197+y189;  y300 = y300+y291;  y259 = y259+y250;  y228 = y228+y224;  y192 = y192+y188;  y295 = y295+y290;  y254 = y254+y249;  y227 = y227+y215*y226;  y191 = y191+y178*y190;  y294 = y294+y280*y292;  y253 = y253+y239*y251;

// Full depth 80 and Toffoli depth 11
y232 = y232+y225;  y196 = y196+y189;  y299 = y299+y291;  y258 = y258+y250;  y226 = y226+y224;  y190 = y190+y188;  y292 = y292+y290;  y251 = y251+y249;

// Full depth 81 and Toffoli depth 11
y229 = y229+y219;  y193 = y193+y183;  y296 = y296+y285;  y255 = y255+y244;  y225 = y225+y224;  y189 = y189+y188;  y291 = y291+y290;  y250 = y250+y249;  y221 = y221+y220;  y185 = y185+y184;  y287 = y287+y286;  y246 = y246+y245;

// Full depth 82 and Toffoli depth 12
y226 = y226+y218;  y190 = y190+y182;  y292 = y292+y284;  y251 = y251+y243;  y224 = y224+y222*y223;  y188 = y188+y186*y187;  y290 = y290+y288*y289;  y249 = y249+y247*y248;  y220 = y220+y217*y219;  y184 = y184+y180*y183;  y286 = y286+y282*y285;  y245 = y245+y241*y244;

// Full depth 83 and Toffoli depth 12
y231 = y231+y217;  y195 = y195+y180;  y298 = y298+y282;  y257 = y257+y241;  y222 = y222+y216;  y186 = y186+y179;  y288 = y288+y281;  y247 = y247+y240;  y219 = y219+y218;  y183 = y183+y182;  y285 = y285+y284;  y244 = y244+y243;

// Full depth 84 and Toffoli depth 13
y228 = y228+y206;  y192 = y192+y167;  y295 = y295+y269;  y254 = y254+y274;  y225 = y225+y215;  y189 = y189+y178;  y291 = y291+y280;  y250 = y250+y239;  y223 = y223+y378;  y187 = y187+y357;  y289 = y289+y337;  y248 = y248+y316;  y218 = y218+y214*y216;  y182 = y182+y177*y179;  y284 = y284+y279*y281;  y243 = y243+y238*y240;  y217 = y217+y377;  y180 = y180+y356;  y282 = y282+y336;  y241 = y241+y314;

// Full depth 85 and Toffoli depth 13
y228 = y228+y212;  y192 = y192+y174;  y295 = y295+y276;  y254 = y254+y176;  y223 = y223+y213;  y187 = y187+y175;  y289 = y289+y277;  y248 = y248+y181;  y222 = y222+y215;  y186 = y186+y178;  y288 = y288+y280;  y247 = y247+y239;  y221 = y221+y206;  y185 = y185+y167;  y287 = y287+y269;  y246 = y246+y274;  y217 = y217+y378;  y180 = y180+y357;  y282 = y282+y337;  y241 = y241+y316;  y214 = y214+y377;  y177 = y177+y356;  y279 = y279+y336;  y238 = y238+y314;

// Full depth 86 and Toffoli depth 13
y228 = y228+y207;  y192 = y192+y168;  y295 = y295+y270;  y254 = y254+y278;  y223 = y223+y218;  y187 = y187+y182;  y289 = y289+y284;  y248 = y248+y243;  y221 = y221+y211;  y185 = y185+y173;  y287 = y287+y275;  y246 = y246+y172;  y219 = y219+y215;  y183 = y183+y178;  y285 = y285+y280;  y244 = y244+y239;  y217 = y217+y213;  y180 = y180+y175;  y282 = y282+y277;  y241 = y241+y181;  y214 = y214+y212;  y177 = y177+y174;  y279 = y279+y276;  y238 = y238+y176;

// Full depth 87 and Toffoli depth 13
y228 = y228+y213;  y192 = y192+y175;  y295 = y295+y277;  y254 = y254+y181;  y223 = y223+y207;  y187 = y187+y168;  y289 = y289+y270;  y248 = y248+y278;  y221 = y221+y378;  y185 = y185+y357;  y287 = y287+y337;  y246 = y246+y316;  y217 = y217+y209;  y180 = y180+y170;  y282 = y282+y272;  y241 = y241+y293;  y216 = y216+y58;  y179 = y179+y50;  y281 = y281+y42;  y240 = y240+y34;  y215 = y215+y376;  y178 = y178+y355;  y280 = y280+y334;  y239 = y239+y313;  y214 = y214+y211;  y177 = y177+y173;  y279 = y279+y275;  y238 = y238+y172;

// Full depth 88 and Toffoli depth 13
y223 = y223+y208;  y187 = y187+y169;  y289 = y289+y271;  y248 = y248+y283;  y221 = y221+y207;  y185 = y185+y168;  y287 = y287+y270;  y246 = y246+y278;  y217 = y217+y205;  y180 = y180+y166;  y282 = y282+y268;  y241 = y241+y263;  y216 = y216+y212;  y179 = y179+y174;  y281 = y281+y276;  y240 = y240+y176;  y215 = y215+y213;  y178 = y178+y175;  y280 = y280+y277;  y239 = y239+y181;  y214 = y214+y210;  y177 = y177+y171;  y279 = y279+y273;  y238 = y238+y304;

// Full depth 89 and Toffoli depth 13
y223 = y223+y206;  y187 = y187+y167;  y289 = y289+y269;  y248 = y248+y274;  y221 = y221+y213;  y185 = y185+y175;  y287 = y287+y277;  y246 = y246+y181;  y217 = y217+y212;  y180 = y180+y174;  y282 = y282+y276;  y241 = y241+y176;  y216 = y216+y205;  y179 = y179+y166;  y281 = y281+y268;  y240 = y240+y263;  y215 = y215+y211;  y178 = y178+y173;  y280 = y280+y275;  y239 = y239+y172;  y214 = y214+y209;  y177 = y177+y170;  y279 = y279+y272;  y238 = y238+y293;

// Full depth 90 and Toffoli depth 13
y228 = y228+y58;  y192 = y192+y50;  y295 = y295+y42;  y254 = y254+y34;  y223 = y223+y210;  y187 = y187+y171;  y289 = y289+y273;  y248 = y248+y304;  y221 = y221+y208;  y185 = y185+y169;  y287 = y287+y271;  y246 = y246+y283;  y217 = y217+y206;  y180 = y180+y167;  y282 = y282+y269;  y241 = y241+y274;  y216 = y216+y211;  y179 = y179+y173;  y281 = y281+y275;  y240 = y240+y172;  y215 = y215+y205;  y178 = y178+y166;  y280 = y280+y268;  y239 = y239+y263;  y214 = y214+y207;  y177 = y177+y168;  y279 = y279+y270;  y238 = y238+y278;

// Full depth 91 and Toffoli depth 13
y228 = y228+y376;  y192 = y192+y355;  y295 = y295+y334;  y254 = y254+y313;  y223 = y223+y211;  y187 = y187+y173;  y289 = y289+y275;  y248 = y248+y172;  y221 = y221+y210;  y185 = y185+y171;  y287 = y287+y273;  y246 = y246+y304;  y217 = y217+y208;  y180 = y180+y169;  y282 = y282+y271;  y241 = y241+y283;  y216 = y216+y206;  y179 = y179+y167;  y281 = y281+y269;  y240 = y240+y274;  y215 = y215+y207;  y178 = y178+y168;  y280 = y280+y270;  y239 = y239+y278;  y214 = y214+y205;  y177 = y177+y166;  y279 = y279+y268;  y238 = y238+y263;

// Full depth 92 and Toffoli depth 14
y213 = y213+y362*y358;  y175 = y175+y342*y338;  y277 = y277+y321*y317;  y181 = y181+y345*y305;  y212 = y212+y367*y366;  y174 = y174+y347*y346;  y276 = y276+y326*y324;  y176 = y176+y380*y379;  y211 = y211+y64*y359;  y173 = y173+y56*y339;  y275 = y275+y48*y318;  y172 = y172+y40*y315;  y210 = y210+y372*y63;  y171 = y171+y352*y55;  y273 = y273+y331*y47;  y304 = y304+y310*y39;  y209 = y209+y369*y368;  y170 = y170+y349*y348;  y272 = y272+y328*y327;  y293 = y293+y307*y306;  y208 = y208+y371*y370;  y169 = y169+y351*y350;  y271 = y271+y330*y329;  y283 = y283+y309*y308;  y207 = y207+y363*y360;  y168 = y168+y343*y340;  y270 = y270+y322*y319;  y278 = y278+y364*y325;  y206 = y206+y373*y374;  y167 = y167+y353*y354;  y269 = y269+y332*y333;  y274 = y274+y311*y312;  y205 = y205+y365*y361;  y166 = y166+y344*y341;  y268 = y268+y323*y320;  y263 = y263+y375*y335;

// Full depth 93 and Toffoli depth 14
y376 = y376+y365;  y355 = y355+y344;  y334 = y334+y323;  y313 = y313+y375;

// Full depth 94 and Toffoli depth 14
y371 = y371+y372;  y351 = y351+y352;  y330 = y330+y331;  y309 = y309+y310;  y363 = y363+y365;  y343 = y343+y344;  y322 = y322+y323;  y364 = y364+y375;

// Full depth 95 and Toffoli depth 14
y371 = y371+y369;  y351 = y351+y349;  y330 = y330+y328;  y309 = y309+y307;  y372 = y372+y365;  y352 = y352+y344;  y331 = y331+y323;  y310 = y310+y375;

// Full depth 96 and Toffoli depth 14
y363 = y363+y374;  y343 = y343+y354;  y322 = y322+y333;  y364 = y364+y312;  y365 = y365+y369;  y344 = y344+y349;  y323 = y323+y328;  y375 = y375+y307;

// Full depth 97 and Toffoli depth 14
y369 = y369+y374;  y349 = y349+y354;  y328 = y328+y333;  y307 = y307+y312;

// Full depth 98 and Toffoli depth 14
y374 = y374+y373;  y354 = y354+y353;  y333 = y333+y332;  y312 = y312+y311;

// Full depth 99 and Toffoli depth 14
y376 = y376+y361;  y355 = y355+y341;  y334 = y334+y320;  y313 = y313+y335;  y365 = y365+y203;  y344 = y344+y164;  y323 = y323+y266;  y375 = y375+y242;  y369 = y369+y367;  y349 = y349+y347;  y328 = y328+y326;  y307 = y307+y380;  y373 = y373+y360;  y353 = y353+y340;  y332 = y332+y319;  y311 = y311+y325;

// Full depth 100 and Toffoli depth 14
y203 = y203+y359;  y164 = y164+y339;  y266 = y266+y318;  y242 = y242+y315;  y373 = y373+y361;  y353 = y353+y341;  y332 = y332+y320;  y311 = y311+y335;  y360 = y360+y358;  y340 = y340+y338;  y319 = y319+y317;  y325 = y325+y305;  y362 = y362+y367;  y342 = y342+y347;  y321 = y321+y326;  y345 = y345+y380;

// Full depth 101 and Toffoli depth 14
y378 = y378+y201;  y357 = y357+y162;  y337 = y337+y264;  y316 = y316+y161;  y358 = y358+y359;  y338 = y338+y339;  y317 = y317+y318;  y305 = y305+y315;  y367 = y367+y361;  y347 = y347+y341;  y326 = y326+y320;  y380 = y380+y335;

// Full depth 102 and Toffoli depth 14
y378 = y378+y204;  y357 = y357+y165;  y337 = y337+y267;  y316 = y316+y252;  y372 = y372+y64;  y352 = y352+y56;  y331 = y331+y48;  y310 = y310+y40;  y374 = y374+y58;  y354 = y354+y50;  y333 = y333+y42;  y312 = y312+y34;  y360 = y360+y370;  y340 = y340+y350;  y319 = y319+y329;  y325 = y325+y308;  y358 = y358+y366;  y338 = y338+y346;  y317 = y317+y324;  y305 = y305+y379;  y377 = y377+y201;  y356 = y356+y162;  y336 = y336+y264;  y314 = y314+y161;  y361 = y361+y359;  y341 = y341+y339;  y320 = y320+y318;  y335 = y335+y315;

// Full depth 103 and Toffoli depth 14
y204 = y204+y57;  y165 = y165+y49;  y267 = y267+y41;  y252 = y252+y33;  y58 = y58+1;  y50 = y50+1;  y42 = y42+1;  y34 = y34+1;  y366 = y366+y202;  y346 = y346+y163;  y324 = y324+y265;  y379 = y379+y237;  y362 = y362+y64;  y342 = y342+y56;  y321 = y321+y48;  y345 = y345+y40;  y359 = y359+y201;  y339 = y339+y162;  y318 = y318+y264;  y315 = y315+y161;  y368 = y368+y370;  y348 = y348+y350;  y327 = y327+y329;  y306 = y306+y308;

// Full depth 104 and Toffoli depth 14
y204 = y204+y62;  y165 = y165+y54;  y267 = y267+y46;  y252 = y252+y38;  y202 = y202+y57;  y163 = y163+y49;  y265 = y265+y41;  y237 = y237+y33;  y64 = y64+1;  y56 = y56+1;  y48 = y48+1;  y40 = y40+1;  y367 = y367+y61;  y347 = y347+y53;  y326 = y326+y45;  y380 = y380+y37;  y361 = y361+y63;  y341 = y341+y55;  y320 = y320+y47;  y335 = y335+y39;  y201 = y201+y59;  y162 = y162+y51;  y264 = y264+y43;  y161 = y161+y35;  y370 = y370+y58;  y350 = y350+y50;  y329 = y329+y42;  y308 = y308+y34;

// Full depth 105 and Toffoli depth 14
y203 = y203+y57;  y164 = y164+y49;  y266 = y266+y41;  y242 = y242+y33;  y366 = y366+y59;  y346 = y346+y51;  y324 = y324+y43;  y379 = y379+y35;  y202 = y202+y60;  y163 = y163+y52;  y265 = y265+y44;  y237 = y237+y36;  y377 = y377+y58;  y356 = y356+y50;  y336 = y336+y42;  y314 = y314+y34;  y359 = y359+y64;  y339 = y339+y56;  y318 = y318+y48;  y315 = y315+y40;  y201 = y201+y61;  y162 = y162+y53;  y264 = y264+y45;  y161 = y161+y37;  y368 = y368+y63;  y348 = y348+y55;  y327 = y327+y47;  y306 = y306+y39;  y370 = y370+y62;  y350 = y350+y54;  y329 = y329+y46;  y308 = y308+y38;

// Full depth 106 and Toffoli depth 14
y64 = y64 + y128;  y63 = y63 + y127;  y62 = y62 + y126;  y61 = y61 + y125;  y60 = y60 + y124;  y59 = y59 + y123;  y58 = y58 + y122;  y57 = y57 + y121;  y56 = y56 + y120;  y55 = y55 + y119;  y54 = y54 + y118;  y53 = y53 + y117;  y52 = y52 + y116;  y51 = y51 + y115;  y50 = y50 + y114;  y49 = y49 + y113;  y48 = y48 + y112;  y47 = y47 + y111;  y46 = y46 + y110;  y45 = y45 + y109;  y44 = y44 + y108;  y43 = y43 + y107;  y42 = y42 + y106;  y41 = y41 + y105;  y40 = y40 + y104;  y39 = y39 + y103;  y38 = y38 + y102;  y37 = y37 + y101;  y36 = y36 + y100;  y35 = y35 + y99;  y34 = y34 + y98;  y33 = y33 + y97;

// Full depth 107 and Toffoli depth 14
y64 = y64 + y96;  y63 = y63 + y95;  y62 = y62 + y94;  y61 = y61 + y93;  y60 = y60 + y92;  y59 = y59 + y91;  y58 = y58 + y90;  y57 = y57 + y89;  y56 = y56 + y88;  y55 = y55 + y87;  y54 = y54 + y86;  y53 = y53 + y85;  y52 = y52 + y84;  y51 = y51 + y83;  y50 = y50 + y82;  y49 = y49 + y81;  y48 = y48 + y80;  y47 = y47 + y79;  y46 = y46 + y78;  y45 = y45 + y77;  y44 = y44 + y76;  y43 = y43 + y75;  y42 = y42 + y74;  y41 = y41 + y73;  y40 = y40 + y72;  y39 = y39 + y71;  y38 = y38 + y70;  y37 = y37 + y69;  y36 = y36 + y68;  y35 = y35 + y67;  y34 = y34 + y66;  y33 = y33 + y65;

// Reordering
// z1=y33; z2=y34; z3=y35; z4=y36; z5=y37; z6=y38; z7=y39; z8=y40; z9=y41; z10=y42; z11=y43; z12=y44; z13=y45; z14=y46; z15=y47; z16=y48; z17=y49; z18=y50; z19=y51; z20=y52; z21=y53; z22=y54; z23=y55; z24=y56; z25=y57; z26=y58; z27=y59; z28=y60; z29=y61; z30=y62; z31=y63; z32=y64; z33=y65; z34=y66; z35=y67; z36=y68; z37=y69; z38=y70; z39=y71; z40=y72; z41=y73; z42=y74; z43=y75; z44=y76; z45=y77; z46=y78; z47=y79; z48=y80; z49=y81; z50=y82; z51=y83; z52=y84; z53=y85; z54=y86; z55=y87; z56=y88; z57=y89; z58=y90; z59=y91; z60=y92; z61=y93; z62=y94; z63=y95; z64=y96; z65=y97; z66=y98; z67=y99; z68=y100; z69=y101; z70=y102; z71=y103; z72=y104; z73=y105; z74=y106; z75=y107; z76=y108; z77=y109; z78=y110; z79=y111; z80=y112; z81=y113; z82=y114; z83=y115; z84=y116; z85=y117; z86=y118; z87=y119; z88=y120; z89=y121; z90=y122; z91=y123; z92=y124; z93=y125; z94=y126; z95=y127; z96=y128; z97=y1; z98=y2; z99=y3; z100=y4; z101=y5; z102=y6; z103=y7; z104=y8; z105=y9; z106=y10; z107=y11; z108=y12; z109=y13; z110=y14; z111=y15; z112=y16; z113=y17; z114=y18; z115=y19; z116=y20; z117=y21; z118=y22; z119=y23; z120=y24; z121=y25; z122=y26; z123=y27; z124=y28; z125=y29; z126=y30; z127=y31; z128=y32;


int res=0;res=res*2+y1.bit;res=res*2+y2.bit;res=res*2+y3.bit;res=res*2+y4.bit;res=res*2+y5.bit;res=res*2+y6.bit;res=res*2+y7.bit;res=res*2+y8.bit;res=res*2+y9.bit;res=res*2+y10.bit;res=res*2+y11.bit;res=res*2+y12.bit;res=res*2+y13.bit;res=res*2+y14.bit;res=res*2+y15.bit;res=res*2+y16.bit;res=res*2+y17.bit;res=res*2+y18.bit;res=res*2+y19.bit;res=res*2+y20.bit;res=res*2+y21.bit;res=res*2+y22.bit;res=res*2+y23.bit;res=res*2+y24.bit;res=res*2+y25.bit;res=res*2+y26.bit;res=res*2+y27.bit;res=res*2+y28.bit;res=res*2+y29.bit;res=res*2+y30.bit;res=res*2+y31.bit;res=res*2+y32.bit;
printf("%08X\n", res);

return 0;
}