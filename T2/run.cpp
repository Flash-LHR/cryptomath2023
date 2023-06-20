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

x1=0;x2=1;x3=1;x4=1;x5=1;x6=1;x7=1;x8=1;x9=1;x10=1;x11=1;x12=1;x13=1;x14=1;x15=1;x16=1;x17=1;x18=1;x19=1;x20=1;x21=1;x22=1;x23=1;x24=1;x25=1;x26=1;x27=1;x28=1;x29=1;x30=1;x31=1;x32=1;x33=1;x34=1;x35=1;x36=1;x37=1;x38=1;x39=1;x40=1;x41=1;x42=1;x43=1;x44=1;x45=1;x46=1;x47=1;x48=1;x49=1;x50=1;x51=1;x52=1;x53=1;x54=1;x55=1;x56=1;x57=1;x58=1;x59=1;x60=1;x61=1;x62=1;x63=1;x64=1;x65=1;x66=1;x67=1;x68=1;x69=1;x70=1;x71=1;x72=1;x73=1;x74=1;x75=1;x76=1;x77=1;x78=1;x79=1;x80=1;x81=1;x82=1;x83=1;x84=1;x85=1;x86=1;x87=1;x88=1;x89=1;x90=1;x91=1;x92=1;x93=1;x94=1;x95=1;x96=1;x97=1;x98=1;x99=1;x100=1;x101=1;x102=1;x103=1;x104=1;x105=1;x106=1;x107=1;x108=1;x109=1;x110=1;x111=1;x112=1;x113=1;x114=1;x115=1;x116=1;x117=1;x118=1;x119=1;x120=1;x121=1;x122=1;x123=1;x124=1;x125=1;x126=1;x127=1;x128=0;
// x1=1;x2=1;x3=1;x4=1;x5=1;x6=1;x7=1;x8=1;x9=1;x10=1;x11=1;x12=1;x13=1;x14=1;x15=1;x16=1;x17=1;x18=1;x19=1;x20=1;x21=1;x22=1;x23=1;x24=1;x25=1;x26=1;x27=1;x28=1;x29=1;x30=1;x31=1;x32=1;x33=1;x34=1;x35=1;x36=1;x37=1;x38=1;x39=1;x40=1;x41=1;x42=1;x43=1;x44=1;x45=1;x46=1;x47=1;x48=1;x49=1;x50=1;x51=1;x52=1;x53=1;x54=1;x55=1;x56=1;x57=1;x58=1;x59=1;x60=1;x61=1;x62=1;x63=1;x64=1;x65=1;x66=1;x67=1;x68=1;x69=1;x70=1;x71=1;x72=1;x73=1;x74=1;x75=1;x76=1;x77=1;x78=1;x79=1;x80=1;x81=1;x82=1;x83=1;x84=1;x85=1;x86=1;x87=1;x88=1;x89=1;x90=1;x91=1;x92=1;x93=1;x94=1;x95=1;x96=1;x97=1;x98=1;x99=1;x100=1;x101=1;x102=1;x103=1;x104=1;x105=1;x106=1;x107=1;x108=1;x109=1;x110=1;x111=1;x112=1;x113=1;x114=1;x115=1;x116=1;x117=1;x118=1;x119=1;x120=1;x121=1;x122=1;x123=1;x124=1;x125=1;x126=1;x127=1;x128=0;
// x1=1;x2=1;x3=1;x4=1;x5=1;x6=1;x7=1;x8=1;x9=1;x10=1;x11=1;x12=1;x13=1;x14=1;x15=1;x16=1;x17=1;x18=1;x19=1;x20=1;x21=1;x22=1;x23=1;x24=1;x25=1;x26=1;x27=1;x28=1;x29=1;x30=1;x31=1;x32=1;x33=1;x34=1;x35=1;x36=1;x37=1;x38=1;x39=1;x40=1;x41=1;x42=1;x43=1;x44=1;x45=1;x46=1;x47=1;x48=1;x49=1;x50=1;x51=1;x52=1;x53=1;x54=1;x55=1;x56=1;x57=1;x58=1;x59=1;x60=1;x61=1;x62=1;x63=1;x64=1;x65=1;x66=1;x67=1;x68=1;x69=1;x70=1;x71=1;x72=1;x73=1;x74=1;x75=1;x76=1;x77=1;x78=1;x79=1;x80=1;x81=1;x82=1;x83=1;x84=1;x85=1;x86=1;x87=1;x88=1;x89=1;x90=1;x91=1;x92=1;x93=1;x94=1;x95=1;x96=1;x97=1;x98=1;x99=1;x100=1;x101=1;x102=1;x103=1;x104=1;x105=1;x106=1;x107=1;x108=1;x109=1;x110=1;x111=1;x112=1;x113=1;x114=1;x115=1;x116=1;x117=1;x118=1;x119=1;x120=1;x121=1;x122=1;x123=1;x124=1;x125=1;x126=1;x127=1;x128=1;
// x1=0;x2=0;x3=0;x4=0;x5=0;x6=0;x7=0;x8=0;x9=0;x10=0;x11=0;x12=0;x13=0;x14=0;x15=0;x16=0;x17=0;x18=0;x19=0;x20=0;x21=0;x22=0;x23=0;x24=0;x25=0;x26=0;x27=0;x28=0;x29=0;x30=0;x31=0;x32=0;x33=0;x34=0;x35=0;x36=0;x37=0;x38=0;x39=0;x40=0;x41=0;x42=0;x43=0;x44=0;x45=0;x46=0;x47=0;x48=0;x49=0;x50=0;x51=0;x52=0;x53=0;x54=0;x55=0;x56=0;x57=0;x58=0;x59=0;x60=0;x61=0;x62=0;x63=0;x64=0;x65=0;x66=0;x67=0;x68=0;x69=0;x70=0;x71=0;x72=0;x73=0;x74=0;x75=0;x76=0;x77=0;x78=0;x79=0;x80=0;x81=0;x82=0;x83=0;x84=0;x85=0;x86=0;x87=0;x88=0;x89=0;x90=0;x91=0;x92=0;x93=0;x94=0;x95=0;x96=0;x97=0;x98=0;x99=0;x100=0;x101=0;x102=0;x103=0;x104=0;x105=0;x106=0;x107=0;x108=0;x109=0;x110=0;x111=0;x112=0;x113=0;x114=0;x115=0;x116=0;x117=0;x118=0;x119=0;x120=0;x121=0;x122=0;x123=0;x124=0;x125=0;x126=0;x127=0;x128=0;

