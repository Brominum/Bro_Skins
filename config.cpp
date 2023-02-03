// Custom skins for M4 and M4 Block II by Bromine, inspired by CoD4
class CfgPatches
{
  class Bro_M4_Skins
  {
    units[] = {};
    weapons[] = 
	{
		"Bro_m4_red",
		"Bro_m4_blue",
		"Bro_m4_digi",
		"Bro_m4_gold",
		"Bro_m4_gold2",
		"Bro_m4a1_blockII_red",
		"Bro_m4a1_blockII_blue",
		"Bro_m4a1_blockII_digi",
		"Bro_m4a1_blockII_gold",
		"Bro_m4a1_blockII_gold2"
	};
    Version = 0.1;
    requiredVersion = 0.1;
    requiredAddons[] = {"A3_Characters_F_BLUFOR","A3_Weapons_F_Rifles_MX","rhsusf_weapons","rhsusf_c_weapons","rhsusf_weapons2"};
  };
};
class rhs_weap_m4;
class rhs_weap_m4a1;
class rhs_weap_m4a1_blockII;
class CfgWeapons
{
	class Bro_m4_gold : rhs_weap_m4
	{
		baseWeapon = "Bro_m4_gold";
		displayName = "[Bro] M4A1 (Gold)";
		scope = 2;   
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10"
		};
		hiddenSelectionsTextures[]=
		{
			"\Bro_skins\gold\m4a1_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",
			"a3\data_f\clear_empty.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\Bro_skins\gold\m4a1.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover.rvmat",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m203.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m320\data\M320.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1.rvmat"
		};
	};
	class Bro_m4_red : Bro_m4_gold
	{
		baseWeapon = "Bro_m4_red";
		displayName = "[Bro] M4A1 (Red Tiger)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10"
		};
		hiddenSelectionsTextures[]=
		{
			"\Bro_skins\red\m4a1_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",
			"a3\data_f\clear_empty.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\Bro_skins\red\m4a1.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover.rvmat",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m203.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m320\data\M320.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1.rvmat"
		};
	};
	class Bro_m4_digi : Bro_m4_red
	{
		baseWeapon = "Bro_m4_digi";
		displayName = "[Bro] M4A1 (Digital)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10"
		};
		hiddenSelectionsTextures[]=
		{
			"\Bro_skins\digi\m4a1_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",
			"a3\data_f\clear_empty.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\Bro_skins\red\m4a1.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover.rvmat",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m203.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m320\data\M320.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1.rvmat"
		};
	};
	class Bro_m4_blue : Bro_m4_red
	{
		baseWeapon = "Bro_m4_blue";
		displayName = "[Bro] M4A1 (Blue Tiger)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10"
		};
		hiddenSelectionsTextures[]=
		{
			"\Bro_skins\blue\m4a1_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",
			"a3\data_f\clear_empty.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\Bro_skins\red\m4a1.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover.rvmat",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m203.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m320\data\M320.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1.rvmat"
		};
	};
	class Bro_m4_gold2 : Bro_m4_gold
	{
		baseWeapon = "Bro_m4_gold2";
		displayName = "[Bro] M4A1 (Gold Alternate)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10"
		};
		hiddenSelectionsTextures[]=
		{
			"\Bro_skins\gold2\m4a1_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover_co.paa",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa",
			"a3\data_f\clear_empty.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\Bro_skins\gold2\m4a1.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magazine.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacrailcover.rvmat",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\magpulstock.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m203.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m320\data\M320.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4a1.rvmat"
		};
	};
	class Bro_m4a1_blockII_gold: rhs_weap_m4a1_blockII
	{
		baseWeapon="Bro_m4a1_blockII_gold";
		displayName="[Bro] M4A1 Block II (Gold)";
		scope = 2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"\Bro_skins\gold\m4a1b2_co.paa",
			"\Bro_skins\gold\rail_co.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\Bro_skins\gold\stock_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\Bro_skins\gold\m4a1b2.rvmat",
			"\Bro_skins\gold\rail.rvmat",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat",
			"\Bro_skins\gold\stock.rvmat"
		};
	};
	class Bro_m4a1_blockII_gold2: rhs_weap_m4a1_blockII
	{
		baseWeapon="Bro_m4a1_blockII_gold2";
		displayName="[Bro] M4A1 Block II (Gold Alternate)";
		scope = 2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"\Bro_skins\gold2\m4a1b2_co.paa",
			"\Bro_skins\gold2\rail_co.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\Bro_skins\gold2\stock_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\Bro_skins\gold2\m4a1b2.rvmat",
			"\Bro_skins\gold2\rail.rvmat",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat",
			"\Bro_skins\gold2\stock.rvmat"
		};
	};
	class Bro_m4a1_blockII_red: rhs_weap_m4a1_blockII
	{
		baseWeapon="Bro_m4a1_blockII_red";
		displayName="[Bro] M4A1 Block II (Red Tiger)";
		scope = 2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"\Bro_skins\red\m4a1b2_co.paa",
			"\Bro_skins\red\rail_co.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\Bro_skins\red\stock_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\Bro_skins\red\m4a1b2.rvmat",
			"\Bro_skins\red\rail.rvmat",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat",
			"\Bro_skins\red\stock.rvmat"
		};
	};
	class Bro_m4a1_blockII_blue: rhs_weap_m4a1_blockII
	{
		baseWeapon="Bro_m4a1_blockII_blue";
		displayName="[Bro] M4A1 Block II (Blue Tiger)";
		scope = 2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"\Bro_skins\blue\m4a1b2_co.paa",
			"\Bro_skins\blue\rail_co.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\Bro_skins\blue\stock_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\Bro_skins\red\m4a1b2.rvmat",
			"\Bro_skins\red\rail.rvmat",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat",
			"\Bro_skins\red\stock.rvmat"
		};
	};
	class Bro_m4a1_blockII_digi: rhs_weap_m4a1_blockII
	{
		baseWeapon="Bro_m4a1_blockII_digi";
		displayName="[Bro] M4A1 Block II (Digital)";
		scope = 2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"\Bro_skins\digi\m4a1b2_co.paa",
			"\Bro_skins\digi\rail_co.paa",
			"rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.paa",
			"\Bro_skins\digi\stock_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\m203_co.paa",
			"\rhsusf\addons\rhsusf_weapons\m4\data\kacleaf_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\Bro_skins\red\m4a1b2.rvmat",
			"\Bro_skins\red\rail.rvmat",
			"\rhsusf\addons\rhsusf_weapons\acc\grips\grippod\data\acc_co.rvmat",
			"\rhsusf\addons\rhsusf_weapons\m4\data\m4acc_co.rvmat",
			"\Bro_skins\red\stock.rvmat"
		};
	};
};