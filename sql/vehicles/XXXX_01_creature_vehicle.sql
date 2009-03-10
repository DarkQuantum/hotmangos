-- ----------------------------
-- Table structure for creature_vehicles
-- ----------------------------
DROP TABLE IF EXISTS `creature_vehicles`;
CREATE TABLE `creature_vehicles` (
  `entry` int(10) unsigned NOT NULL default '0' COMMENT 'creature entry',
  `vehicleID` mediumint(5) unsigned default NULL COMMENT 'look at vehicles.dbc',
  `spell1` int(10) unsigned default NULL,
  `spell2` int(10) unsigned default NULL,
  `spell3` int(10) unsigned default NULL,
  `spell4` int(10) unsigned default NULL,
  `spell5` int(10) unsigned default NULL,
  `spell6` int(10) unsigned default NULL,
  `spell7` int(10) unsigned default NULL,
  `spell8` int(10) unsigned default NULL,
  `spell9` int(10) unsigned default NULL,
  `spell10` int(10) unsigned default NULL,
  `xoffset` float unsigned default NULL,
  `yoffset` float unsigned default NULL,
  `zoffset` float unsigned default NULL,
  PRIMARY KEY  (`entry`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