//  Initialization
y1 = x1; y2 = x2; y3 = x3; y4 = x4; y5 = x5; y6 = x6; y7 = x7; y8 = x8; y9 = x9; y10 = x10; y11 = x11; y12 = x12; y13 = x13; y14 = x14; y15 = x15; y16 = x16; y17 = x17; y18 = x18; y19 = x19; y20 = x20; y21 = x21; y22 = x22; y23 = x23; y24 = x24; y25 = x25; y26 = x26; y27 = x27; y28 = x28; y29 = x29; y30 = x30; y31 = x31; y32 = x32; y33 = x33; y34 = x34; y35 = x35; y36 = x36; y37 = x37; y38 = x38; y39 = x39; y40 = x40; y41 = x41; y42 = x42; y43 = x43; y44 = x44; y45 = x45; y46 = x46; y47 = x47; y48 = x48; y49 = x49; y50 = x50; y51 = x51; y52 = x52; y53 = x53; y54 = x54; y55 = x55; y56 = x56; y57 = x57; y58 = x58; y59 = x59; y60 = x60; y61 = x61; y62 = x62; y63 = x63; y64 = x64; y65 = x65; y66 = x66; y67 = x67; y68 = x68; y69 = x69; y70 = x70; y71 = x71; y72 = x72; y73 = x73; y74 = x74; y75 = x75; y76 = x76; y77 = x77; y78 = x78; y79 = x79; y80 = x80; y81 = x81; y82 = x82; y83 = x83; y84 = x84; y85 = x85; y86 = x86; y87 = x87; y88 = x88; y89 = x89; y90 = x90; y91 = x91; y92 = x92; y93 = x93; y94 = x94; y95 = x95; y96 = x96; y97 = x97; y98 = x98; y99 = x99; y100 = x100; y101 = x101; y102 = x102; y103 = x103; y104 = x104; y105 = x105; y106 = x106; y107 = x107; y108 = x108; y109 = x109; y110 = x110; y111 = x111; y112 = x112; y113 = x113; y114 = x114; y115 = x115; y116 = x116; y117 = x117; y118 = x118; y119 = x119; y120 = x120; y121 = x121; y122 = x122; y123 = x123; y124 = x124; y125 = x125; y126 = x126; y127 = x127; y128 = x128; y129 = 0; y130 = 0; y131 = 0; y132 = 0; y133 = 0; y134 = 0; y135 = 0; y136 = 0; y137 = 0; y138 = 0; y139 = 0; y140 = 0; y141 = 0; y142 = 0; y143 = 0; y144 = 0; y145 = 0; y146 = 0; y147 = 0; y148 = 0; y149 = 0; y150 = 0; y151 = 0; y152 = 0; y153 = 0; y154 = 0; y155 = 0; y156 = 0; y157 = 0; y158 = 0; y159 = 0; y160 = 0; y161 = 0; y162 = 0; y163 = 0; y164 = 0; y165 = 0; y166 = 0; y167 = 0; y168 = 0; y169 = 0; y170 = 0; y171 = 0; y172 = 0; y173 = 0; y174 = 0; y175 = 0; y176 = 0; y177 = 0; y178 = 0; y179 = 0; y180 = 0; y181 = 0; y182 = 0; y183 = 0; y184 = 0; y185 = 0; y186 = 0; y187 = 0; y188 = 0; y189 = 0; y190 = 0; y191 = 0; y192 = 0; y193 = 0; y194 = 0; y195 = 0; y196 = 0; y197 = 0; y198 = 0; y199 = 0; y200 = 0; y201 = 0; y202 = 0; y203 = 0; y204 = 0; y205 = 0; y206 = 0; y207 = 0; y208 = 0; y209 = 0; y210 = 0; y211 = 0; y212 = 0; y213 = 0; y214 = 0; y215 = 0; y216 = 0; y217 = 0; y218 = 0; y219 = 0; y220 = 0; y221 = 0; y222 = 0; y223 = 0; y224 = 0; y225 = 0; y226 = 0; y227 = 0; y228 = 0; y229 = 0; y230 = 0; y231 = 0; y232 = 0; y233 = 0; y234 = 0; y235 = 0; y236 = 0; y237 = 0; y238 = 0; y239 = 0; y240 = 0; y241 = 0; y242 = 0; y243 = 0; y244 = 0; y245 = 0; y246 = 0; y247 = 0; y248 = 0; y249 = 0; y250 = 0; y251 = 0; y252 = 0; y253 = 0; y254 = 0; y255 = 0; y256 = 0; y257 = 0; y258 = 0; y259 = 0; y260 = 0; y261 = 0; y262 = 0; y263 = 0; y264 = 0; y265 = 0; y266 = 0; y267 = 0; y268 = 0; y269 = 0; y270 = 0; y271 = 0; y272 = 0; y273 = 0; y274 = 0; y275 = 0; y276 = 0; y277 = 0; y278 = 0; y279 = 0; y280 = 0; y281 = 0; y282 = 0; y283 = 0; y284 = 0; y285 = 0; y286 = 0; y287 = 0; y288 = 0; y289 = 0; y290 = 0; y291 = 0; y292 = 0; y293 = 0; y294 = 0; y295 = 0; y296 = 0; y297 = 0; y298 = 0; y299 = 0; y300 = 0; y301 = 0; y302 = 0; y303 = 0; y304 = 0; y305 = 0; y306 = 0; y307 = 0; y308 = 0; y309 = 0; y310 = 0; y311 = 0; y312 = 0; y313 = 0; y314 = 0; y315 = 0; y316 = 0; y317 = 0; y318 = 0; y319 = 0; y320 = 0; y321 = 0; y322 = 0; y323 = 0; y324 = 0; y325 = 0; y326 = 0; y327 = 0; y328 = 0; y329 = 0; y330 = 0; y331 = 0; y332 = 0; y333 = 0; y334 = 0; y335 = 0; y336 = 0; y337 = 0; y338 = 0; y339 = 0; y340 = 0; y341 = 0; y342 = 0; y343 = 0; y344 = 0; y345 = 0; y346 = 0; y347 = 0; y348 = 0; y349 = 0; y350 = 0; y351 = 0; y352 = 0; y353 = 0; y354 = 0; y355 = 0; y356 = 0; y357 = 0; y358 = 0; y359 = 0; y360 = 0; y361 = 0; y362 = 0; y363 = 0; y364 = 0; y365 = 0; y366 = 0; y367 = 0; y368 = 0; y369 = 0; y370 = 0; y371 = 0; y372 = 0; y373 = 0; y374 = 0; y375 = 0; y376 = 0; y377 = 0; y378 = 0; y379 = 0; y380 = 0; y381 = 0; y382 = 0; y383 = 0; y384 = 0; y385 = 0; y386 = 0; y387 = 0; y388 = 0; y389 = 0; y390 = 0; y391 = 0; y392 = 0; y393 = 0; y394 = 0; y395 = 0; y396 = 0; y397 = 0; y398 = 0; y399 = 0; y400 = 0; y401 = 0; y402 = 0; y403 = 0; y404 = 0; y405 = 0; y406 = 0; y407 = 0; y408 = 0; y409 = 0; y410 = 0; y411 = 0; y412 = 0; y413 = 0; y414 = 0; y415 = 0; y416 = 0; y417 = 0; y418 = 0; y419 = 0; y420 = 0; y421 = 0; y422 = 0; y423 = 0; y424 = 0; y425 = 0; y426 = 0; y427 = 0; y428 = 0; y429 = 0; y430 = 0; y431 = 0; y432 = 0; y433 = 0; y434 = 0; y435 = 0; y436 = 0; y437 = 0; y438 = 0; y439 = 0; y440 = 0; y441 = 0; y442 = 0; y443 = 0; y444 = 0; y445 = 0; y446 = 0; y447 = 0; y448 = 0; y449 = 0; y450 = 0; y451 = 0; y452 = 0; y453 = 0; y454 = 0; y455 = 0; y456 = 0; y457 = 0; y458 = 0; y459 = 0; y460 = 0; y461 = 0; y462 = 0; y463 = 0; y464 = 0; y465 = 0; y466 = 0; y467 = 0; y468 = 0; y469 = 0; y470 = 0; y471 = 0; y472 = 0; y473 = 0; y474 = 0; y475 = 0; y476 = 0; y477 = 0; y478 = 0; y479 = 0; y480 = 0; y481 = 0; y482 = 0; y483 = 0; y484 = 0; y485 = 0; y486 = 0; y487 = 0; y488 = 0; y489 = 0; y490 = 0; y491 = 0; y492 = 0; y493 = 0; y494 = 0; y495 = 0; y496 = 0; y497 = 0; y498 = 0; y499 = 0; y500 = 0; y501 = 0; y502 = 0; y503 = 0; y504 = 0; y505 = 0; y506 = 0; y507 = 0; y508 = 0; y509 = 0; y510 = 0; y511 = 0; y512 = 0; y513 = 0; y514 = 0; y515 = 0; y516 = 0; y517 = 0; y518 = 0; y519 = 0; y520 = 0; y521 = 0; y522 = 0; y523 = 0; y524 = 0; y525 = 0; y526 = 0; y527 = 0; y528 = 0; y529 = 0; y530 = 0; y531 = 0; y532 = 0; y533 = 0; y534 = 0; y535 = 0; y536 = 0; y537 = 0; y538 = 0; y539 = 0; y540 = 0; y541 = 0; y542 = 0; y543 = 0; y544 = 0; y545 = 0; y546 = 0; y547 = 0; y548 = 0; y549 = 0; y550 = 0; y551 = 0; y552 = 0; y553 = 0; y554 = 0; y555 = 0; y556 = 0; y557 = 0; y558 = 0; y559 = 0; y560 = 0; y561 = 0; y562 = 0; y563 = 0; y564 = 0; y565 = 0; y566 = 0; y567 = 0; y568 = 0; y569 = 0; y570 = 0; y571 = 0; y572 = 0; y573 = 0; y574 = 0; y575 = 0; y576 = 0; y577 = 0; y578 = 0; y579 = 0; y580 = 0; y581 = 0; y582 = 0; y583 = 0; y584 = 0; y585 = 0; y586 = 0; y587 = 0; y588 = 0; y589 = 0; y590 = 0; y591 = 0; y592 = 0; y593 = 0; y594 = 0; y595 = 0; y596 = 0; y597 = 0; y598 = 0; y599 = 0; y600 = 0; y601 = 0; y602 = 0; y603 = 0; y604 = 0; y605 = 0; y606 = 0; y607 = 0; y608 = 0; y609 = 0; y610 = 0; y611 = 0; y612 = 0; y613 = 0; y614 = 0; y615 = 0; y616 = 0; y617 = 0; y618 = 0; y619 = 0; y620 = 0; y621 = 0; y622 = 0; y623 = 0; y624 = 0; y625 = 0; y626 = 0; y627 = 0; y628 = 0;


// Full depth 1 and Toffoli depth 0
y33 = y33 + y65;  y34 = y34 + y66;  y35 = y35 + y67;  y36 = y36 + y68;  y37 = y37 + y69;  y38 = y38 + y70;  y39 = y39 + y71;  y40 = y40 + y72;  y41 = y41 + y73;  y42 = y42 + y74;  y43 = y43 + y75;  y44 = y44 + y76;  y45 = y45 + y77;  y46 = y46 + y78;  y47 = y47 + y79;  y48 = y48 + y80;  y49 = y49 + y81;  y50 = y50 + y82;  y51 = y51 + y83;  y52 = y52 + y84;  y53 = y53 + y85;  y54 = y54 + y86;  y55 = y55 + y87;  y56 = y56 + y88;  y57 = y57 + y89;  y58 = y58 + y90;  y59 = y59 + y91;  y60 = y60 + y92;  y61 = y61 + y93;  y62 = y62 + y94;  y63 = y63 + y95;  y64 = y64 + y96;

// Full depth 2 and Toffoli depth 0
y33 = y33 + y97;  y34 = y34 + y98;  y35 = y35 + y99;  y36 = y36 + y100;  y37 = y37 + y101;  y38 = y38 + y102;  y39 = y39 + y103;  y40 = y40 + y104;  y41 = y41 + y105;  y42 = y42 + y106;  y43 = y43 + y107;  y44 = y44 + y108;  y45 = y45 + y109;  y46 = y46 + y110;  y47 = y47 + y111;  y48 = y48 + y112;  y49 = y49 + y113;  y50 = y50 + y114;  y51 = y51 + y115;  y52 = y52 + y116;  y53 = y53 + y117;  y54 = y54 + y118;  y55 = y55 + y119;  y56 = y56 + y120;  y57 = y57 + y121;  y58 = y58 + y122;  y59 = y59 + y123;  y60 = y60 + y124;  y61 = y61 + y125;  y62 = y62 + y126;  y63 = y63 + y127;  y64 = y64 + y128;

// Full depth 3 and Toffoli depth 0
y484 = y484 + y38;  y505 = y505 + y46;  y526 = y526 + y54;  y546 = y546 + y62;  y482 = y482 + y39;  y503 = y503 + y47;  y524 = y524 + y55;  y544 = y544 + y63;  y193 = y193 + y37;  y450 = y450 + y45;  y242 = y242 + y53;  y322 = y322 + y61;  y491 = y491 + y40;  y494 = y494 + y48;  y515 = y515 + y56;  y535 = y535 + y64;  y490 = y490 + y34;  y512 = y512 + y42;  y532 = y532 + y50;  y553 = y553 + y58;  y304 = y304 + y36;  y451 = y451 + y44;  y243 = y243 + y52;  y323 = y323 + y60;  y555 = y555 + y35;  y500 = y500 + y43;  y522 = y522 + y51;  y542 = y542 + y59;  y403 = y403 + y33;  y452 = y452 + y41;  y244 = y244 + y49;  y324 = y324 + y57;

// Full depth 4 and Toffoli depth 0
y484 = y484 + y34;  y505 = y505 + y42;  y526 = y526 + y50;  y546 = y546 + y58;  y193 = y193 + y35;  y450 = y450 + y43;  y242 = y242 + y51;  y322 = y322 + y59;  y511 = y511 + y39;  y496 = y496 + y47;  y517 = y517 + y55;  y537 = y537 + y63;  y556 = y556 + y37;  y502 = y502 + y45;  y523 = y523 + y53;  y543 = y543 + y61;  y40 = y40 + 1;  y48 = y48 + 1;  y56 = y56 + 1;  y64 = y64 + 1;  y304 = y304 + y33;  y451 = y451 + y41;  y243 = y243 + y49;  y323 = y323 + y57;  y414 = y414 + y38;  y453 = y453 + y46;  y245 = y245 + y54;  y325 = y325 + y62;

// Full depth 5 and Toffoli depth 0
y482 = y482 + y484;  y503 = y503 + y505;  y524 = y524 + y526;  y544 = y544 + y546;  y491 = y491 + y193;  y494 = y494 + y450;  y515 = y515 + y242;  y535 = y535 + y322;  y521 = y521 + y40;  y497 = y497 + y48;  y518 = y518 + y56;  y538 = y538 + y64;  y555 = y555 + y304;  y500 = y500 + y451;  y522 = y522 + y243;  y542 = y542 + y323;  y34 = y34 + 1;  y42 = y42 + 1;  y50 = y50 + 1;  y58 = y58 + 1;  y414 = y414 + y33;  y453 = y453 + y41;  y245 = y245 + y49;  y325 = y325 + y57;

// Full depth 6 and Toffoli depth 0
y511 = y511 + y491;  y496 = y496 + y494;  y517 = y517 + y515;  y537 = y537 + y535;  y490 = y490 + y193;  y512 = y512 + y450;  y532 = y532 + y242;  y553 = y553 + y322;  y481 = y481 + y555;  y493 = y493 + y500;  y514 = y514 + y522;  y534 = y534 + y542;  y501 = y501 + y484;  y495 = y495 + y505;  y516 = y516 + y526;  y536 = y536 + y546;  y488 = y488 + y34;  y509 = y509 + y42;  y530 = y530 + y50;  y550 = y550 + y58;  y486 = y486 + y40;  y507 = y507 + y48;  y528 = y528 + y56;  y548 = y548 + y64;  y492 = y492 + y414;  y513 = y513 + y453;  y533 = y533 + y245;  y554 = y554 + y325;

// Full depth 7 and Toffoli depth 0
y556 = y556 + y511;  y502 = y502 + y496;  y523 = y523 + y517;  y543 = y543 + y537;  y481 = y481 + y491;  y493 = y493 + y494;  y514 = y514 + y515;  y534 = y534 + y535;  y492 = y492 + y193;  y513 = y513 + y450;  y533 = y533 + y242;  y554 = y554 + y322;  y359 = y359 + y490;  y476 = y476 + y512;  y268 = y268 + y532;  y349 = y349 + y553;  y401 = y401 + y34;  y194 = y194 + y42;  y273 = y273 + y50;  y353 = y353 + y58;

