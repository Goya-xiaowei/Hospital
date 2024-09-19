/*
 Navicat Premium Data Transfer

 Source Server         : 192.168.2.110
 Source Server Type    : MySQL
 Source Server Version : 80021
 Source Host           : 192.168.2.110:3306
 Source Schema         : hospital_manage

 Target Server Type    : MySQL
 Target Server Version : 80021
 File Encoding         : 65001

 Date: 03/07/2024 12:40:11
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for drug_cmedicine_kaiyao
-- ----------------------------
DROP TABLE IF EXISTS `drug_cmedicine_kaiyao`;
CREATE TABLE `drug_cmedicine_kaiyao`  (
  `Did` int(0) NOT NULL AUTO_INCREMENT,
  `DpreId` varchar(18) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `Dcardid` varchar(18) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `Drugname` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `Drugnumber` varchar(18) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `Dstate` enum('未支付','已支付') CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `Diskaiyao` enum('已开药','未开药') CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `DJiuZhen` enum('初诊','复诊') CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `Dyizhu` varchar(200) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `DTime` date NULL DEFAULT NULL,
  PRIMARY KEY (`Did`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 27 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of drug_cmedicine_kaiyao
-- ----------------------------
INSERT INTO `drug_cmedicine_kaiyao` VALUES (18, '10608030001', '66102024060800002', '板蓝根颗粒', '1', '未支付', '未开药', '初诊', '', '2024-06-08');
INSERT INTO `drug_cmedicine_kaiyao` VALUES (19, '10608030002', '66102024060800002', '金银花口服液', '2', '未支付', '未开药', '复诊', '', '2024-06-08');
INSERT INTO `drug_cmedicine_kaiyao` VALUES (20, '10608030003', '66102024060800002', '复方氨基酸', '1', '未支付', '未开药', '复诊', '', '2024-06-08');
INSERT INTO `drug_cmedicine_kaiyao` VALUES (21, '10608070004', '66102024060800004', '复方氨基酸', '2', '未支付', '未开药', '初诊', '', '2024-06-08');
INSERT INTO `drug_cmedicine_kaiyao` VALUES (22, '10608070005', '66102024060800004', '金银花口服液', '1', '未支付', '未开药', '初诊', '', '2024-06-08');
INSERT INTO `drug_cmedicine_kaiyao` VALUES (23, '10608010006', '66102024060800003', '金银花口服液', '1', '已支付', '已开药', '复诊', '', '2024-06-08');
INSERT INTO `drug_cmedicine_kaiyao` VALUES (24, '10619010007', '66102024061900006', '板蓝根颗粒', '12', '已支付', '未开药', '初诊', '', '2024-06-19');
INSERT INTO `drug_cmedicine_kaiyao` VALUES (25, '10619010007', '66102024061900006', '复方氨基酸', '12', '已支付', '未开药', '初诊', '', '2024-06-19');
INSERT INTO `drug_cmedicine_kaiyao` VALUES (26, '10627010009', '66102024062700007', '金银花口服液', '3', '已支付', '已开药', '初诊', '', '2024-06-27');
INSERT INTO `drug_cmedicine_kaiyao` VALUES (27, '10627010009', '66102024062700007', '复方氨基酸', '3', '已支付', '已开药', '初诊', '', '2024-06-27');

-- ----------------------------
-- Table structure for drug_insert
-- ----------------------------
DROP TABLE IF EXISTS `drug_insert`;
CREATE TABLE `drug_insert`  (
  `Did` int(0) NOT NULL AUTO_INCREMENT,
  `Dname` varchar(18) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `Dtype` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `DcostName` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `Dshape` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `Dspecs` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `DinsertPrice` int(0) NULL DEFAULT NULL,
  `DsellPrice` int(0) NULL DEFAULT NULL,
  `Dstock` int(0) NULL DEFAULT NULL,
  `DstockMax` int(0) NULL DEFAULT NULL,
  `DstockMin` int(0) NULL DEFAULT NULL,
  `DproductTime` date NULL DEFAULT NULL,
  `DeffectTime` date NULL DEFAULT NULL,
  `Defficay` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  UNIQUE INDEX `idx_did`(`Did`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 10 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of drug_insert
-- ----------------------------
INSERT INTO `drug_insert` VALUES (1, '板蓝根颗粒', '中药', '中药费用', '冲剂', '袋', 8, 18, 800, 1200, 0, '2024-05-30', '2024-05-30', '清热解毒，凉血利咽。用于肺胃热盛所致的咽喉肿痛、口咽干燥、腮部肿胀；急性扁桃体炎、腮腺炎见上述证候者。');
INSERT INTO `drug_insert` VALUES (2, '感冒灵颗粒', '西药', '西药费用', '冲剂', '袋', 10, 20, 1000, 1500, 500, '2024-06-01', '2024-06-01', '用于治疗普通感冒和流行性感冒引起的发热、头痛、鼻塞、流涕等症。');
INSERT INTO `drug_insert` VALUES (3, '复方氨基酸', '中药', '中药费用', '片剂', '片', 15, 25, 1500, 2000, 1000, '2024-06-05', '2024-06-05', '用于补充人体必需氨基酸，改善营养不良状态。');
INSERT INTO `drug_insert` VALUES (4, '维生素C片', '西药', '西药费用', '片剂', '片', 5, 10, 2000, 2500, 1500, '2024-06-10', '2024-06-10', '用于预防和治疗维生素C缺乏症，如坏血病、牙龈出血等。');
INSERT INTO `drug_insert` VALUES (5, '金银花口服液', '中药', '中药费用', '液剂', '袋', 12, 22, 1200, 1800, 600, '2024-06-15', '2024-06-15', '清热解毒，用于治疗风热感冒、咽喉肿痛等症。');
INSERT INTO `drug_insert` VALUES (9, '阿莫西林胶囊', '西药', '西药费用', '片剂', '盒', 12, 18, 800, 1200, 300, '2024-05-30', '2024-05-30', '通常是用于敏感菌（不产 β- 内酰胺酶菌株）所致的感染');
INSERT INTO `drug_insert` VALUES (10, '敌敌畏', '中药', '中药费用', '片剂', '克', 10, 20, 100, 1000, 0, '2024-06-19', '2024-06-19', '');

-- ----------------------------
-- Table structure for idcard
-- ----------------------------
DROP TABLE IF EXISTS `idcard`;
CREATE TABLE `idcard`  (
  `KId` int(0) NOT NULL AUTO_INCREMENT,
  `Card` varchar(18) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `Name` varchar(20) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `Sex` varchar(2) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `Age` int(0) NULL DEFAULT NULL,
  `Birthday` datetime(0) NULL DEFAULT NULL,
  `Address` varchar(50) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `Phone` varchar(11) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `Nation` varchar(20) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `Cultrue` varchar(20) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `Marriage` varchar(4) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `Work` varchar(10) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `Postcode` varchar(6) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `IdcardNo` varchar(18) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  PRIMARY KEY (`KId`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 21 CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of idcard
-- ----------------------------
INSERT INTO `idcard` VALUES (15, '66102024060800001', '吴小伟', '男', 22, '2002-03-04 00:00:00', '贵州省毕节市', '1001001001', '汉族', '本科', '未婚', '学生', '553300', '522426200009282000');
INSERT INTO `idcard` VALUES (16, '66102024060800002', '王佳鑫', '女', 23, '2024-06-08 00:00:00', '杭州市西湖区黄龙路88号', '17864754473', '藏族', '大专', '未婚', '学生', '567744', '140106200107020628');
INSERT INTO `idcard` VALUES (17, '66102024060800003', '张舜源', '女', 12, '2011-11-03 00:00:00', '广州市天河区天河路123号', '1876535530', '汉族', '小学', '未婚', '学生', '553300', '370102201111030054');
INSERT INTO `idcard` VALUES (18, '66102024060800004', '李广生', '女', 66, '1963-03-25 00:00:00', '杭州市西湖区天目山路159号', '17844234229', '回族', '高中', '已婚', '工人', '553322', '370625196304250035');
INSERT INTO `idcard` VALUES (19, '66102024061700005', '吴为', '男', 24, '2000-06-03 00:00:00', '贵阳', '1234567895', '汉族', '文盲', '未婚', '学生', '553300', '522422200006037532');
INSERT INTO `idcard` VALUES (20, '66102024061900006', '威威', '男', 11, '2024-06-19 00:00:00', '嗡嗡嗡', '1446544', '汉族', '小学', '未婚', '学生', '5533', '52022522111312331');
INSERT INTO `idcard` VALUES (21, '66102024062700007', '吴伟', '男', 23, '2024-08-29 00:00:00', '过is收到就很烦', '11', '汉族', '文盲', '未婚', '学生', '520', '52242620020309732');

-- ----------------------------
-- Table structure for register
-- ----------------------------
DROP TABLE IF EXISTS `register`;
CREATE TABLE `register`  (
  `id` int(0) NOT NULL AUTO_INCREMENT,
  `KId` varchar(18) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `IdCard` varchar(18) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `IdType` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `GuaDanFei` int(0) NULL DEFAULT NULL,
  `OtherFei` int(0) NULL DEFAULT NULL,
  `SectionRoom` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `Doctor` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `isVisitDoctor` enum('是','否') CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL DEFAULT '否',
  `ReristerTime` date NULL DEFAULT NULL,
  `SeeDoctorTime` date NULL DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE,
  UNIQUE INDEX `KId_UNIQUE`(`KId`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 15 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of register
-- ----------------------------
INSERT INTO `register` VALUES (9, '66012024060800001', '66102024060800001', '普通号', 8, 10, '内科', '欧阳锋', '是', '2024-06-08', '2024-06-08');
INSERT INTO `register` VALUES (10, '66012024060800002', '66102024060800002', '普通号', 10, 0, '妇产科', '独孤求败', '否', '2024-06-08', '2024-06-08');
INSERT INTO `register` VALUES (11, '66012024060800003', '66102024060800003', '普通号', 8, 0, '内科', '萧炎', '是', '2024-06-08', '2024-06-08');
INSERT INTO `register` VALUES (12, '66012024060800004', '66102024060800004', '专家号', 10, 0, '妇产科', '萧灵儿', '是', '2024-06-08', '2024-06-08');
INSERT INTO `register` VALUES (13, '66012024061700005', '66102024061700005', '普通号', 8, 0, '内科', '李四', '否', '2024-06-17', '2024-06-17');
INSERT INTO `register` VALUES (14, '66012024061900006', '66102024061900006', '普通号', 8, 1, '内科', '欧阳锋', '是', '2024-06-19', '2024-06-19');
INSERT INTO `register` VALUES (15, '66012024062700007', '66102024062700007', '普通号', 8, 0, '内科', '欧阳锋', '是', '2024-06-27', '2024-06-27');

-- ----------------------------
-- Table structure for sectionroom
-- ----------------------------
DROP TABLE IF EXISTS `sectionroom`;
CREATE TABLE `sectionroom`  (
  `Sid` int(0) NOT NULL AUTO_INCREMENT,
  `Sname` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `Saddr` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `Sprice` double NULL DEFAULT NULL,
  PRIMARY KEY (`Sid`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 16 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of sectionroom
-- ----------------------------
INSERT INTO `sectionroom` VALUES (1, '内科', '3楼内科室', 8);
INSERT INTO `sectionroom` VALUES (3, '外科', '3楼外科室', 8.8);
INSERT INTO `sectionroom` VALUES (7, '妇产科', '4楼妇产科', 10);
INSERT INTO `sectionroom` VALUES (8, '五官科', '6楼五官科', 12);
INSERT INTO `sectionroom` VALUES (9, '骨科', '7楼骨科', 12);
INSERT INTO `sectionroom` VALUES (10, '牙科', '医技楼3楼', 15);
INSERT INTO `sectionroom` VALUES (11, '神经科', '综合楼2楼', 12);
INSERT INTO `sectionroom` VALUES (12, '口腔科', '门诊楼3楼', 6);
INSERT INTO `sectionroom` VALUES (13, '皮肤科', '综合楼4楼', 15);
INSERT INTO `sectionroom` VALUES (14, '传染科', '综合楼6楼', 22);
INSERT INTO `sectionroom` VALUES (15, '中医科', '中医楼', 5);
INSERT INTO `sectionroom` VALUES (16, '儿科', '医技楼5楼', 5);

-- ----------------------------
-- Table structure for sectionroomson
-- ----------------------------
DROP TABLE IF EXISTS `sectionroomson`;
CREATE TABLE `sectionroomson`  (
  `SonId` int(0) NOT NULL AUTO_INCREMENT,
  `Sname` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `SonName` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  PRIMARY KEY (`SonId`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 3 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of sectionroomson
-- ----------------------------
INSERT INTO `sectionroomson` VALUES (1, '外科', '疝气');
INSERT INTO `sectionroomson` VALUES (3, '骨科', '手骨折');

-- ----------------------------
-- Table structure for users
-- ----------------------------
DROP TABLE IF EXISTS `users`;
CREATE TABLE `users`  (
  `Uid` int(0) NOT NULL AUTO_INCREMENT,
  `Uname` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `name` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `Pwd` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `Sex` char(2) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `Address` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `Phone` char(11) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `Type` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `SectionRoom` varchar(10) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `Money` double NULL DEFAULT NULL,
  `Peodom` varchar(500) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `Information` varchar(4000) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  PRIMARY KEY (`Uid`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 38 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of users
-- ----------------------------
INSERT INTO `users` VALUES (27, 'admin', '顾凤鸣', '123', '男', '贵州省赫章县', '18212604923', '管理员', '外科', 12.8, '药库管理; 药品入库; 药品查看; 药品出库; 药品报价; 门诊收费; 查找; 门诊结账; 药房管理; 查看检药单; 查看已发药; 财务管理; 营业统计; 员工管理; 工资分配; 病房添加; 添加; 查找病人; 出院结算; 删除; 费用记账; 交款查看; 查看病房; 住院登记; 住院管理; 门诊管理; 病人挂号; 代办医疗卡; 退号; 挂号表查询; 医疗卡补办; 系统管理; 权限管理; 门诊单设置; 员工添加; 住院单设置; 数据恢复; 挂号单设置; 数据库备份; 科室管理; 门诊医生; 选择病人; 写病历; 开中药; 开西药', NULL);
INSERT INTO `users` VALUES (28, '张三', '张三', '123', '男', '北京市朝阳区', '88888888', '医生', '妇产科', 8.8, '门诊收费;查找;门诊结账;财务管理;营业统计;员工管理;工资分配;病房添加;添加;查找病人;出院结算;删除;费用记账;交款查看;查看病房;住院登记;住院管理;门诊管理;病人挂号;代办医疗卡;退号;挂号表查询;医疗卡补办;系统管理;权限管理;门诊单设置;员工添加;住院单设置;数据恢复;挂号单设置;数据库备份;科室管理;门诊医生;选择病人;写病历;开中药;开西', NULL);
INSERT INTO `users` VALUES (29, '李四', '李四', '123', '女', '贵州省毕节市', '88888888', '医生', '内科', 8.8, '门诊收费;查找;门诊结账;财务管理;营业统计;员工管理;工资分配;病房添加;添加;查找病人;出院结算;删除;费用记账;交款查看;查看病房;住院登记;住院管理;门诊管理;病人挂号;代办医疗卡;退号;挂号表查询;医疗卡补办;系统管理;权限管理;门诊单设置;员工添加;住院单设置;数据恢复;挂号单设置;数据库备份;科室管理;门诊医生;选择病人;写病历;开中药;开西', NULL);
INSERT INTO `users` VALUES (30, '王五', '王五', '123', '男', '贵州省毕节市', '66666666', '医生', '五官科', 8.8, '门诊收费;查找;门诊结账;财务管理;营业统计;员工管理;工资分配;病房添加;添加;查找病人;出院结算;删除;费用记账;交款查看;查看病房;住院登记;住院管理;门诊管理;病人挂号;代办医疗卡;退号;挂号表查询;医疗卡补办;系统管理;权限管理;门诊单设置;员工添加;住院单设置;数据恢复;挂号单设置;数据库备份;科室管理;门诊医生;选择病人;写病历;开中药;开西', NULL);
INSERT INTO `users` VALUES (31, '欧阳锋', '欧阳锋', '123', '男', '中原', '8208208820', '医生', '内科', 8.8, '门诊收费;查找;门诊结账;财务管理;营业统计;员工管理;工资分配;病房添加;添加;查找病人;出院结算;删除;费用记账;交款查看;查看病房;住院登记;住院管理;门诊管理;病人挂号;代办医疗卡;退号;挂号表查询;医疗卡补办;系统管理;权限管理;门诊单设置;员工添加;住院单设置;数据恢复;挂号单设置;数据库备份;科室管理;门诊医生;选择病人;写病历;开中药;开西', NULL);
INSERT INTO `users` VALUES (32, '独孤求败', '独孤求败', '123', '男', '中原', '12138', '医生', '妇产科', 12, '门诊收费;查找;门诊结账;财务管理;营业统计;员工管理;工资分配;病房添加;添加;查找病人;出院结算;删除;费用记账;交款查看;查看病房;住院登记;住院管理;门诊管理;病人挂号;代办医疗卡;退号;挂号表查询;医疗卡补办;系统管理;权限管理;门诊单设置;员工添加;住院单设置;数据恢复;挂号单设置;数据库备份;科室管理;门诊医生;选择病人;写病历;开中药;开西', NULL);
INSERT INTO `users` VALUES (33, '萧炎', '萧炎', '123', '男', '中州', '1782234355', '医生', '内科', 12, '门诊收费;查找;门诊结账;财务管理;营业统计;员工管理;工资分配;病房添加;添加;查找病人;出院结算;删除;费用记账;交款查看;查看病房;住院登记;住院管理;门诊管理;病人挂号;代办医疗卡;退号;挂号表查询;医疗卡补办;系统管理;权限管理;门诊单设置;员工添加;住院单设置;数据恢复;挂号单设置;数据库备份;科室管理;门诊医生;选择病人;写病历;开中药;开西', NULL);
INSERT INTO `users` VALUES (34, '萧灵儿', '萧灵儿', '123', '女', '中州', '1782234355', '医生', '妇产科', 12, '门诊收费;查找;门诊结账;财务管理;营业统计;员工管理;工资分配;病房添加;添加;查找病人;出院结算;删除;费用记账;交款查看;查看病房;住院登记;住院管理;门诊管理;病人挂号;代办医疗卡;退号;挂号表查询;医疗卡补办;系统管理;权限管理;门诊单设置;员工添加;住院单设置;数据恢复;挂号单设置;数据库备份;科室管理;门诊医生;选择病人;写病历;开中药;开西', NULL);
INSERT INTO `users` VALUES (35, '欧亚', '欧亚', '123', '男', '中州', '1782234355', '医生', '骨科', 12, '门诊收费;查找;门诊结账;财务管理;营业统计;员工管理;工资分配;病房添加;添加;查找病人;出院结算;删除;费用记账;交款查看;查看病房;住院登记;住院管理;门诊管理;病人挂号;代办医疗卡;退号;挂号表查询;医疗卡补办;系统管理;权限管理;门诊单设置;员工添加;住院单设置;数据恢复;挂号单设置;数据库备份;科室管理;门诊医生;选择病人;写病历;开中药;开西', NULL);
INSERT INTO `users` VALUES (36, '康师傅', '康师傅', '123', '男', '重庆市', '4006188080', '医生', '牙科', 10, '门诊收费;查找;门诊结账;财务管理;营业统计;员工管理;工资分配;病房添加;添加;查找病人;出院结算;删除;费用记账;交款查看;查看病房;住院登记;住院管理;门诊管理;病人挂号;代办医疗卡;退号;挂号表查询;医疗卡补办;系统管理;权限管理;门诊单设置;员工添加;住院单设置;数据恢复;挂号单设置;数据库备份;科室管理;门诊医生;选择病人;写病历;开中药;开西', NULL);

-- ----------------------------
-- Table structure for userstype
-- ----------------------------
DROP TABLE IF EXISTS `userstype`;
CREATE TABLE `userstype`  (
  `Tid` int(0) NOT NULL AUTO_INCREMENT,
  `Type` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `Peodom` varchar(500) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  PRIMARY KEY (`Tid`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 27 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of userstype
-- ----------------------------
INSERT INTO `userstype` VALUES (24, '管理员', '药库管理; 药品入库; 药品查看; 药品出库; 药品报价; 门诊收费; 查找; 门诊结账; 药房管理; 查看检药单; 查看已发药; 财务管理; 营业统计; 员工管理; 工资分配; 病房添加; 添加; 查找病人; 出院结算; 删除; 费用记账; 交款查看; 查看病房; 住院登记; 住院管理; 门诊管理; 病人挂号; 代办医疗卡; 退号; 挂号表查询; 医疗卡补办; 系统管理; 权限管理; 门诊单设置; 员工添加; 住院单设置; 数据恢复; 挂号单设置; 数据库备份; 科室管理; 门诊医生; 选择病人; 写病历; 开中药; 开西药');
INSERT INTO `userstype` VALUES (25, '医生', '门诊收费; 查找; 门诊结账; 财务管理; 营业统计; 员工管理; 工资分配; 病房添加; 添加; 查找病人; 出院结算; 删除; 费用记账; 交款查看; 查看病房; 住院登记; 住院管理; 门诊管理; 病人挂号; 代办医疗卡; 退号; 挂号表查询; 医疗卡补办; 系统管理; 权限管理; 门诊单设置; 员工添加; 住院单设置; 数据恢复; 挂号单设置; 数据库备份; 科室管理; 门诊医生; 选择病人; 写病历; 开中药; 开西药');
INSERT INTO `userstype` VALUES (26, '护士', '药房管理; 查看检药单; 查看已发药; 病房添加; 添加; 查找病人; 出院结算; 删除; 费用记账; 交款查看; 查看病房; 住院登记; 住院管理; 门诊管理; 病人挂号; 代办医疗卡; 退号; 挂号表查询; 医疗卡补办; 系统管理; 权限管理; 门诊单设置; 员工添加; 住院单设置; 数据恢复; 挂号单设置; 数据库备份; 科室管理');
INSERT INTO `userstype` VALUES (27, '主任', '财务管理; 营业统计; 员工管理; 工资分配; 门诊管理; 病人挂号; 代办医疗卡; 退号; 挂号表查询; 医疗卡补办; 门诊医生; 选择病人; 写病历; 开中药; 开西药');

-- ----------------------------
-- Table structure for ward_beds
-- ----------------------------
DROP TABLE IF EXISTS `ward_beds`;
CREATE TABLE `ward_beds`  (
  `id` int(0) NOT NULL AUTO_INCREMENT,
  `room_number` varchar(18) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `bed_number` varchar(18) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `bed_status` enum('空','已住') CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `patient_cardid` varchar(18) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `bed_type` varchar(18) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 12 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of ward_beds
-- ----------------------------
INSERT INTO `ward_beds` VALUES (3, '6610001001', '661000100101', '空', NULL, '');
INSERT INTO `ward_beds` VALUES (4, '6610001001', '661000100102', '空', NULL, '');
INSERT INTO `ward_beds` VALUES (5, '6610001001', '661000100103', '空', NULL, '');
INSERT INTO `ward_beds` VALUES (6, '6610003001', '661000300201', '空', '', '');
INSERT INTO `ward_beds` VALUES (7, '6610003001', '661000300202', '空', '', '');
INSERT INTO `ward_beds` VALUES (8, '6610001003', '661000100301', '空', NULL, '');
INSERT INTO `ward_beds` VALUES (9, '6610007004', '661000700401', '空', NULL, '');
INSERT INTO `ward_beds` VALUES (10, '6610007004', '661000700402', '空', NULL, '');
INSERT INTO `ward_beds` VALUES (11, '6610007004', '661000700403', '空', NULL, '');
INSERT INTO `ward_beds` VALUES (12, '6610007004', '661000700404', '空', NULL, '');

-- ----------------------------
-- Table structure for ward_info
-- ----------------------------
DROP TABLE IF EXISTS `ward_info`;
CREATE TABLE `ward_info`  (
  `ward_id` int(0) NOT NULL AUTO_INCREMENT,
  `ward_section_room` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `ward_type` varchar(50) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `address` varchar(100) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL,
  `price` decimal(10, 2) NOT NULL,
  `ward_number` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `bed_count` int(0) NOT NULL,
  PRIMARY KEY (`ward_id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 7 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of ward_info
-- ----------------------------
INSERT INTO `ward_info` VALUES (4, '内科', '普通病房', '3楼内科室', 100.00, '6610001001', 3);
INSERT INTO `ward_info` VALUES (5, '外科', 'VIP病房', '3楼外科室', 100.00, '6610003001', 2);
INSERT INTO `ward_info` VALUES (6, '内科', '重症监护室', '3楼内科室', 100.00, '6610001003', 1);
INSERT INTO `ward_info` VALUES (7, '妇产科', '普通病房', '4楼妇产科', 100.00, '6610007004', 4);

SET FOREIGN_KEY_CHECKS = 1;
