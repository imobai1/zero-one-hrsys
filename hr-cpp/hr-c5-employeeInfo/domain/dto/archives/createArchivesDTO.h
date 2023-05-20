#pragma once
#ifndef _CREATE_ARCHIVES_DTO
#define _CREATE_ARCHIVES_DTO

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)
/**
* 新建档案
*/
class CreateArchivesDTO : public oatpp::DTO
{
	DTO_INIT(CreateArchivesDTO, DTO);
	
	// 档案编号，
	DTO_FIELD(String, archivesNo);
	DTO_FIELD_INFO(archivesNo) {
		info->description = ZH_WORDS_GETTER("dto.field.archivesNo");
	}

	// 管理单位，
	DTO_FIELD(String, managementUnits);
	DTO_FIELD_INFO(managementUnits) {
		info->description = ZH_WORDS_GETTER("dto.field.managementUnits");
	}

	//是否新建档
	DTO_FIELD(String, isNewArchive);
	DTO_FIELD_INFO(isNewArchive) {
		info->description = ZH_WORDS_GETTER("dto.filed.isNewArchive");
	}

	// 档案保管地，
	DTO_FIELD(String, DABGD);
	DTO_FIELD_INFO(DABGD) {
		info->description = ZH_WORDS_GETTER("dto.field.DABGD");
	}

	// 档案室，
	DTO_FIELD(String, archivesCenterName);
	DTO_FIELD_INFO(archivesCenterName) {
		info->description = ZH_WORDS_GETTER("dto.field.archivesCenterName");
	}

	// 档案状态，
	DTO_FIELD(String, DAZT);
	DTO_FIELD_INFO(DAZT) {
		info->description = ZH_WORDS_GETTER("dto.field.DAZT");
	}

	// 员工编号，
	DTO_FIELD(String, YGBH);
	DTO_FIELD_INFO(YGBH) {
		info->description = ZH_WORDS_GETTER("dto.field.YGBH");
	}

	// 员工姓名，
	DTO_FIELD(String, PimPersonName);
	DTO_FIELD_INFO(PimPersonName) {
		info->description = ZH_WORDS_GETTER("dto.field.PimPersonName");
	}

	// 所属单位，
	DTO_FIELD(String, ORMORGName);
	DTO_FIELD_INFO(ORMORGName) {
		info->description = ZH_WORDS_GETTER("dto.field.ORMORGName");
	}

	// 档案学历，
	DTO_FIELD(String, DAXL);
	DTO_FIELD_INFO(DAXL) {
		info->description = ZH_WORDS_GETTER("dto.field.DAXL");
	}

	// 档案出生日期，
	DTO_FIELD(String, CSRQ);
	DTO_FIELD_INFO(CSRQ) {
		info->description = ZH_WORDS_GETTER("dto.field.CSRQ");
	}

	// 档案入党时间，
	DTO_FIELD(String, JoinPartyDate);
	DTO_FIELD_INFO(JoinPartyDate) {
		info->description = ZH_WORDS_GETTER("dto.field.JoinPartyDate");
	}

	// 档案参加工作时间，
	DTO_FIELD(String, DACJGZSJ);
	DTO_FIELD_INFO(DACJGZSJ) {
		info->description = ZH_WORDS_GETTER("dto.field.DACJGZSJ");
	}

	// 档案状态，
	DTO_FIELD(String, DAZT);
	DTO_FIELD_INFO(DAZT) {
		info->description = ZH_WORDS_GETTER("dto.field.DAZT");
	}

	// 备注
	DTO_FIELD(String, BZ);
	DTO_FIELD_INFO(BZ) {
		info->description = ZH_WORDS_GETTER("dto.field.BZ");
	}

};

#include OATPP_CODEGEN_END(DTO)
#endif // !_CREATE_ARCHIVES_DTO
