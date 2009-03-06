#include "precompiled.h"
#include "../../../../shared/Config/Config.h"
#include "../../Config.h"

bool GossipHello_TeleNPC(Player *player, Creature *_Creature)
{
    player->SetTaxiCheater(true);

	// Main Menu for Alliance
    if ( player->GetTeam() == ALLIANCE )
	{
		player->ADD_GOSSIP_ITEM( 5, "Stormwind"                    , GOSSIP_SENDER_MAIN, 1206);
		player->ADD_GOSSIP_ITEM( 5, "Ironforge"                    , GOSSIP_SENDER_MAIN, 1224);
		player->ADD_GOSSIP_ITEM( 5, "Darnassus"                    , GOSSIP_SENDER_MAIN, 1203);
		player->ADD_GOSSIP_ITEM( 5, "Exodar"                       , GOSSIP_SENDER_MAIN, 1216);
		player->ADD_GOSSIP_ITEM( 5, "Shattrath City"               , GOSSIP_SENDER_MAIN, 4014);
		player->ADD_GOSSIP_ITEM( 5, "Isle Of Quel'Danas"           , GOSSIP_SENDER_MAIN, 5585);
		player->ADD_GOSSIP_ITEM( 5, "Dalaran (Alliance quarter)"   , GOSSIP_SENDER_MAIN, 4017);
		player->ADD_GOSSIP_ITEM( 7, "[Instances Lvl 1-60] ->"      , GOSSIP_SENDER_MAIN, 5550);
		player->ADD_GOSSIP_ITEM( 7, "[Instances Lvl 60+] ->"       , GOSSIP_SENDER_MAIN, 5560);
		player->ADD_GOSSIP_ITEM( 7, "[Instances Lvl 70+] ->"       , GOSSIP_SENDER_MAIN, 5570);
		player->ADD_GOSSIP_ITEM( 7, "[Instances Lvl 80+] ->"       , GOSSIP_SENDER_MAIN, 5580);
		player->ADD_GOSSIP_ITEM( 10, "Remove Resurrect Sickness"   , GOSSIP_SENDER_MAIN, 5590);
	}
	else // Main Menu for Horde
	{
		player->ADD_GOSSIP_ITEM( 5, "Orgrimmar"                    , GOSSIP_SENDER_MAIN, 1215);
		player->ADD_GOSSIP_ITEM( 5, "Thunder Bluff"                , GOSSIP_SENDER_MAIN, 1225);
		player->ADD_GOSSIP_ITEM( 5, "Undercity"                    , GOSSIP_SENDER_MAIN, 1213);
		player->ADD_GOSSIP_ITEM( 5, "Silvermoon"                   , GOSSIP_SENDER_MAIN, 1217);
		player->ADD_GOSSIP_ITEM( 5, "Shattrath City"               , GOSSIP_SENDER_MAIN, 4014);
		player->ADD_GOSSIP_ITEM( 5, "Isle Of Quel'Danas"           , GOSSIP_SENDER_MAIN, 5585);
		player->ADD_GOSSIP_ITEM( 5, "Dalaran(Horde quarter)"       , GOSSIP_SENDER_MAIN, 4018);
		player->ADD_GOSSIP_ITEM( 7, "[Instances Lvl 1-60] ->"      , GOSSIP_SENDER_MAIN, 5550);
		player->ADD_GOSSIP_ITEM( 7, "[Instances Lvl 60+] ->"       , GOSSIP_SENDER_MAIN, 5560);
		player->ADD_GOSSIP_ITEM( 7, "[Instances Lvl 70+] ->"       , GOSSIP_SENDER_MAIN, 5570);
		player->ADD_GOSSIP_ITEM( 7, "[Instances Lvl 80+] ->"       , GOSSIP_SENDER_MAIN, 5580);
		player->ADD_GOSSIP_ITEM( 10, "Remove Resurrect Sickness"   , GOSSIP_SENDER_MAIN, 5590);
	}

    player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());

return true;
}