// Full depth 8 and Toffoli depth 0
y521 = y521 + y556;  y497 = y497 + y502;  y518 = y518 + y523;  y538 = y538 + y543;  y501 = y501 + y481;  y495 = y495 + y493;  y516 = y516 + y514;  y536 = y536 + y534;  y487 = y487 + y511;  y508 = y508 + y496;  y529 = y529 + y517;  y549 = y549 + y537;  y403 = y403 + y491;  y452 = y452 + y494;  y244 = y244 + y515;  y324 = y324 + y535;  y315 = y315 + y492;  y472 = y472 + y513;  y264 = y264 + y533;  y344 = y344 + y554;

// Full depth 9 and Toffoli depth 0
y487 = y487 + y501;  y508 = y508 + y495;  y529 = y529 + y516;  y549 = y549 + y536;  y483 = y483 + y556;  y504 = y504 + y502;  y525 = y525 + y523;  y545 = y545 + y543;  y551 = y551 + y403;  y499 = y499 + y452;  y520 = y520 + y244;  y541 = y541 + y324;  y489 = y489 + y511;  y510 = y510 + y496;  y531 = y531 + y517;  y552 = y552 + y537;

// Full depth 10 and Toffoli depth 0
y488 = y488 + y487;  y509 = y509 + y508;  y530 = y530 + y529;  y550 = y550 + y549;

// Full depth 11 and Toffoli depth 0
y483 = y483 + y488;  y504 = y504 + y509;  y525 = y525 + y530;  y545 = y545 + y550;

// Full depth 12 and Toffoli depth 0
y551 = y551 + y483;  y499 = y499 + y504;  y520 = y520 + y525;  y541 = y541 + y545;  y540 = y540 + y488;  y498 = y498 + y509;  y519 = y519 + y530;  y539 = y539 + y550;

// Full depth 13 and Toffoli depth 0
y486 = y486 + y551;  y507 = y507 + y499;  y528 = y528 + y520;  y548 = y548 + y541;  y485 = y485 + y483;  y506 = y506 + y504;  y527 = y527 + y525;  y547 = y547 + y545;

// Full depth 14 and Toffoli depth 0
y540 = y540 + y551;  y498 = y498 + y499;  y519 = y519 + y520;  y539 = y539 + y541;  y485 = y485 + y486;  y506 = y506 + y507;  y527 = y527 + y528;  y547 = y547 + y548;

// Full depth 15 and Toffoli depth 0
y489 = y489 + y551;  y510 = y510 + y499;  y531 = y531 + y520;  y552 = y552 + y541;

// Full depth 16 and Toffoli depth 1
y425= y425 + y551 *  y511;  y454= y454 + y499 *  y496;  y246= y246 + y520 *  y517;  y327= y327 + y541 *  y537;  y436= y436 + y487 *  y488;  y455= y455 + y508 *  y509;  y247= y247 + y529 *  y530;  y328= y328 + y549 *  y550;  y447= y447 + y540 *  y501;  y456= y456 + y498 *  y495;  y249= y249 + y519 *  y516;  y329= y329 + y539 *  y536;  y458= y458 + y485 *  y484;  y457= y457 + y506 *  y505;  y250= y250 + y527 *  y526;  y330= y330 + y547 *  y546;  y469= y469 + y483 *  y482;  y459= y459 + y504 *  y503;  y251= y251 + y525 *  y524;  y331= y331 + y545 *  y544;  y480= y480 + y486 *  y39;  y460= y460 + y507 *  y47;  y252= y252 + y528 *  y55;  y332= y332 + y548 *  y63;  y204= y204 + y40 *  y491;  y461= y461 + y48 *  y494;  y253= y253 + y56 *  y515;  y333= y333 + y64 *  y535;  y215= y215 + y556 *  y555;  y462= y462 + y502 *  y500;  y254= y254 + y523 *  y522;  y334= y334 + y543 *  y542;  y226= y226 + y521 *  y481;  y463= y463 + y497 *  y493;  y255= y255 + y518 *  y514;  y335= y335 + y538 *  y534;  y381 = y381 + y489;  y478 = y478 + y510;  y271 = y271 + y531;  y351 = y351 + y552;

// Full depth 17 and Toffoli depth 1
y237 = y237 + y226;  y464 = y464 + y463;  y256 = y256 + y255;  y336 = y336 + y335;  y248 = y248 + y447;  y465 = y465 + y456;  y257 = y257 + y249;  y338 = y338 + y329;  y259 = y259 + y204;  y466 = y466 + y461;  y258 = y258 + y253;  y339 = y339 + y333;  y270 = y270 + y425;  y467 = y467 + y454;  y260 = y260 + y246;  y340 = y340 + y327;  y281 = y281 + y436;  y468 = y468 + y455;  y261 = y261 + y247;  y341 = y341 + y328;  y292 = y292 + y480;  y470 = y470 + y460;  y262 = y262 + y252;  y342 = y342 + y332;  y303 = y303 + y458;  y471 = y471 + y457;  y263 = y263 + y250;  y343 = y343 + y330;  y348 = y348 + y469;  y475 = y475 + y459;  y267 = y267 + y251;  y347 = y347 + y331;

// Full depth 18 and Toffoli depth 1
y237 = y237 + y204;  y464 = y464 + y461;  y256 = y256 + y253;  y336 = y336 + y333;  y259 = y259 + y215;  y466 = y466 + y462;  y258 = y258 + y254;  y339 = y339 + y334;  y326 = y326 + y447;  y473 = y473 + y456;  y265 = y265 + y249;  y345 = y345 + y329;  y337 = y337 + y480;  y474 = y474 + y460;  y266 = y266 + y252;  y346 = y346 + y332;  y370 = y370 + y425;  y477 = y477 + y454;  y269 = y269 + y246;  y350 = y350 + y327;  y392 = y392 + y436;  y479 = y479 + y455;  y272 = y272 + y247;  y352 = y352 + y328;

// Full depth 19 and Toffoli depth 1
y248 = y248 + y237;  y465 = y465 + y464;  y257 = y257 + y256;  y338 = y338 + y336;  y270 = y270 + y259;  y467 = y467 + y466;  y260 = y260 + y258;  y340 = y340 + y339;

// Full depth 20 and Toffoli depth 1
y281 = y281 + y248;  y468 = y468 + y465;  y261 = y261 + y257;  y341 = y341 + y338;  y326 = y326 + y270;  y473 = y473 + y467;  y265 = y265 + y260;  y345 = y345 + y340;

// Full depth 21 and Toffoli depth 1
y292 = y292 + y281;  y470 = y470 + y468;  y262 = y262 + y261;  y342 = y342 + y341;  y337 = y337 + y326;  y474 = y474 + y473;  y266 = y266 + y265;  y346 = y346 + y345;  y370 = y370 + y248;  y477 = y477 + y465;  y269 = y269 + y257;  y350 = y350 + y338;  y392 = y392 + y270;  y479 = y479 + y467;  y272 = y272 + y260;  y352 = y352 + y340;

// Full depth 22 and Toffoli depth 1
y303 = y303 + y292;  y471 = y471 + y470;  y263 = y263 + y262;  y343 = y343 + y342;  y348 = y348 + y337;  y475 = y475 + y474;  y267 = y267 + y266;  y347 = y347 + y346;  y381 = y381 + y370;  y478 = y478 + y477;  y271 = y271 + y269;  y351 = y351 + y350;  y401 = y401 + y392;  y194 = y194 + y479;  y273 = y273 + y272;  y353 = y353 + y352;

// Full depth 23 and Toffoli depth 1
y315 = y315 + y303;  y472 = y472 + y471;  y264 = y264 + y263;  y344 = y344 + y343;  y359 = y359 + y348;  y476 = y476 + y475;  y268 = y268 + y267;  y349 = y349 + y347;  y405 = y405 + y381;  y197 = y197 + y478;  y276 = y276 + y271;  y356 = y356 + y351;  y408 = y408 + y401;  y200 = y200 + y194;  y279 = y279 + y273;  y360 = y360 + y353;

// Full depth 24 and Toffoli depth 1
y402 = y402 + y315;  y195 = y195 + y472;  y274 = y274 + y264;  y354 = y354 + y344;  y408 = y408 + y381;  y200 = y200 + y478;  y279 = y279 + y271;  y360 = y360 + y351;  y412 = y412 + y401;  y205 = y205 + y194;  y284 = y284 + y273;  y364 = y364 + y353;

// Full depth 25 and Toffoli depth 1
y402 = y402 + y359;  y195 = y195 + y476;  y274 = y274 + y268;  y354 = y354 + y349;

// Full depth 26 and Toffoli depth 2
y404= y404 + y359 *  y401;  y196= y196 + y476 *  y194;  y275= y275 + y268 *  y273;  y355= y355 + y349 *  y353;  y407 = y407 + y315;  y199 = y199 + y472;  y278 = y278 + y264;  y358 = y358 + y344;  y411 = y411 + y381;  y203 = y203 + y478;  y283 = y283 + y271;  y363 = y363 + y351;  y419 = y419 + y402;  y211 = y211 + y195;  y290 = y290 + y274;  y371 = y371 + y354;

// Full depth 27 and Toffoli depth 2
y405 = y405 + y404;  y197 = y197 + y196;  y276 = y276 + y275;  y356 = y356 + y355;  y409 = y409 + y315;  y201 = y201 + y472;  y280 = y280 + y264;  y361 = y361 + y344;

// Full depth 28 and Toffoli depth 3
y406= y406 + y402 *  y405;  y198= y198 + y195 *  y197;  y277= y277 + y274 *  y276;  y357= y357 + y354 *  y356;  y409 = y409 + y404;  y201 = y201 + y196;  y280 = y280 + y275;  y361 = y361 + y355;

// Full depth 29 and Toffoli depth 4
y407 = y407 + y406;  y199 = y199 + y198;  y278 = y278 + y277;  y358 = y358 + y357;  y410=y410 + y408 * y409;  y202=y202 + y200 * y201;  y282=y282 + y279 * y280;  y362=y362 + y360 * y361;  y413 = y413 + y405;  y206 = y206 + y197;  y285 = y285 + y276;  y365 = y365 + y356;

// Full depth 30 and Toffoli depth 4
y411 = y411 + y410;  y203 = y203 + y202;  y283 = y283 + y282;  y363 = y363 + y362;  y417 = y417 + y405;  y209 = y209 + y197;  y288 = y288 + y276;  y368 = y368 + y356;  y421 = y421 + y407;  y213 = y213 + y199;  y293 = y293 + y278;  y373 = y373 + y358;

// Full depth 31 and Toffoli depth 4
y412 = y412 + y411;  y205 = y205 + y203;  y284 = y284 + y283;  y364 = y364 + y363;  y424 = y424 + y407;  y217 = y217 + y199;  y296 = y296 + y278;  y376 = y376 + y358;

// Full depth 32 and Toffoli depth 4
y413 = y413 + y411;  y206 = y206 + y203;  y285 = y285 + y283;  y365 = y365 + y363;  y416 = y416 + y412;  y208 = y208 + y205;  y287 = y287 + y284;  y367 = y367 + y364;

