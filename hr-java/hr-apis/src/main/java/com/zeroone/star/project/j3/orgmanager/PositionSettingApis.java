package com.zeroone.star.project.j3.orgmanager;
import com.zeroone.star.project.j3.dto.AddPositionDTO;
import com.zeroone.star.project.j3.dto.DeletePositionDTO;
import com.zeroone.star.project.vo.JsonVO;

/**
 * <p>
 * 描述：添加职务模块接口定义
 * </p>
 * <p>版权：&copy;01星球</p>
 * <p>地址：01星球总部</p>
 *
 * @author tomcatcc
 * @version 1.0.0
 */
public interface PositionSettingApis {

    /**
     *单个职务添加
     * @param addPositionDTO
     * @return 状态码
     */
    JsonVO<Integer> AddPosition(AddPositionDTO addPositionDTO);


    /**
     *批量职务添加
     * @param addPositionDTO
     * @return 状态码
     */
    JsonVO<Integer> AddPositions(AddPositionDTO addPositionDTO);


	/**
	* 职务删除
     * @param deletePositionDTO
     * @return 状态码
     */
    JsonVO<Integer> DeletePosition(DeletePositionDTO deletePositionDTO);

}
