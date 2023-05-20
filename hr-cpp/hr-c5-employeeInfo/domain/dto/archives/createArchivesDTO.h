#pragma once
#ifndef _CREATE_ARCHIVES_DTO
#define _CREATE_ARCHIVES_DTO

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)
/**
* �½�����
*/
class CreateArchivesDTO : public oatpp::DTO
{
	DTO_INIT(CreateArchivesDTO, DTO);
	
	// ������ţ�
	DTO_FIELD(String, archivesNo);
	DTO_FIELD_INFO(archivesNo) {
		info->description = ZH_WORDS_GETTER("dto.field.archivesNo");
	}

	// ����λ��
	DTO_FIELD(String, managementUnits);
	DTO_FIELD_INFO(managementUnits) {
		info->description = ZH_WORDS_GETTER("dto.field.managementUnits");
	}

	//�Ƿ��½���
	DTO_FIELD(String, isNewArchive);
	DTO_FIELD_INFO(isNewArchive) {
		info->description = ZH_WORDS_GETTER("dto.filed.isNewArchive");
	}

	// �������ܵأ�
	DTO_FIELD(String, DABGD);
	DTO_FIELD_INFO(DABGD) {
		info->description = ZH_WORDS_GETTER("dto.field.DABGD");
	}

	// �����ң�
	DTO_FIELD(String, archivesCenterName);
	DTO_FIELD_INFO(archivesCenterName) {
		info->description = ZH_WORDS_GETTER("dto.field.archivesCenterName");
	}

	// ����״̬��
	DTO_FIELD(String, DAZT);
	DTO_FIELD_INFO(DAZT) {
		info->description = ZH_WORDS_GETTER("dto.field.DAZT");
	}

	// Ա����ţ�
	DTO_FIELD(String, YGBH);
	DTO_FIELD_INFO(YGBH) {
		info->description = ZH_WORDS_GETTER("dto.field.YGBH");
	}

	// Ա��������
	DTO_FIELD(String, PimPersonName);
	DTO_FIELD_INFO(PimPersonName) {
		info->description = ZH_WORDS_GETTER("dto.field.PimPersonName");
	}

	// ������λ��
	DTO_FIELD(String, ORMORGName);
	DTO_FIELD_INFO(ORMORGName) {
		info->description = ZH_WORDS_GETTER("dto.field.ORMORGName");
	}

	// ����ѧ����
	DTO_FIELD(String, DAXL);
	DTO_FIELD_INFO(DAXL) {
		info->description = ZH_WORDS_GETTER("dto.field.DAXL");
	}

	// �����������ڣ�
	DTO_FIELD(String, CSRQ);
	DTO_FIELD_INFO(CSRQ) {
		info->description = ZH_WORDS_GETTER("dto.field.CSRQ");
	}

	// �����뵳ʱ�䣬
	DTO_FIELD(String, JoinPartyDate);
	DTO_FIELD_INFO(JoinPartyDate) {
		info->description = ZH_WORDS_GETTER("dto.field.JoinPartyDate");
	}

	// �����μӹ���ʱ�䣬
	DTO_FIELD(String, DACJGZSJ);
	DTO_FIELD_INFO(DACJGZSJ) {
		info->description = ZH_WORDS_GETTER("dto.field.DACJGZSJ");
	}

	// ����״̬��
	DTO_FIELD(String, DAZT);
	DTO_FIELD_INFO(DAZT) {
		info->description = ZH_WORDS_GETTER("dto.field.DAZT");
	}

	// ��ע
	DTO_FIELD(String, BZ);
	DTO_FIELD_INFO(BZ) {
		info->description = ZH_WORDS_GETTER("dto.field.BZ");
	}

};

#include OATPP_CODEGEN_END(DTO)
#endif // !_CREATE_ARCHIVES_DTO