// Full depth 33 and Toffoli depth 5
y415= y415 + y381 *  y413;  y207= y207 + y478 *  y206;  y286= y286 + y271 *  y285;  y366= y366 + y351 *  y365;  y420 = y420 + y411;  y212 = y212 + y203;  y291 = y291 + y283;  y372 = y372 + y363;

// Full depth 34 and Toffoli depth 5
y416 = y416 + y415;  y208 = y208 + y207;  y287 = y287 + y286;  y367 = y367 + y366;  y421 = y421 + y411;  y213 = y213 + y203;  y293 = y293 + y283;  y373 = y373 + y363;

// Full depth 35 and Toffoli depth 5
y417 = y417 + y415;  y209 = y209 + y207;  y288 = y288 + y286;  y368 = y368 + y366;  y420 = y420 + y416;  y212 = y212 + y208;  y291 = y291 + y287;  y372 = y372 + y367;  y423 = y423 + y421;  y216 = y216 + y213;  y295 = y295 + y293;  y375 = y375 + y373;

// Full depth 36 and Toffoli depth 6
y418= y418 + y407 *  y417;  y210= y210 + y199 *  y209;  y289= y289 + y278 *  y288;  y369= y369 + y358 *  y368;  y422 = y422 + y416;  y214 = y214 + y208;  y294 = y294 + y287;  y374 = y374 + y367;

// Full depth 37 and Toffoli depth 6
y419 = y419 + y418;  y211 = y211 + y210;  y290 = y290 + y289;  y371 = y371 + y369;

// Full depth 38 and Toffoli depth 6
y422 = y422 + y419;  y214 = y214 + y211;  y294 = y294 + y290;  y374 = y374 + y371;

// Full depth 39 and Toffoli depth 6
y423 = y423 + y422;  y216 = y216 + y214;  y295 = y295 + y294;  y375 = y375 + y374;  y424 = y424 + y419;  y217 = y217 + y211;  y296 = y296 + y290;  y376 = y376 + y371;

// Full depth 40 and Toffoli depth 7
y565= y565 + y411 *  y511;  y585= y585 + y203 *  y496;  y605= y605 + y283 *  y517;  y625= y625 + y363 *  y537;  y564= y564 + y420 *  y487;  y584= y584 + y212 *  y508;  y604= y604 + y291 *  y529;  y624= y624 + y372 *  y549;  y563= y563 + y416 *  y501;  y583= y583 + y208 *  y495;  y603= y603 + y287 *  y516;  y622= y622 + y367 *  y536;  y562= y562 + y423 *  y482;  y582= y582 + y216 *  y503;  y602= y602 + y295 *  y524;  y621= y621 + y375 *  y544;  y561= y561 + y422 *  y484;  y581= y581 + y214 *  y505;  y600= y600 + y294 *  y526;  y620= y620 + y374 *  y546;  y560= y560 + y421 *  y39;  y580= y580 + y213 *  y47;  y599= y599 + y293 *  y55;  y619= y619 + y373 *  y63;  y559= y559 + y407 *  y491;  y578= y578 + y199 *  y494;  y598= y598 + y278 *  y515;  y618= y618 + y358 *  y535;  y558= y558 + y424 *  y555;  y577= y577 + y217 *  y500;  y597= y597 + y296 *  y522;  y617= y617 + y376 *  y542;  y628= y628 + y419 *  y481;  y576= y576 + y211 *  y493;  y596= y596 + y290 *  y514;  y616= y616 + y371 *  y534;  y627= y627 + y411 *  y551;  y575= y575 + y203 *  y499;  y595= y595 + y283 *  y520;  y615= y615 + y363 *  y541;  y626= y626 + y420 *  y488;  y574= y574 + y212 *  y509;  y594= y594 + y291 *  y530;  y614= y614 + y372 *  y550;  y623= y623 + y416 *  y540;  y573= y573 + y208 *  y498;  y593= y593 + y287 *  y519;  y613= y613 + y367 *  y539;  y612= y612 + y423 *  y483;  y572= y572 + y216 *  y504;  y592= y592 + y295 *  y525;  y611= y611 + y375 *  y545;  y601= y601 + y422 *  y485;  y571= y571 + y214 *  y506;  y591= y591 + y294 *  y527;  y610= y610 + y374 *  y547;  y590= y590 + y421 *  y486;  y570= y570 + y213 *  y507;  y589= y589 + y293 *  y528;  y609= y609 + y373 *  y548;  y579= y579 + y407 *  y40;  y569= y569 + y199 *  y48;  y588= y588 + y278 *  y56;  y608= y608 + y358 *  y64;  y568= y568 + y424 *  y556;  y567= y567 + y217 *  y502;  y587= y587 + y296 *  y523;  y607= y607 + y376 *  y543;  y557= y557 + y419 *  y521;  y566= y566 + y211 *  y497;  y586= y586 + y290 *  y518;  y606= y606 + y371 *  y538;

// Full depth 41 and Toffoli depth 7
y426 = y426 + y564;  y218 = y218 + y584;  y297 = y297 + y604;  y377 = y377 + y624;  y427 = y427 + y563;  y219 = y219 + y583;  y298 = y298 + y603;  y378 = y378 + y622;  y428 = y428 + y560;  y220 = y220 + y580;  y299 = y299 + y599;  y379 = y379 + y619;  y429 = y429 + y562;  y221 = y221 + y582;  y300 = y300 + y602;  y380 = y380 + y621;  y430 = y430 + y558;  y222 = y222 + y577;  y301 = y301 + y597;  y382 = y382 + y617;  y431 = y431 + y628;  y223 = y223 + y576;  y302 = y302 + y596;  y383 = y383 + y616;  y432 = y432 + y626;  y224 = y224 + y574;  y305 = y305 + y594;  y384 = y384 + y614;  y433 = y433 + y623;  y225 = y225 + y573;  y306 = y306 + y593;  y385 = y385 + y613;  y434 = y434 + y601;  y227 = y227 + y571;  y307 = y307 + y591;  y386 = y386 + y610;  y435 = y435 + y590;  y228 = y228 + y570;  y308 = y308 + y589;  y387 = y387 + y609;  y437 = y437 + y568;  y229 = y229 + y567;  y309 = y309 + y587;  y388 = y388 + y607;  y438 = y438 + y557;  y230 = y230 + y566;  y310 = y310 + y586;  y389 = y389 + y606;

// Full depth 42 and Toffoli depth 7
y426 = y426 + y565;  y218 = y218 + y585;  y297 = y297 + y605;  y377 = y377 + y625;  y427 = y427 + y564;  y219 = y219 + y584;  y298 = y298 + y604;  y378 = y378 + y624;  y428 = y428 + y561;  y220 = y220 + y581;  y299 = y299 + y600;  y379 = y379 + y620;  y429 = y429 + y560;  y221 = y221 + y580;  y300 = y300 + y599;  y380 = y380 + y619;  y430 = y430 + y559;  y222 = y222 + y578;  y301 = y301 + y598;  y382 = y382 + y618;  y431 = y431 + y558;  y223 = y223 + y577;  y302 = y302 + y597;  y383 = y383 + y617;  y432 = y432 + y627;  y224 = y224 + y575;  y305 = y305 + y595;  y384 = y384 + y615;  y433 = y433 + y626;  y225 = y225 + y574;  y306 = y306 + y594;  y385 = y385 + y614;  y434 = y434 + y590;  y227 = y227 + y570;  y307 = y307 + y589;  y386 = y386 + y609;  y435 = y435 + y612;  y228 = y228 + y572;  y308 = y308 + y592;  y387 = y387 + y611;  y437 = y437 + y579;  y229 = y229 + y569;  y309 = y309 + y588;  y388 = y388 + y608;  y438 = y438 + y568;  y230 = y230 + y567;  y310 = y310 + y587;  y389 = y389 + y607;

// Full depth 43 and Toffoli depth 7
y187 = y187 + y429;  y164 = y164 + y221;  y173 = y173 + y300;  y181 = y181 + y380;  y439 = y439 + y428;  y231 = y231 + y220;  y311 = y311 + y299;  y390 = y390 + y379;  y440 = y440 + y437;  y232 = y232 + y229;  y312 = y312 + y309;  y391 = y391 + y388;  y441 = y441 + y434;  y233 = y233 + y227;  y313 = y313 + y307;  y393 = y393 + y386;  y442 = y442 + y426;  y234 = y234 + y218;  y314 = y314 + y297;  y394 = y394 + y377;  y443 = y443 + y438;  y235 = y235 + y230;  y316 = y316 + y310;  y395 = y395 + y389;  y444 = y444 + y432;  y236 = y236 + y224;  y317 = y317 + y305;  y396 = y396 + y384;  y446 = y446 + y427;  y239 = y239 + y219;  y319 = y319 + y298;  y398 = y398 + y378;  y448 = y448 + y433;  y240 = y240 + y225;  y320 = y320 + y306;  y399 = y399 + y385;

// Full depth 44 and Toffoli depth 7
y187 = y187 + y427;  y164 = y164 + y219;  y173 = y173 + y298;  y181 = y181 + y378;  y439 = y439 + y430;  y231 = y231 + y222;  y311 = y311 + y301;  y390 = y390 + y382;  y440 = y440 + 1;  y232 = y232 + 1;  y312 = y312 + 1;  y391 = y391 + 1;  y442 = y442 + y428;  y234 = y234 + y220;  y314 = y314 + y299;  y394 = y394 + y379;  y443 = y443 + y433;  y235 = y235 + y225;  y316 = y316 + y306;  y395 = y395 + y385;  y183 = y183 + y434;  y162 = y162 + y227;  y170 = y170 + y307;  y179 = y179 + y386;  y446 = y446 + y431;  y239 = y239 + y223;  y319 = y319 + y302;  y398 = y398 + y383;  y448 = y448 + y435;  y240 = y240 + y228;  y320 = y320 + y308;  y399 = y399 + y387;

// Full depth 45 and Toffoli depth 7
y441 = y441 + y440;  y233 = y233 + y232;  y313 = y313 + y312;  y393 = y393 + y391;  y186 = y186 + y442;  y163 = y163 + y234;  y171 = y171 + y314;  y180 = y180 + y394;  y188 = y188 + y443;  y165 = y165 + y235;  y174 = y174 + y316;  y182 = y182 + y395;  y444 = y444 + y439;  y236 = y236 + y231;  y317 = y317 + y311;  y396 = y396 + y390;  y445 = y445 + y187;  y238 = y238 + y164;  y318 = y318 + y173;  y397 = y397 + y181;  y161 = y161 + y446;  y191 = y191 + y239;  y168 = y168 + y319;  y177 = y177 + y398;  y172 = y172 + y448;  y192 = y192 + y240;  y169 = y169 + y320;  y178 = y178 + y399;

// Full depth 46 and Toffoli depth 7
y186 = y186 + y441;  y163 = y163 + y233;  y171 = y171 + y313;  y180 = y180 + y393;  y188 = y188 + y439;  y165 = y165 + y231;  y174 = y174 + y311;  y182 = y182 + y390;  y190 = y190 + y443;  y167 = y167 + y235;  y176 = y176 + y316;  y185 = y185 + y395;  y183 = y183 + y444;  y162 = y162 + y236;  y170 = y170 + y317;  y179 = y179 + y396;  y161 = y161 + 1;  y191 = y191 + 1;  y168 = y168 + 1;  y177 = y177 + 1;

// Full depth 47 and Toffoli depth 7
y190 = y190 + y186;  y167 = y167 + y163;  y176 = y176 + y171;  y185 = y185 + y180;  y445 = y445 + y441;  y238 = y238 + y233;  y318 = y318 + y313;  y397 = y397 + y393;  y189 = y189 + y439;  y166 = y166 + y231;  y175 = y175 + y311;  y184 = y184 + y390;  y449 = y449 + y183;  y241 = y241 + y162;  y321 = y321 + y170;  y400 = y400 + y179;