void SendDefaultMenu_TeleNPC(Player *player, Creature *_Creature, uint32 action )
{

// Not allow in combat
if(!player->getAttackers().empty())
{
    player->CLOSE_GOSSIP_MENU();
    _Creature->MonsterSay("You are in combat!", LANG_UNIVERSAL, NULL);
	return;
}

switch(action)
{

case 5550: //Instances 1-60
	player->ADD_GOSSIP_ITEM( 5, "The Wailing Caverns"     , GOSSIP_SENDER_MAIN, 1249);
	player->ADD_GOSSIP_ITEM( 5, "Deadmines"               , GOSSIP_SENDER_MAIN, 1250);
	player->ADD_GOSSIP_ITEM( 5, "Shadowfang Keep"         , GOSSIP_SENDER_MAIN, 1251);
	player->ADD_GOSSIP_ITEM( 5, "Blackfathom Deeps"       , GOSSIP_SENDER_MAIN, 1252);
	player->ADD_GOSSIP_ITEM( 5, "Razorfen Kraul"          , GOSSIP_SENDER_MAIN, 1254);
	player->ADD_GOSSIP_ITEM( 5, "Razorfen Downs"          , GOSSIP_SENDER_MAIN, 1256);
	player->ADD_GOSSIP_ITEM( 5, "Scarlet Monastery"       , GOSSIP_SENDER_MAIN, 1257);
	player->ADD_GOSSIP_ITEM( 7, "[More] ->"               , GOSSIP_SENDER_MAIN, 5551);
	player->ADD_GOSSIP_ITEM( 7, "<- [Main Menu]"          , GOSSIP_SENDER_MAIN, 5552);

	player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
break;


case 5560: // Instances 60+
	player->ADD_GOSSIP_ITEM( 5, "Zul'Gurub"               , GOSSIP_SENDER_MAIN, 4000);
	player->ADD_GOSSIP_ITEM( 5, "Onyxia's Lair"           , GOSSIP_SENDER_MAIN, 4001);
	player->ADD_GOSSIP_ITEM( 5, "Molten Core"             , GOSSIP_SENDER_MAIN, 4002);
	player->ADD_GOSSIP_ITEM( 5, "Blackwing Lair"          , GOSSIP_SENDER_MAIN, 4003);
	player->ADD_GOSSIP_ITEM( 5, "Ruins of Ahn'Qiraj"      , GOSSIP_SENDER_MAIN, 4004);
	player->ADD_GOSSIP_ITEM( 5, "Temple of Ahn'Qiraj"     , GOSSIP_SENDER_MAIN, 4005);
	player->ADD_GOSSIP_ITEM( 5, "Naxxramas"               , GOSSIP_SENDER_MAIN, 4006);
	player->ADD_GOSSIP_ITEM( 7, "<- [Main Menu]"          , GOSSIP_SENDER_MAIN, 5552);

	player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
break;

case 5570: // Instances 70+
	player->ADD_GOSSIP_ITEM( 5, "Karazhan"                , GOSSIP_SENDER_MAIN, 4007);
	player->ADD_GOSSIP_ITEM( 5, "Gruul's Lair"            , GOSSIP_SENDER_MAIN, 4008);
	player->ADD_GOSSIP_ITEM( 5, "Hellfire Citadel"        , GOSSIP_SENDER_MAIN, 4009);
	player->ADD_GOSSIP_ITEM( 5, "Coilfang Reservoir"      , GOSSIP_SENDER_MAIN, 4010);
	player->ADD_GOSSIP_ITEM( 5, "Tempest Keep"            , GOSSIP_SENDER_MAIN, 4011);
	player->ADD_GOSSIP_ITEM( 5, "Caverns of Time"         , GOSSIP_SENDER_MAIN, 4012);
	player->ADD_GOSSIP_ITEM( 5, "Zul'Aman"                , GOSSIP_SENDER_MAIN, 4016);
	player->ADD_GOSSIP_ITEM( 5, "Black Temple"            , GOSSIP_SENDER_MAIN, 4013);
	player->ADD_GOSSIP_ITEM( 7, "<- [Main Menu]"          , GOSSIP_SENDER_MAIN, 5552);

	player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
break;

case 5551: //More Instances 1-60
	player->ADD_GOSSIP_ITEM( 5, "Uldaman"                   , GOSSIP_SENDER_MAIN, 1258);
	player->ADD_GOSSIP_ITEM( 5, "Zul'Farrak"                , GOSSIP_SENDER_MAIN, 1259);
	player->ADD_GOSSIP_ITEM( 5, "Maraudon"                  , GOSSIP_SENDER_MAIN, 1260);
	player->ADD_GOSSIP_ITEM( 5, "The Sunken Temple"         , GOSSIP_SENDER_MAIN, 1261);
	player->ADD_GOSSIP_ITEM( 5, "Blackrock Depths"          , GOSSIP_SENDER_MAIN, 1262);
	player->ADD_GOSSIP_ITEM( 5, "Dire Maul"                 , GOSSIP_SENDER_MAIN, 1263);
	player->ADD_GOSSIP_ITEM( 5, "Blackrock Spire"           , GOSSIP_SENDER_MAIN, 1264);
	player->ADD_GOSSIP_ITEM( 5, "Stratholme"                , GOSSIP_SENDER_MAIN, 1265);
	player->ADD_GOSSIP_ITEM( 5, "Scholomance"               , GOSSIP_SENDER_MAIN, 1266);
	player->ADD_GOSSIP_ITEM( 7, "<- [Back]"                 , GOSSIP_SENDER_MAIN, 5550);
	player->ADD_GOSSIP_ITEM( 7, "<- [Main Menu]"            , GOSSIP_SENDER_MAIN, 5552);

	player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
break;

case 5552: //Back To Main Menu
    if ( player->GetTeam() == ALLIANCE ) // Main menu for Alliance
	{
		player->ADD_GOSSIP_ITEM( 5, "Stormwind"                   , GOSSIP_SENDER_MAIN, 1206);
		player->ADD_GOSSIP_ITEM( 5, "Ironforge"                   , GOSSIP_SENDER_MAIN, 1224);
		player->ADD_GOSSIP_ITEM( 5, "Darnassus"                   , GOSSIP_SENDER_MAIN, 1203);
		player->ADD_GOSSIP_ITEM( 5, "Exodar"                      , GOSSIP_SENDER_MAIN, 1216);
		player->ADD_GOSSIP_ITEM( 5, "Shattrath City"              , GOSSIP_SENDER_MAIN, 4014);
		player->ADD_GOSSIP_ITEM( 5, "Isle Of Quel'Danas"          , GOSSIP_SENDER_MAIN, 5585);
		player->ADD_GOSSIP_ITEM( 5, "Dalaran(Alliance quarter)"   , GOSSIP_SENDER_MAIN, 4017);
		player->ADD_GOSSIP_ITEM( 7, "[Instances Lvl 1-60] ->"     , GOSSIP_SENDER_MAIN, 5550);
		player->ADD_GOSSIP_ITEM( 7, "[Instances Lvl 60+] ->"      , GOSSIP_SENDER_MAIN, 5560);
		player->ADD_GOSSIP_ITEM( 7, "[Instances Lvl 70+] ->"      , GOSSIP_SENDER_MAIN, 5570);
		player->ADD_GOSSIP_ITEM( 7, "[Instances Lvl 80+] ->"      , GOSSIP_SENDER_MAIN, 5580);
		player->ADD_GOSSIP_ITEM( 10, "Remove Resurrect Sickness"  , GOSSIP_SENDER_MAIN, 5590);
    }
	else // Main menu for Horde
	{
		player->ADD_GOSSIP_ITEM( 5, "Orgrimmar"                   , GOSSIP_SENDER_MAIN, 1215);
		player->ADD_GOSSIP_ITEM( 5, "Thunder Bluff"               , GOSSIP_SENDER_MAIN, 1225);
		player->ADD_GOSSIP_ITEM( 5, "Undercity"                   , GOSSIP_SENDER_MAIN, 1213);
		player->ADD_GOSSIP_ITEM( 5, "Silvermoon"                  , GOSSIP_SENDER_MAIN, 1217);
		player->ADD_GOSSIP_ITEM( 5, "Shattrath City"              , GOSSIP_SENDER_MAIN, 4014);
		player->ADD_GOSSIP_ITEM( 5, "Isle Of Quel'Danas"          , GOSSIP_SENDER_MAIN, 5585);
		player->ADD_GOSSIP_ITEM( 5, "Dalaran(Horde quarter)"      , GOSSIP_SENDER_MAIN, 4018);
		player->ADD_GOSSIP_ITEM( 7, "[Instances Lvl 1-60] ->"     , GOSSIP_SENDER_MAIN, 5550);
		player->ADD_GOSSIP_ITEM( 7, "[Instances Lvl 60+] ->"      , GOSSIP_SENDER_MAIN, 5560);
		player->ADD_GOSSIP_ITEM( 7, "[Instances Lvl 70+] ->"      , GOSSIP_SENDER_MAIN, 5570);
		player->ADD_GOSSIP_ITEM( 7, "[Instances Lvl 80+] ->"      , GOSSIP_SENDER_MAIN, 5580);
		player->ADD_GOSSIP_ITEM( 10, "Remove Resurrect Sickness"  , GOSSIP_SENDER_MAIN, 5590);
	}

	player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());

break;

case 5575: // Battlegrounds and Arenas
	player->ADD_GOSSIP_ITEM( 5, "Warsong Gulch"                 , GOSSIP_SENDER_MAIN, 5576);
	player->ADD_GOSSIP_ITEM( 5, "Arathi Basin"                  , GOSSIP_SENDER_MAIN, 5577);
	player->ADD_GOSSIP_ITEM( 5, "Alterac Valley"                , GOSSIP_SENDER_MAIN, 5578);
	player->ADD_GOSSIP_ITEM( 5, "Eye of the Storm"              , GOSSIP_SENDER_MAIN, 5579);
	player->ADD_GOSSIP_ITEM( 5, "Gurubashi Arena"               , GOSSIP_SENDER_MAIN, 4015);
	player->ADD_GOSSIP_ITEM( 5, "Circle of Blood Arena"         , GOSSIP_SENDER_MAIN, 5581);
	player->ADD_GOSSIP_ITEM( 5, "Ring of Trials"                , GOSSIP_SENDER_MAIN, 5582);
	player->ADD_GOSSIP_ITEM( 5, "The Maul"                      , GOSSIP_SENDER_MAIN, 5583);
	player->ADD_GOSSIP_ITEM( 7, "<- [Main Menu]"                , GOSSIP_SENDER_MAIN, 5552);

	player->SEND_GOSSIP_MENU(DEFAULT_GOSSIP_MESSAGE,_Creature->GetGUID());
break;

case 1203: // Teleport to Darnassus
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(1, 9947.52f, 2482.73f, 1316.21f, 0.0f);
break;

// Teleport to Stormwind
case 1206:
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(0, -8960.14f, 516.266f, 96.3568f, 0.0f);
break;

// Teleport to Undercity
case 1213:
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(0, 1819.71f, 238.79f, 60.5321f, 0.0f);
break;

// Teleport to Orgrimmar
case 1215:
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(1, 1552.5f, -4420.66f, 8.94802f, 0.0f);
break;

// Teleport to Exodar
case 1216:
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(530, -4073.03f, -12020.4f, -1.47f, 0.0f);
break;

// Teleport to Silvermoon
case 1217:
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(530, 9338.74f, -7277.27f, 13.7895f, 0.0f);
break;

// Teleport to Ironforge
case 1224:
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(0, -4924.07f, -951.95f, 501.55f, 5.40f);
break;

// Teleport to Thunder Bluff
case 1225:
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(1, -1290.0f, 147.033997f, 129.682007f, 4.919000f);
break;

case 4000:// Teleport to Zul'Gurub
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(0, -11916.7f, -1212.82f, 92.2868f, 4.6095f);
break;

case 4001:// Teleport to Onyxia's Lair
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(1, -4707.44f, -3726.82f, 54.6723f, 3.8f);
break;

case 4002:// Teleport to Molten Core
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(230, 1121.451172f, -454.316772f, -101.329536f, 3.5f);
break;

case 4003:// Teleport to Blackwing Lair
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(469, -7665.55f, -1102.49f, 400.679f, 0.0f);
break;

case 4004:// Ruins of Ahn'Qiraj
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(1, -8409.032227f, 1498.830933f, 27.361542f, 2.497567f);
break;

case 4005:// Temple of Ahn'Qiraj
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(1, -8245.837891f, 1983.736206f, 129.071686f, 0.936195f);
break;

case 4006:// Naxxramas
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(571, 3673.4328f, -1273.5053f, 243.512f, 5.6171f);
break;

case 4007:// Karazhan
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(0, -11118.8f, -2010.84f, 47.0807f, 0.0f);
break;

case 4008:// Gruul's Lair
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(530, 3539.007568f, 5082.357910f, 1.691071f, 0.0f);
break;

case 4009:// Hellfire Citadel
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(530, -305.816223f, 3056.401611f, -2.473183f, 2.01f);
break;

case 4010:// Coilfang Reservoir
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(530, 517.288025f, 6976.279785f, 32.007198f, 0.0f);
break;

case 4011:// Tempest Keep
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(530, 3089.579346f, 1399.046509f, 187.653458f, 4.794070f);
break;

case 4012:// Caverns of Time
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(1, -8173.66f, -4746.36f, 33.8423f, 4.93989f);
break;

case 4016:// Zul'Aman
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(530, 6846.95f, -7954.5f, 170.028f, 4.61501f);
break;

case 4013:// Black Temple
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(530, -3610.719482f, 324.987579f, 37.400028f, 3.282981f);
break;

case 4014:// Shattrath City
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(530, -1850.209961f, 5435.821777f, -10.961435f, 3.403913f);
break;

case 4015:// Gurubashi
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(0, -13261.3f, 168.294f, 35.0792f, 1.00688f);
break;

case 4017:// Dalaran Alliance
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(571, 5699.833f, 762.802f, 647.684f, 5.6061f);
break;

case 4018:// Dalaran Horde
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(571, 5953.1391f, 564.1438f, 660.4870f, 4.1995f);
break;

case 1249://teleport player to the Wailing Caverns
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(1, -722.53f,-2226.30f,16.94f,2.71f);
break;

case 1250://teleport player to the Deadmines
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(0, -11212.04f,1658.58f,25.67f,1.45f);
break;

case 1251://teleport player to Shadowfang Keep
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(0, -254.47f,1524.68f,76.89f,1.56f);
break;

case 1252://teleport player to Blackfathom Deeps
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(1, 4254.58f,664.74f,-29.04f,1.97f);
break;
  
case 1254://teleport player to Razorfen Kraul
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(1, -4484.04f,-1739.40f,86.47f,1.23f);
break;
  
case 1256://teleport player to Razorfen Downs
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(1, -4645.08f,-2470.85f,85.53f,4.39f);
break;

case 1257://teleport player to the Scarlet Monastery
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(0, 2843.89f,-693.74f,139.32f,5.11f);
break;

case 1258://teleport player to Uldaman
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(0, -6119.70f,-2957.30f,204.11f,0.03f);
break;

case 1259://teleport player to Zul'Farrak
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(1, -6839.39f,-2911.03f,8.87f,0.41f);
break;


case 1260://teleport player to Maraudon
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(1, -1433.33f,2955.34f,96.21f,4.82f);
break;

case 1261://teleport player to the Sunken Temple
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(0, -10346.92f,-3851.90f,-43.41f,6.09f);
break;

case 1262://teleport player to Blackrock Depths
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(0, -7301.03f,-913.19f,165.37f,0.08f);
break;

case 1263://teleport player to Dire Maul
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(1, -3982.47f,1127.79f,161.02f,0.05f);
break;

case 1264://teleport player to Blackrock Spire
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(0, -7535.43f,-1212.04f,285.45f,5.29f);
break;

case 1265://teleport player to Stratholme
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(0, 3263.54f,-3379.46f,143.59f,0.00f);
break;

case 1266://teleport player to Scholomance
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(0, 1219.01f,-2604.66f,85.61f,0.50f);
break;
/*
case 5576://teleport player to Warsong Gulch
	player->CLOSE_GOSSIP_MENU();
    if ( player->GetTeam() == ALLIANCE )
		player->TeleportTo(489, 1525.95f,1481.66f,352.001f,3.20756f);
	else // horde
		player->TeleportTo(489, 930.851f,1431.57f,345.537f,0.015704f);
break;

case 5577://teleport player to Arathi Basin
	player->CLOSE_GOSSIP_MENU();
    if ( player->GetTeam() == ALLIANCE )
		player->TeleportTo(529, 1308.681f,1306.03f,-9.0107f,3.91285f);
	else // horde
		player->TeleportTo(529, 686.053f,683.165f,-12.9149f,0.18f);
break;

case 5578://teleport player to Alterac Valley
	player->CLOSE_GOSSIP_MENU();
    if ( player->GetTeam() == ALLIANCE )
		player->TeleportTo(30, 883.187f,-489.375f,96.7618f,3.06932f);
	else // horde
		player->TeleportTo(30, -818.155f,-623.043f,54.0884f,2.1f);
break;

case 5579://teleport player to Eye of the Storm
	player->CLOSE_GOSSIP_MENU();
    if ( player->GetTeam() == ALLIANCE )
		player->TeleportTo(566, 2487.72f,1609.12f,1224.64f,3.35671f);
	else // horde
		player->TeleportTo(566, 1843.73f,1529.77f,1224.43f,0.297579f);
break;
*/
case 5590://Remove Res Sickness
	if(!player->HasAura(SPELL_ID_PASSIVE_RESURRECTION_SICKNESS,0)) {
		_Creature->MonsterWhisper(player->GetGUID(),"You don't have resurrection sickness.");
		GossipHello_TeleNPC(player, _Creature);
		return;
	}

	_Creature->CastSpell(player,38588,false); // Healing effect
	player->RemoveAurasDueToSpell(SPELL_ID_PASSIVE_RESURRECTION_SICKNESS);
	player->CLOSE_GOSSIP_MENU();
break;
/*
case 5581://teleport player to Circle of Blood
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(530, 2839.44f,5930.17f,11.1002f,3.16284f);
break;

case 5582://teleport player to Ring of Trials
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(530, -1999.94f,6581.71f,11.32f,2.3f);
break;

case 5583://teleport player to The Maul
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(1, -3761.49f,1133.43f,132.083f,4.57259f);
break;
*/
case 5585://teleport player to Isle Of Quel'Danas
	player->CLOSE_GOSSIP_MENU();
	player->TeleportTo(530, 12947.4f,-6893.31f,5.68398f,3.09154f);
break;

case 5590: //Shopping mall (if enabled in scriptdev2.conf)
	player->CLOSE_GOSSIP_MENU();
	// Read coordinates from config file
	player->TeleportTo(SD2Config.GetFloatDefault("MapID",13),SD2Config.GetFloatDefault("X_pos",0),SD2Config.GetFloatDefault("Y_pos",0),SD2Config.GetFloatDefault("Z_pos",0),0);
break;
} // end of switch
} //end of function



bool GossipSelect_TeleNPC(Player *player, Creature *_Creature, uint32 sender, uint32 action)
{
	// Main menu
	if (sender == GOSSIP_SENDER_MAIN)
	SendDefaultMenu_TeleNPC( player, _Creature, action );

return true;
}

void AddSC_telenpc()
{
    Script *newscript;

	newscript = new Script;
	newscript->Name="telenpc";
	newscript->pGossipHello = &GossipHello_TeleNPC;
	newscript->pGossipSelect = &GossipSelect_TeleNPC;
	newscript->pItemHello = NULL;
	newscript->pGOHello = NULL;
	newscript->pAreaTrigger = NULL;
	newscript->pItemQuestAccept = NULL;
	newscript->pGOQuestAccept = NULL;
	newscript->pGOChooseReward = NULL;

	m_scripts[nrscripts++] = newscript;
}