// Full depth 48 and Toffoli depth 7
y189 = y189 + y445;  y166 = y166 + y238;  y175 = y175 + y318;  y184 = y184 + y397;

// Full depth 49 and Toffoli depth 7
y449 = y449 + y445;  y241 = y241 + y238;  y321 = y321 + y318;  y400 = y400 + y397;

// Full depth 50 and Toffoli depth 7
y172 = y172 + y449;  y192 = y192 + y241;  y169 = y169 + y321;  y178 = y178 + y400;

// Full depth 51 and Toffoli depth 7
y129 = y129 + y161;  y140 = y140 + y172;  y151 = y151 + y183;  y154 = y154 + y186;  y155 = y155 + y187;  y156 = y156 + y188;  y157 = y157 + y189;  y158 = y158 + y190;  y159 = y159 + y191;  y160 = y160 + y192;  y130 = y130 + y162;  y131 = y131 + y163;  y132 = y132 + y164;  y133 = y133 + y165;  y134 = y134 + y166;  y135 = y135 + y167;  y136 = y136 + y168;  y137 = y137 + y169;  y138 = y138 + y170;  y139 = y139 + y171;  y141 = y141 + y173;  y142 = y142 + y174;  y143 = y143 + y175;  y144 = y144 + y176;  y145 = y145 + y177;  y146 = y146 + y178;  y147 = y147 + y179;  y148 = y148 + y180;  y149 = y149 + y181;  y150 = y150 + y182;  y152 = y152 + y184;  y153 = y153 + y185;

// Full depth 52 and Toffoli depth 7
y129 = y129 + y183;  y140 = y140 + y186;  y151 = y151 + y187;  y154 = y154 + y188;  y155 = y155 + y189;  y156 = y156 + y190;  y157 = y157 + y191;  y158 = y158 + y192;  y159 = y159 + y162;  y160 = y160 + y163;  y130 = y130 + y164;  y131 = y131 + y165;  y132 = y132 + y166;  y133 = y133 + y167;  y134 = y134 + y168;  y135 = y135 + y169;  y136 = y136 + y170;  y137 = y137 + y171;  y138 = y138 + y173;  y139 = y139 + y174;  y141 = y141 + y175;  y142 = y142 + y176;  y143 = y143 + y177;  y144 = y144 + y178;  y145 = y145 + y179;  y146 = y146 + y180;  y147 = y147 + y181;  y148 = y148 + y182;  y149 = y149 + y184;  y150 = y150 + y185;  y152 = y152 + y161;  y153 = y153 + y172;

// Full depth 53 and Toffoli depth 7
y129 = y129 + y162;  y140 = y140 + y163;  y151 = y151 + y164;  y154 = y154 + y165;  y155 = y155 + y166;  y156 = y156 + y167;  y157 = y157 + y168;  y158 = y158 + y169;  y159 = y159 + y170;  y160 = y160 + y171;  y130 = y130 + y173;  y131 = y131 + y174;  y132 = y132 + y175;  y133 = y133 + y176;  y134 = y134 + y177;  y135 = y135 + y178;  y136 = y136 + y179;  y137 = y137 + y180;  y138 = y138 + y181;  y139 = y139 + y182;  y141 = y141 + y184;  y142 = y142 + y185;  y143 = y143 + y161;  y144 = y144 + y172;  y145 = y145 + y183;  y146 = y146 + y186;  y147 = y147 + y187;  y148 = y148 + y188;  y149 = y149 + y189;  y150 = y150 + y190;  y152 = y152 + y191;  y153 = y153 + y192;

// Full depth 54 and Toffoli depth 7
y129 = y129 + y166;  y140 = y140 + y167;  y151 = y151 + y168;  y154 = y154 + y169;  y155 = y155 + y170;  y156 = y156 + y171;  y157 = y157 + y173;  y158 = y158 + y174;  y159 = y159 + y175;  y160 = y160 + y176;  y130 = y130 + y177;  y131 = y131 + y178;  y132 = y132 + y179;  y133 = y133 + y180;  y134 = y134 + y181;  y135 = y135 + y182;  y136 = y136 + y184;  y137 = y137 + y185;  y138 = y138 + y161;  y139 = y139 + y172;  y141 = y141 + y183;  y142 = y142 + y186;  y143 = y143 + y187;  y144 = y144 + y188;  y145 = y145 + y189;  y146 = y146 + y190;  y147 = y147 + y191;  y148 = y148 + y192;  y149 = y149 + y162;  y150 = y150 + y163;  y152 = y152 + y164;  y153 = y153 + y165;

// Full depth 55 and Toffoli depth 7
y129 = y129 + y170;  y140 = y140 + y171;  y151 = y151 + y173;  y154 = y154 + y174;  y155 = y155 + y175;  y156 = y156 + y176;  y157 = y157 + y177;  y158 = y158 + y178;  y159 = y159 + y179;  y160 = y160 + y180;  y130 = y130 + y181;  y131 = y131 + y182;  y132 = y132 + y184;  y133 = y133 + y185;  y134 = y134 + y161;  y135 = y135 + y172;  y136 = y136 + y183;  y137 = y137 + y186;  y138 = y138 + y187;  y139 = y139 + y188;  y141 = y141 + y189;  y142 = y142 + y190;  y143 = y143 + y191;  y144 = y144 + y192;  y145 = y145 + y162;  y146 = y146 + y163;  y147 = y147 + y164;  y148 = y148 + y165;  y149 = y149 + y166;  y150 = y150 + y167;  y152 = y152 + y168;  y153 = y153 + y169;

// Full depth 56 and Toffoli depth 7
y129 = y129 + y177;  y140 = y140 + y178;  y151 = y151 + y179;  y154 = y154 + y180;  y155 = y155 + y181;  y156 = y156 + y182;  y157 = y157 + y184;  y158 = y158 + y185;  y159 = y159 + y161;  y160 = y160 + y172;  y130 = y130 + y183;  y131 = y131 + y186;  y132 = y132 + y187;  y133 = y133 + y188;  y134 = y134 + y189;  y135 = y135 + y190;  y136 = y136 + y191;  y137 = y137 + y192;  y138 = y138 + y162;  y139 = y139 + y163;  y141 = y141 + y164;  y142 = y142 + y165;  y143 = y143 + y166;  y144 = y144 + y167;  y145 = y145 + y168;  y146 = y146 + y169;  y147 = y147 + y170;  y148 = y148 + y171;  y149 = y149 + y173;  y150 = y150 + y174;  y152 = y152 + y175;  y153 = y153 + y176;

// Full depth 57 and Toffoli depth 7
y129 = y129 + y182;  y140 = y140 + y184;  y151 = y151 + y185;  y154 = y154 + y161;  y155 = y155 + y172;  y156 = y156 + y183;  y157 = y157 + y186;  y158 = y158 + y187;  y159 = y159 + y188;  y160 = y160 + y189;  y130 = y130 + y190;  y131 = y131 + y191;  y132 = y132 + y192;  y133 = y133 + y162;  y134 = y134 + y163;  y135 = y135 + y164;  y136 = y136 + y165;  y137 = y137 + y166;  y138 = y138 + y167;  y139 = y139 + y168;  y141 = y141 + y169;  y142 = y142 + y170;  y143 = y143 + y171;  y144 = y144 + y173;  y145 = y145 + y174;  y146 = y146 + y175;  y147 = y147 + y176;  y148 = y148 + y177;  y149 = y149 + y178;  y150 = y150 + y179;  y152 = y152 + y180;  y153 = y153 + y181;

// Full depth 58 and Toffoli depth 7
y1 = y1 + y129;  y2 = y2 + y140;  y3 = y3 + y151;  y4 = y4 + y154;  y5 = y5 + y155;  y6 = y6 + y156;  y7 = y7 + y157;  y8 = y8 + y158;  y9 = y9 + y159;  y10 = y10 + y160;  y11 = y11 + y130;  y12 = y12 + y131;  y13 = y13 + y132;  y14 = y14 + y133;  y15 = y15 + y134;  y16 = y16 + y135;  y17 = y17 + y136;  y18 = y18 + y137;  y19 = y19 + y138;  y20 = y20 + y139;  y21 = y21 + y141;  y22 = y22 + y142;  y23 = y23 + y143;  y24 = y24 + y144;  y25 = y25 + y145;  y26 = y26 + y146;  y27 = y27 + y147;  y28 = y28 + y148;  y29 = y29 + y149;  y30 = y30 + y150;  y31 = y31 + y152;  y32 = y32 + y153;

// Full depth 59 and Toffoli depth 7
y153 = y153 + y181;  y152 = y152 + y180;  y150 = y150 + y179;  y149 = y149 + y178;  y148 = y148 + y177;  y147 = y147 + y176;  y146 = y146 + y175;  y145 = y145 + y174;  y144 = y144 + y173;  y143 = y143 + y171;  y142 = y142 + y170;  y141 = y141 + y169;  y139 = y139 + y168;  y138 = y138 + y167;  y137 = y137 + y166;  y136 = y136 + y165;  y135 = y135 + y164;  y134 = y134 + y163;  y133 = y133 + y162;  y132 = y132 + y192;  y131 = y131 + y191;  y130 = y130 + y190;  y160 = y160 + y189;  y159 = y159 + y188;  y158 = y158 + y187;  y157 = y157 + y186;  y156 = y156 + y183;  y155 = y155 + y172;  y154 = y154 + y161;  y151 = y151 + y185;  y140 = y140 + y184;  y129 = y129 + y182;

// Full depth 60 and Toffoli depth 7
y153 = y153 + y176;  y152 = y152 + y175;  y150 = y150 + y174;  y149 = y149 + y173;  y148 = y148 + y171;  y147 = y147 + y170;  y146 = y146 + y169;  y145 = y145 + y168;  y144 = y144 + y167;  y143 = y143 + y166;  y142 = y142 + y165;  y141 = y141 + y164;  y139 = y139 + y163;  y138 = y138 + y162;  y137 = y137 + y192;  y136 = y136 + y191;  y135 = y135 + y190;  y134 = y134 + y189;  y133 = y133 + y188;  y132 = y132 + y187;  y131 = y131 + y186;  y130 = y130 + y183;  y160 = y160 + y172;  y159 = y159 + y161;  y158 = y158 + y185;  y157 = y157 + y184;  y156 = y156 + y182;  y155 = y155 + y181;  y154 = y154 + y180;  y151 = y151 + y179;  y140 = y140 + y178;  y129 = y129 + y177;

// Full depth 61 and Toffoli depth 7
y153 = y153 + y169;  y152 = y152 + y168;  y150 = y150 + y167;  y149 = y149 + y166;  y148 = y148 + y165;  y147 = y147 + y164;  y146 = y146 + y163;  y145 = y145 + y162;  y144 = y144 + y192;  y143 = y143 + y191;  y142 = y142 + y190;  y141 = y141 + y189;  y139 = y139 + y188;  y138 = y138 + y187;  y137 = y137 + y186;  y136 = y136 + y183;  y135 = y135 + y172;  y134 = y134 + y161;  y133 = y133 + y185;  y132 = y132 + y184;  y131 = y131 + y182;  y130 = y130 + y181;  y160 = y160 + y180;  y159 = y159 + y179;  y158 = y158 + y178;  y157 = y157 + y177;  y156 = y156 + y176;  y155 = y155 + y175;  y154 = y154 + y174;  y151 = y151 + y173;  y140 = y140 + y171;  y129 = y129 + y170;

// Full depth 62 and Toffoli depth 7
y153 = y153 + y165;  y152 = y152 + y164;  y150 = y150 + y163;  y149 = y149 + y162;  y148 = y148 + y192;  y147 = y147 + y191;  y146 = y146 + y190;  y145 = y145 + y189;  y144 = y144 + y188;  y143 = y143 + y187;  y142 = y142 + y186;  y141 = y141 + y183;  y139 = y139 + y172;  y138 = y138 + y161;  y137 = y137 + y185;  y136 = y136 + y184;  y135 = y135 + y182;  y134 = y134 + y181;  y133 = y133 + y180;  y132 = y132 + y179;  y131 = y131 + y178;  y130 = y130 + y177;  y160 = y160 + y176;  y159 = y159 + y175;  y158 = y158 + y174;  y157 = y157 + y173;  y156 = y156 + y171;  y155 = y155 + y170;  y154 = y154 + y169;  y151 = y151 + y168;  y140 = y140 + y167;  y129 = y129 + y166;

// Full depth 63 and Toffoli depth 7
y153 = y153 + y192;  y152 = y152 + y191;  y150 = y150 + y190;  y149 = y149 + y189;  y148 = y148 + y188;  y147 = y147 + y187;  y146 = y146 + y186;  y145 = y145 + y183;  y144 = y144 + y172;  y143 = y143 + y161;  y142 = y142 + y185;  y141 = y141 + y184;  y139 = y139 + y182;  y138 = y138 + y181;  y137 = y137 + y180;  y136 = y136 + y179;  y135 = y135 + y178;  y134 = y134 + y177;  y133 = y133 + y176;  y132 = y132 + y175;  y131 = y131 + y174;  y130 = y130 + y173;  y160 = y160 + y171;  y159 = y159 + y170;  y158 = y158 + y169;  y157 = y157 + y168;  y156 = y156 + y167;  y155 = y155 + y166;  y154 = y154 + y165;  y151 = y151 + y164;  y140 = y140 + y163;  y129 = y129 + y162;

// Full depth 64 and Toffoli depth 7
y153 = y153 + y172;  y152 = y152 + y161;  y150 = y150 + y185;  y149 = y149 + y184;  y148 = y148 + y182;  y147 = y147 + y181;  y146 = y146 + y180;  y145 = y145 + y179;  y144 = y144 + y178;  y143 = y143 + y177;  y142 = y142 + y176;  y141 = y141 + y175;  y139 = y139 + y174;  y138 = y138 + y173;  y137 = y137 + y171;  y136 = y136 + y170;  y135 = y135 + y169;  y134 = y134 + y168;  y133 = y133 + y167;  y132 = y132 + y166;  y131 = y131 + y165;  y130 = y130 + y164;  y160 = y160 + y163;  y159 = y159 + y162;  y158 = y158 + y192;  y157 = y157 + y191;  y156 = y156 + y190;  y155 = y155 + y189;  y154 = y154 + y188;  y151 = y151 + y187;  y140 = y140 + y186;  y129 = y129 + y183;

// Full depth 65 and Toffoli depth 7
y153 = y153 + y185;  y152 = y152 + y184;  y150 = y150 + y182;  y149 = y149 + y181;  y148 = y148 + y180;  y147 = y147 + y179;  y146 = y146 + y178;  y145 = y145 + y177;  y144 = y144 + y176;  y143 = y143 + y175;  y142 = y142 + y174;  y141 = y141 + y173;  y139 = y139 + y171;  y138 = y138 + y170;  y137 = y137 + y169;  y136 = y136 + y168;  y135 = y135 + y167;  y134 = y134 + y166;  y133 = y133 + y165;  y132 = y132 + y164;  y131 = y131 + y163;  y130 = y130 + y162;  y160 = y160 + y192;  y159 = y159 + y191;  y158 = y158 + y190;  y157 = y157 + y189;  y156 = y156 + y188;  y155 = y155 + y187;  y154 = y154 + y186;  y151 = y151 + y183;  y140 = y140 + y172;  y129 = y129 + y161;

// Full depth 66 and Toffoli depth 7
y178 = y178 + y400;  y169 = y169 + y321;  y192 = y192 + y241;  y172 = y172 + y449;

// Full depth 67 and Toffoli depth 7
y400 = y400 + y397;  y321 = y321 + y318;  y241 = y241 + y238;  y449 = y449 + y445;

// Full depth 68 and Toffoli depth 7
y184 = y184 + y397;  y175 = y175 + y318;  y166 = y166 + y238;  y189 = y189 + y445;

// Full depth 69 and Toffoli depth 7
y400 = y400 + y179;  y321 = y321 + y170;  y241 = y241 + y162;  y449 = y449 + y183;  y184 = y184 + y390;  y175 = y175 + y311;  y166 = y166 + y231;  y189 = y189 + y439;  y397 = y397 + y393;  y318 = y318 + y313;  y238 = y238 + y233;  y445 = y445 + y441;  y185 = y185 + y180;  y176 = y176 + y171;  y167 = y167 + y163;  y190 = y190 + y186;

// Full depth 70 and Toffoli depth 7
y177 = y177 + 1;  y168 = y168 + 1;  y191 = y191 + 1;  y161 = y161 + 1;  y179 = y179 + y396;  y170 = y170 + y317;  y162 = y162 + y236;  y183 = y183 + y444;  y185 = y185 + y395;  y176 = y176 + y316;  y167 = y167 + y235;  y190 = y190 + y443;  y182 = y182 + y390;  y174 = y174 + y311;  y165 = y165 + y231;  y188 = y188 + y439;  y180 = y180 + y393;  y171 = y171 + y313;  y163 = y163 + y233;  y186 = y186 + y441;

// Full depth 71 and Toffoli depth 7
y178 = y178 + y399;  y169 = y169 + y320;  y192 = y192 + y240;  y172 = y172 + y448;  y177 = y177 + y398;  y168 = y168 + y319;  y191 = y191 + y239;  y161 = y161 + y446;  y397 = y397 + y181;  y318 = y318 + y173;  y238 = y238 + y164;  y445 = y445 + y187;  y396 = y396 + y390;  y317 = y317 + y311;  y236 = y236 + y231;  y444 = y444 + y439;  y182 = y182 + y395;  y174 = y174 + y316;  y165 = y165 + y235;  y188 = y188 + y443;  y180 = y180 + y394;  y171 = y171 + y314;  y163 = y163 + y234;  y186 = y186 + y442;  y393 = y393 + y391;  y313 = y313 + y312;  y233 = y233 + y232;  y441 = y441 + y440;

// Full depth 72 and Toffoli depth 7
y399 = y399 + y387;  y320 = y320 + y308;  y240 = y240 + y228;  y448 = y448 + y435;  y398 = y398 + y383;  y319 = y319 + y302;  y239 = y239 + y223;  y446 = y446 + y431;  y179 = y179 + y386;  y170 = y170 + y307;  y162 = y162 + y227;  y183 = y183 + y434;  y395 = y395 + y385;  y316 = y316 + y306;  y235 = y235 + y225;  y443 = y443 + y433;  y394 = y394 + y379;  y314 = y314 + y299;  y234 = y234 + y220;  y442 = y442 + y428;  y391 = y391 + 1;  y312 = y312 + 1;  y232 = y232 + 1;  y440 = y440 + 1;  y390 = y390 + y382;  y311 = y311 + y301;  y231 = y231 + y222;  y439 = y439 + y430;  y181 = y181 + y378;  y173 = y173 + y298;  y164 = y164 + y219;  y187 = y187 + y427;

// Full depth 73 and Toffoli depth 7
y399 = y399 + y385;  y320 = y320 + y306;  y240 = y240 + y225;  y448 = y448 + y433;  y398 = y398 + y378;  y319 = y319 + y298;  y239 = y239 + y219;  y446 = y446 + y427;  y396 = y396 + y384;  y317 = y317 + y305;  y236 = y236 + y224;  y444 = y444 + y432;  y395 = y395 + y389;  y316 = y316 + y310;  y235 = y235 + y230;  y443 = y443 + y438;  y394 = y394 + y377;  y314 = y314 + y297;  y234 = y234 + y218;  y442 = y442 + y426;  y393 = y393 + y386;  y313 = y313 + y307;  y233 = y233 + y227;  y441 = y441 + y434;  y391 = y391 + y388;  y312 = y312 + y309;  y232 = y232 + y229;  y440 = y440 + y437;  y390 = y390 + y379;  y311 = y311 + y299;  y231 = y231 + y220;  y439 = y439 + y428;  y181 = y181 + y380;  y173 = y173 + y300;  y164 = y164 + y221;  y187 = y187 + y429;

// Full depth 74 and Toffoli depth 7
y389 = y389 + y607;  y310 = y310 + y587;  y230 = y230 + y567;  y438 = y438 + y568;  y388 = y388 + y608;  y309 = y309 + y588;  y229 = y229 + y569;  y437 = y437 + y579;  y387 = y387 + y611;  y308 = y308 + y592;  y228 = y228 + y572;  y435 = y435 + y612;  y386 = y386 + y609;  y307 = y307 + y589;  y227 = y227 + y570;  y434 = y434 + y590;  y385 = y385 + y614;  y306 = y306 + y594;  y225 = y225 + y574;  y433 = y433 + y626;  y384 = y384 + y615;  y305 = y305 + y595;  y224 = y224 + y575;  y432 = y432 + y627;  y383 = y383 + y617;  y302 = y302 + y597;  y223 = y223 + y577;  y431 = y431 + y558;  y382 = y382 + y618;  y301 = y301 + y598;  y222 = y222 + y578;  y430 = y430 + y559;  y380 = y380 + y619;  y300 = y300 + y599;  y221 = y221 + y580;  y429 = y429 + y560;  y379 = y379 + y620;  y299 = y299 + y600;  y220 = y220 + y581;  y428 = y428 + y561;  y378 = y378 + y624;  y298 = y298 + y604;  y219 = y219 + y584;  y427 = y427 + y564;  y377 = y377 + y625;  y297 = y297 + y605;  y218 = y218 + y585;  y426 = y426 + y565;

// Full depth 75 and Toffoli depth 7
y389 = y389 + y606;  y310 = y310 + y586;  y230 = y230 + y566;  y438 = y438 + y557;  y388 = y388 + y607;  y309 = y309 + y587;  y229 = y229 + y567;  y437 = y437 + y568;  y387 = y387 + y609;  y308 = y308 + y589;  y228 = y228 + y570;  y435 = y435 + y590;  y386 = y386 + y610;  y307 = y307 + y591;  y227 = y227 + y571;  y434 = y434 + y601;  y385 = y385 + y613;  y306 = y306 + y593;  y225 = y225 + y573;  y433 = y433 + y623;  y384 = y384 + y614;  y305 = y305 + y594;  y224 = y224 + y574;  y432 = y432 + y626;  y383 = y383 + y616;  y302 = y302 + y596;  y223 = y223 + y576;  y431 = y431 + y628;  y382 = y382 + y617;  y301 = y301 + y597;  y222 = y222 + y577;  y430 = y430 + y558;  y380 = y380 + y621;  y300 = y300 + y602;  y221 = y221 + y582;  y429 = y429 + y562;  y379 = y379 + y619;  y299 = y299 + y599;  y220 = y220 + y580;  y428 = y428 + y560;  y378 = y378 + y622;  y298 = y298 + y603;  y219 = y219 + y583;  y427 = y427 + y563;  y377 = y377 + y624;  y297 = y297 + y604;  y218 = y218 + y584;  y426 = y426 + y564;

// Full depth 76 and Toffoli depth 8
y606= y606 + y371 *  y538;  y586= y586 + y290 *  y518;  y566= y566 + y211 *  y497;  y557= y557 + y419 *  y521;  y607= y607 + y376 *  y543;  y587= y587 + y296 *  y523;  y567= y567 + y217 *  y502;  y568= y568 + y424 *  y556;  y608= y608 + y358 *  y64;  y588= y588 + y278 *  y56;  y569= y569 + y199 *  y48;  y579= y579 + y407 *  y40;  y609= y609 + y373 *  y548;  y589= y589 + y293 *  y528;  y570= y570 + y213 *  y507;  y590= y590 + y421 *  y486;  y610= y610 + y374 *  y547;  y591= y591 + y294 *  y527;  y571= y571 + y214 *  y506;  y601= y601 + y422 *  y485;  y611= y611 + y375 *  y545;  y592= y592 + y295 *  y525;  y572= y572 + y216 *  y504;  y612= y612 + y423 *  y483;  y613= y613 + y367 *  y539;  y593= y593 + y287 *  y519;  y573= y573 + y208 *  y498;  y623= y623 + y416 *  y540;  y614= y614 + y372 *  y550;  y594= y594 + y291 *  y530;  y574= y574 + y212 *  y509;  y626= y626 + y420 *  y488;  y615= y615 + y363 *  y541;  y595= y595 + y283 *  y520;  y575= y575 + y203 *  y499;  y627= y627 + y411 *  y551;  y616= y616 + y371 *  y534;  y596= y596 + y290 *  y514;  y576= y576 + y211 *  y493;  y628= y628 + y419 *  y481;  y617= y617 + y376 *  y542;  y597= y597 + y296 *  y522;  y577= y577 + y217 *  y500;  y558= y558 + y424 *  y555;  y618= y618 + y358 *  y535;  y598= y598 + y278 *  y515;  y578= y578 + y199 *  y494;  y559= y559 + y407 *  y491;  y619= y619 + y373 *  y63;  y599= y599 + y293 *  y55;  y580= y580 + y213 *  y47;  y560= y560 + y421 *  y39;  y620= y620 + y374 *  y546;  y600= y600 + y294 *  y526;  y581= y581 + y214 *  y505;  y561= y561 + y422 *  y484;  y621= y621 + y375 *  y544;  y602= y602 + y295 *  y524;  y582= y582 + y216 *  y503;  y562= y562 + y423 *  y482;  y622= y622 + y367 *  y536;  y603= y603 + y287 *  y516;  y583= y583 + y208 *  y495;  y563= y563 + y416 *  y501;  y624= y624 + y372 *  y549;  y604= y604 + y291 *  y529;  y584= y584 + y212 *  y508;  y564= y564 + y420 *  y487;  y625= y625 + y363 *  y537;  y605= y605 + y283 *  y517;  y585= y585 + y203 *  y496;  y565= y565 + y411 *  y511;

// Full depth 77 and Toffoli depth 8
y376 = y376 + y371;  y296 = y296 + y290;  y217 = y217 + y211;  y424 = y424 + y419;  y375 = y375 + y374;  y295 = y295 + y294;  y216 = y216 + y214;  y423 = y423 + y422;

// Full depth 78 and Toffoli depth 8
y374 = y374 + y371;  y294 = y294 + y290;  y214 = y214 + y211;  y422 = y422 + y419;

// Full depth 79 and Toffoli depth 8
y371 = y371 + y369;  y290 = y290 + y289;  y211 = y211 + y210;  y419 = y419 + y418;

// Full depth 80 and Toffoli depth 9
y374 = y374 + y367;  y294 = y294 + y287;  y214 = y214 + y208;  y422 = y422 + y416;  y369= y369 + y358 *  y368;  y289= y289 + y278 *  y288;  y210= y210 + y199 *  y209;  y418= y418 + y407 *  y417;

// Full depth 81 and Toffoli depth 9
y375 = y375 + y373;  y295 = y295 + y293;  y216 = y216 + y213;  y423 = y423 + y421;  y372 = y372 + y367;  y291 = y291 + y287;  y212 = y212 + y208;  y420 = y420 + y416;  y368 = y368 + y366;  y288 = y288 + y286;  y209 = y209 + y207;  y417 = y417 + y415;

// Full depth 82 and Toffoli depth 9
y373 = y373 + y363;  y293 = y293 + y283;  y213 = y213 + y203;  y421 = y421 + y411;  y367 = y367 + y366;  y287 = y287 + y286;  y208 = y208 + y207;  y416 = y416 + y415;

// Full depth 83 and Toffoli depth 10
y372 = y372 + y363;  y291 = y291 + y283;  y212 = y212 + y203;  y420 = y420 + y411;  y366= y366 + y351 *  y365;  y286= y286 + y271 *  y285;  y207= y207 + y478 *  y206;  y415= y415 + y381 *  y413;

// Full depth 84 and Toffoli depth 10
y367 = y367 + y364;  y287 = y287 + y284;  y208 = y208 + y205;  y416 = y416 + y412;  y365 = y365 + y363;  y285 = y285 + y283;  y206 = y206 + y203;  y413 = y413 + y411;

// Full depth 85 and Toffoli depth 10
y376 = y376 + y358;  y296 = y296 + y278;  y217 = y217 + y199;  y424 = y424 + y407;  y364 = y364 + y363;  y284 = y284 + y283;  y205 = y205 + y203;  y412 = y412 + y411;

// Full depth 86 and Toffoli depth 10
y373 = y373 + y358;  y293 = y293 + y278;  y213 = y213 + y199;  y421 = y421 + y407;  y368 = y368 + y356;  y288 = y288 + y276;  y209 = y209 + y197;  y417 = y417 + y405;  y363 = y363 + y362;  y283 = y283 + y282;  y203 = y203 + y202;  y411 = y411 + y410;

// Full depth 87 and Toffoli depth 11
y365 = y365 + y356;  y285 = y285 + y276;  y206 = y206 + y197;  y413 = y413 + y405;  y362=y362 + y360 * y361;  y282=y282 + y279 * y280;  y202=y202 + y200 * y201;  y410=y410 + y408 * y409;  y358 = y358 + y357;  y278 = y278 + y277;  y199 = y199 + y198;  y407 = y407 + y406;

// Full depth 88 and Toffoli depth 12
y361 = y361 + y355;  y280 = y280 + y275;  y201 = y201 + y196;  y409 = y409 + y404;  y357= y357 + y354 *  y356;  y277= y277 + y274 *  y276;  y198= y198 + y195 *  y197;  y406= y406 + y402 *  y405;

// Full depth 89 and Toffoli depth 12
y361 = y361 + y344;  y280 = y280 + y264;  y201 = y201 + y472;  y409 = y409 + y315;  y356 = y356 + y355;  y276 = y276 + y275;  y197 = y197 + y196;  y405 = y405 + y404;

// Full depth 90 and Toffoli depth 13
y371 = y371 + y354;  y290 = y290 + y274;  y211 = y211 + y195;  y419 = y419 + y402;  y363 = y363 + y351;  y283 = y283 + y271;  y203 = y203 + y478;  y411 = y411 + y381;  y358 = y358 + y344;  y278 = y278 + y264;  y199 = y199 + y472;  y407 = y407 + y315;  y355= y355 + y349 *  y353;  y275= y275 + y268 *  y273;  y196= y196 + y476 *  y194;  y404= y404 + y359 *  y401;

// Full depth 91 and Toffoli depth 13
y354 = y354 + y349;  y274 = y274 + y268;  y195 = y195 + y476;  y402 = y402 + y359;

// Full depth 92 and Toffoli depth 13
y364 = y364 + y353;  y284 = y284 + y273;  y205 = y205 + y194;  y412 = y412 + y401;  y360 = y360 + y351;  y279 = y279 + y271;  y200 = y200 + y478;  y408 = y408 + y381;  y354 = y354 + y344;  y274 = y274 + y264;  y195 = y195 + y472;  y402 = y402 + y315;

// Full depth 93 and Toffoli depth 13
y360 = y360 + y353;  y279 = y279 + y273;  y200 = y200 + y194;  y408 = y408 + y401;  y356 = y356 + y351;  y276 = y276 + y271;  y197 = y197 + y478;  y405 = y405 + y381;  y349 = y349 + y347;  y268 = y268 + y267;  y476 = y476 + y475;  y359 = y359 + y348;  y344 = y344 + y343;  y264 = y264 + y263;  y472 = y472 + y471;  y315 = y315 + y303;

// Full depth 94 and Toffoli depth 13
y353 = y353 + y352;  y273 = y273 + y272;  y194 = y194 + y479;  y401 = y401 + y392;  y351 = y351 + y350;  y271 = y271 + y269;  y478 = y478 + y477;  y381 = y381 + y370;  y347 = y347 + y346;  y267 = y267 + y266;  y475 = y475 + y474;  y348 = y348 + y337;  y343 = y343 + y342;  y263 = y263 + y262;  y471 = y471 + y470;  y303 = y303 + y292;

// Full depth 95 and Toffoli depth 13
y352 = y352 + y340;  y272 = y272 + y260;  y479 = y479 + y467;  y392 = y392 + y270;  y350 = y350 + y338;  y269 = y269 + y257;  y477 = y477 + y465;  y370 = y370 + y248;  y346 = y346 + y345;  y266 = y266 + y265;  y474 = y474 + y473;  y337 = y337 + y326;  y342 = y342 + y341;  y262 = y262 + y261;  y470 = y470 + y468;  y292 = y292 + y281;

// Full depth 96 and Toffoli depth 13
y345 = y345 + y340;  y265 = y265 + y260;  y473 = y473 + y467;  y326 = y326 + y270;  y341 = y341 + y338;  y261 = y261 + y257;  y468 = y468 + y465;  y281 = y281 + y248;

// Full depth 97 and Toffoli depth 13
y340 = y340 + y339;  y260 = y260 + y258;  y467 = y467 + y466;  y270 = y270 + y259;  y338 = y338 + y336;  y257 = y257 + y256;  y465 = y465 + y464;  y248 = y248 + y237;

// Full depth 98 and Toffoli depth 13
y352 = y352 + y328;  y272 = y272 + y247;  y479 = y479 + y455;  y392 = y392 + y436;  y350 = y350 + y327;  y269 = y269 + y246;  y477 = y477 + y454;  y370 = y370 + y425;  y346 = y346 + y332;  y266 = y266 + y252;  y474 = y474 + y460;  y337 = y337 + y480;  y345 = y345 + y329;  y265 = y265 + y249;  y473 = y473 + y456;  y326 = y326 + y447;  y339 = y339 + y334;  y258 = y258 + y254;  y466 = y466 + y462;  y259 = y259 + y215;  y336 = y336 + y333;  y256 = y256 + y253;  y464 = y464 + y461;  y237 = y237 + y204;

// Full depth 99 and Toffoli depth 13
y347 = y347 + y331;  y267 = y267 + y251;  y475 = y475 + y459;  y348 = y348 + y469;  y343 = y343 + y330;  y263 = y263 + y250;  y471 = y471 + y457;  y303 = y303 + y458;  y342 = y342 + y332;  y262 = y262 + y252;  y470 = y470 + y460;  y292 = y292 + y480;  y341 = y341 + y328;  y261 = y261 + y247;  y468 = y468 + y455;  y281 = y281 + y436;  y340 = y340 + y327;  y260 = y260 + y246;  y467 = y467 + y454;  y270 = y270 + y425;  y339 = y339 + y333;  y258 = y258 + y253;  y466 = y466 + y461;  y259 = y259 + y204;  y338 = y338 + y329;  y257 = y257 + y249;  y465 = y465 + y456;  y248 = y248 + y447;  y336 = y336 + y335;  y256 = y256 + y255;  y464 = y464 + y463;  y237 = y237 + y226;

// Full depth 100 and Toffoli depth 14
y351 = y351 + y552;  y271 = y271 + y531;  y478 = y478 + y510;  y381 = y381 + y489;  y335= y335 + y538 *  y534;  y255= y255 + y518 *  y514;  y463= y463 + y497 *  y493;  y226= y226 + y521 *  y481;  y334= y334 + y543 *  y542;  y254= y254 + y523 *  y522;  y462= y462 + y502 *  y500;  y215= y215 + y556 *  y555;  y333= y333 + y64 *  y535;  y253= y253 + y56 *  y515;  y461= y461 + y48 *  y494;  y204= y204 + y40 *  y491;  y332= y332 + y548 *  y63;  y252= y252 + y528 *  y55;  y460= y460 + y507 *  y47;  y480= y480 + y486 *  y39;  y331= y331 + y545 *  y544;  y251= y251 + y525 *  y524;  y459= y459 + y504 *  y503;  y469= y469 + y483 *  y482;  y330= y330 + y547 *  y546;  y250= y250 + y527 *  y526;  y457= y457 + y506 *  y505;  y458= y458 + y485 *  y484;  y329= y329 + y539 *  y536;  y249= y249 + y519 *  y516;  y456= y456 + y498 *  y495;  y447= y447 + y540 *  y501;  y328= y328 + y549 *  y550;  y247= y247 + y529 *  y530;  y455= y455 + y508 *  y509;  y436= y436 + y487 *  y488;  y327= y327 + y541 *  y537;  y246= y246 + y520 *  y517;  y454= y454 + y499 *  y496;  y425= y425 + y551 *  y511;

// Full depth 101 and Toffoli depth 14
y552 = y552 + y541;  y531 = y531 + y520;  y510 = y510 + y499;  y489 = y489 + y551;

// Full depth 102 and Toffoli depth 14
y547 = y547 + y548;  y527 = y527 + y528;  y506 = y506 + y507;  y485 = y485 + y486;  y539 = y539 + y541;  y519 = y519 + y520;  y498 = y498 + y499;  y540 = y540 + y551;

// Full depth 103 and Toffoli depth 14
y547 = y547 + y545;  y527 = y527 + y525;  y506 = y506 + y504;  y485 = y485 + y483;  y548 = y548 + y541;  y528 = y528 + y520;  y507 = y507 + y499;  y486 = y486 + y551;

// Full depth 104 and Toffoli depth 14
y539 = y539 + y550;  y519 = y519 + y530;  y498 = y498 + y509;  y540 = y540 + y488;  y541 = y541 + y545;  y520 = y520 + y525;  y499 = y499 + y504;  y551 = y551 + y483;

// Full depth 105 and Toffoli depth 14
y545 = y545 + y550;  y525 = y525 + y530;  y504 = y504 + y509;  y483 = y483 + y488;

// Full depth 106 and Toffoli depth 14
y550 = y550 + y549;  y530 = y530 + y529;  y509 = y509 + y508;  y488 = y488 + y487;

// Full depth 107 and Toffoli depth 14
y552 = y552 + y537;  y531 = y531 + y517;  y510 = y510 + y496;  y489 = y489 + y511;  y541 = y541 + y324;  y520 = y520 + y244;  y499 = y499 + y452;  y551 = y551 + y403;  y545 = y545 + y543;  y525 = y525 + y523;  y504 = y504 + y502;  y483 = y483 + y556;  y549 = y549 + y536;  y529 = y529 + y516;  y508 = y508 + y495;  y487 = y487 + y501;

// Full depth 108 and Toffoli depth 14
y344 = y344 + y554;  y264 = y264 + y533;  y472 = y472 + y513;  y315 = y315 + y492;  y324 = y324 + y535;  y244 = y244 + y515;  y452 = y452 + y494;  y403 = y403 + y491;  y549 = y549 + y537;  y529 = y529 + y517;  y508 = y508 + y496;  y487 = y487 + y511;  y536 = y536 + y534;  y516 = y516 + y514;  y495 = y495 + y493;  y501 = y501 + y481;  y538 = y538 + y543;  y518 = y518 + y523;  y497 = y497 + y502;  y521 = y521 + y556;

// Full depth 109 and Toffoli depth 14
y353 = y353 + y58;  y273 = y273 + y50;  y194 = y194 + y42;  y401 = y401 + y34;  y349 = y349 + y553;  y268 = y268 + y532;  y476 = y476 + y512;  y359 = y359 + y490;  y554 = y554 + y322;  y533 = y533 + y242;  y513 = y513 + y450;  y492 = y492 + y193;  y534 = y534 + y535;  y514 = y514 + y515;  y493 = y493 + y494;  y481 = y481 + y491;  y543 = y543 + y537;  y523 = y523 + y517;  y502 = y502 + y496;  y556 = y556 + y511;

// Full depth 110 and Toffoli depth 14
y554 = y554 + y325;  y533 = y533 + y245;  y513 = y513 + y453;  y492 = y492 + y414;  y548 = y548 + y64;  y528 = y528 + y56;  y507 = y507 + y48;  y486 = y486 + y40;  y550 = y550 + y58;  y530 = y530 + y50;  y509 = y509 + y42;  y488 = y488 + y34;  y536 = y536 + y546;  y516 = y516 + y526;  y495 = y495 + y505;  y501 = y501 + y484;  y534 = y534 + y542;  y514 = y514 + y522;  y493 = y493 + y500;  y481 = y481 + y555;  y553 = y553 + y322;  y532 = y532 + y242;  y512 = y512 + y450;  y490 = y490 + y193;  y537 = y537 + y535;  y517 = y517 + y515;  y496 = y496 + y494;  y511 = y511 + y491;

// Full depth 111 and Toffoli depth 14
y325 = y325 + y57;  y245 = y245 + y49;  y453 = y453 + y41;  y414 = y414 + y33;  y58 = y58 + 1;  y50 = y50 + 1;  y42 = y42 + 1;  y34 = y34 + 1;  y542 = y542 + y323;  y522 = y522 + y243;  y500 = y500 + y451;  y555 = y555 + y304;  y538 = y538 + y64;  y518 = y518 + y56;  y497 = y497 + y48;  y521 = y521 + y40;  y535 = y535 + y322;  y515 = y515 + y242;  y494 = y494 + y450;  y491 = y491 + y193;  y544 = y544 + y546;  y524 = y524 + y526;  y503 = y503 + y505;  y482 = y482 + y484;

// Full depth 112 and Toffoli depth 14
y325 = y325 + y62;  y245 = y245 + y54;  y453 = y453 + y46;  y414 = y414 + y38;  y323 = y323 + y57;  y243 = y243 + y49;  y451 = y451 + y41;  y304 = y304 + y33;  y64 = y64 + 1;  y56 = y56 + 1;  y48 = y48 + 1;  y40 = y40 + 1;  y543 = y543 + y61;  y523 = y523 + y53;  y502 = y502 + y45;  y556 = y556 + y37;  y537 = y537 + y63;  y517 = y517 + y55;  y496 = y496 + y47;  y511 = y511 + y39;  y322 = y322 + y59;  y242 = y242 + y51;  y450 = y450 + y43;  y193 = y193 + y35;  y546 = y546 + y58;  y526 = y526 + y50;  y505 = y505 + y42;  y484 = y484 + y34;

// Full depth 113 and Toffoli depth 14
y324 = y324 + y57;  y244 = y244 + y49;  y452 = y452 + y41;  y403 = y403 + y33;  y542 = y542 + y59;  y522 = y522 + y51;  y500 = y500 + y43;  y555 = y555 + y35;  y323 = y323 + y60;  y243 = y243 + y52;  y451 = y451 + y44;  y304 = y304 + y36;  y553 = y553 + y58;  y532 = y532 + y50;  y512 = y512 + y42;  y490 = y490 + y34;  y535 = y535 + y64;  y515 = y515 + y56;  y494 = y494 + y48;  y491 = y491 + y40;  y322 = y322 + y61;  y242 = y242 + y53;  y450 = y450 + y45;  y193 = y193 + y37;  y544 = y544 + y63;  y524 = y524 + y55;  y503 = y503 + y47;  y482 = y482 + y39;  y546 = y546 + y62;  y526 = y526 + y54;  y505 = y505 + y46;  y484 = y484 + y38;

// Full depth 114 and Toffoli depth 14
y64 = y64 + y128;  y63 = y63 + y127;  y62 = y62 + y126;  y61 = y61 + y125;  y60 = y60 + y124;  y59 = y59 + y123;  y58 = y58 + y122;  y57 = y57 + y121;  y56 = y56 + y120;  y55 = y55 + y119;  y54 = y54 + y118;  y53 = y53 + y117;  y52 = y52 + y116;  y51 = y51 + y115;  y50 = y50 + y114;  y49 = y49 + y113;  y48 = y48 + y112;  y47 = y47 + y111;  y46 = y46 + y110;  y45 = y45 + y109;  y44 = y44 + y108;  y43 = y43 + y107;  y42 = y42 + y106;  y41 = y41 + y105;  y40 = y40 + y104;  y39 = y39 + y103;  y38 = y38 + y102;  y37 = y37 + y101;  y36 = y36 + y100;  y35 = y35 + y99;  y34 = y34 + y98;  y33 = y33 + y97;

// Full depth 115 and Toffoli depth 14
y64 = y64 + y96;  y63 = y63 + y95;  y62 = y62 + y94;  y61 = y61 + y93;  y60 = y60 + y92;  y59 = y59 + y91;  y58 = y58 + y90;  y57 = y57 + y89;  y56 = y56 + y88;  y55 = y55 + y87;  y54 = y54 + y86;  y53 = y53 + y85;  y52 = y52 + y84;  y51 = y51 + y83;  y50 = y50 + y82;  y49 = y49 + y81;  y48 = y48 + y80;  y47 = y47 + y79;  y46 = y46 + y78;  y45 = y45 + y77;  y44 = y44 + y76;  y43 = y43 + y75;  y42 = y42 + y74;  y41 = y41 + y73;  y40 = y40 + y72;  y39 = y39 + y71;  y38 = y38 + y70;  y37 = y37 + y69;  y36 = y36 + y68;  y35 = y35 + y67;  y34 = y34 + y66;  y33 = y33 + y65;




int res=0;res=res*2+y1.bit;res=res*2+y2.bit;res=res*2+y3.bit;res=res*2+y4.bit;res=res*2+y5.bit;res=res*2+y6.bit;res=res*2+y7.bit;res=res*2+y8.bit;res=res*2+y9.bit;res=res*2+y10.bit;res=res*2+y11.bit;res=res*2+y12.bit;res=res*2+y13.bit;res=res*2+y14.bit;res=res*2+y15.bit;res=res*2+y16.bit;res=res*2+y17.bit;res=res*2+y18.bit;res=res*2+y19.bit;res=res*2+y20.bit;res=res*2+y21.bit;res=res*2+y22.bit;res=res*2+y23.bit;res=res*2+y24.bit;res=res*2+y25.bit;res=res*2+y26.bit;res=res*2+y27.bit;res=res*2+y28.bit;res=res*2+y29.bit;res=res*2+y30.bit;res=res*2+y31.bit;res=res*2+y32.bit;
printf("%08X\n", res);

return 0;
}