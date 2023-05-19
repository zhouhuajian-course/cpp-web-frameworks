/**
 *
 *  Groups.h
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#pragma once
#include <drogon/orm/Result.h>
#include <drogon/orm/Row.h>
#include <drogon/orm/Field.h>
#include <drogon/orm/SqlBinder.h>
#include <drogon/orm/Mapper.h>
#include <trantor/utils/Date.h>
#include <trantor/utils/Logger.h>
#include <json/json.h>
#include <string>
#include <memory>
#include <vector>
#include <tuple>
#include <stdint.h>
#include <iostream>

using namespace drogon::orm;
namespace drogon
{
namespace orm
{
class DbClient;
using DbClientPtr = std::shared_ptr<DbClient>;
}  // namespace orm
}  // namespace drogon
namespace drogon_model
{
namespace sqlite3
{
class Groups
{
  public:
    struct Cols
    {
        static const std::string _group_id;
        static const std::string _group_name;
        static const std::string _creater_id;
        static const std::string _create_time;
        static const std::string _inviting;
        static const std::string _inviting_user_id;
        static const std::string _avatar_id;
        static const std::string _uuu;
        static const std::string _text;
        static const std::string _avatar;
        static const std::string _is_default;
    };

    const static int primaryKeyNumber;
    const static std::string tableName;
    const static bool hasPrimaryKey;
    const static std::string primaryKeyName;
    using PrimaryKeyType = uint64_t;
    const PrimaryKeyType &getPrimaryKey() const;

    /**
     * @brief constructor
     * @param r One row of records in the SQL query result.
     * @param indexOffset Set the offset to -1 to access all columns by column
     * names, otherwise access all columns by offsets.
     * @note If the SQL is not a style of 'select * from table_name ...' (select
     * all columns by an asterisk), please set the offset to -1.
     */
    explicit Groups(const Row &r, const ssize_t indexOffset = 0) noexcept;

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     */
    explicit Groups(const Json::Value &pJson) noexcept(false);

    /**
     * @brief constructor
     * @param pJson The json object to construct a new instance.
     * @param pMasqueradingVector The aliases of table columns.
     */
    Groups(const Json::Value &pJson,
           const std::vector<std::string> &pMasqueradingVector) noexcept(false);

    Groups() = default;

    void updateByJson(const Json::Value &pJson) noexcept(false);
    void updateByMasqueradedJson(
        const Json::Value &pJson,
        const std::vector<std::string> &pMasqueradingVector) noexcept(false);
    static bool validateJsonForCreation(const Json::Value &pJson,
                                        std::string &err);
    static bool validateMasqueradedJsonForCreation(
        const Json::Value &,
        const std::vector<std::string> &pMasqueradingVector,
        std::string &err);
    static bool validateJsonForUpdate(const Json::Value &pJson,
                                      std::string &err);
    static bool validateMasqueradedJsonForUpdate(
        const Json::Value &,
        const std::vector<std::string> &pMasqueradingVector,
        std::string &err);
    static bool validJsonOfField(size_t index,
                                 const std::string &fieldName,
                                 const Json::Value &pJson,
                                 std::string &err,
                                 bool isForCreation);

    /**  For column group_id  */
    /// Get the value of the column group_id, returns the default value if the
    /// column is null
    const uint64_t &getValueOfGroupId() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getGroupId() const noexcept;

    /**  For column group_name  */
    /// Get the value of the column group_name, returns the default value if the
    /// column is null
    const std::string &getValueOfGroupName() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getGroupName() const noexcept;
    /// Set the value of the column group_name
    void setGroupName(const std::string &pGroupName) noexcept;
    void setGroupName(std::string &&pGroupName) noexcept;
    void setGroupNameToNull() noexcept;

    /**  For column creater_id  */
    /// Get the value of the column creater_id, returns the default value if the
    /// column is null
    const uint64_t &getValueOfCreaterId() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getCreaterId() const noexcept;
    /// Set the value of the column creater_id
    void setCreaterId(const uint64_t &pCreaterId) noexcept;
    void setCreaterIdToNull() noexcept;

    /**  For column create_time  */
    /// Get the value of the column create_time, returns the default value if
    /// the column is null
    const std::string &getValueOfCreateTime() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getCreateTime() const noexcept;
    /// Set the value of the column create_time
    void setCreateTime(const std::string &pCreateTime) noexcept;
    void setCreateTime(std::string &&pCreateTime) noexcept;
    void setCreateTimeToNull() noexcept;

    /**  For column inviting  */
    /// Get the value of the column inviting, returns the default value if the
    /// column is null
    const uint64_t &getValueOfInviting() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getInviting() const noexcept;
    /// Set the value of the column inviting
    void setInviting(const uint64_t &pInviting) noexcept;
    void setInvitingToNull() noexcept;

    /**  For column inviting_user_id  */
    /// Get the value of the column inviting_user_id, returns the default value
    /// if the column is null
    const uint64_t &getValueOfInvitingUserId() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<uint64_t> &getInvitingUserId() const noexcept;
    /// Set the value of the column inviting_user_id
    void setInvitingUserId(const uint64_t &pInvitingUserId) noexcept;
    void setInvitingUserIdToNull() noexcept;

    /**  For column avatar_id  */
    /// Get the value of the column avatar_id, returns the default value if the
    /// column is null
    const std::string &getValueOfAvatarId() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getAvatarId() const noexcept;
    /// Set the value of the column avatar_id
    void setAvatarId(const std::string &pAvatarId) noexcept;
    void setAvatarId(std::string &&pAvatarId) noexcept;
    void setAvatarIdToNull() noexcept;

    /**  For column uuu  */
    /// Get the value of the column uuu, returns the default value if the column
    /// is null
    const double &getValueOfUuu() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<double> &getUuu() const noexcept;
    /// Set the value of the column uuu
    void setUuu(const double &pUuu) noexcept;
    void setUuuToNull() noexcept;

    /**  For column text  */
    /// Get the value of the column text, returns the default value if the
    /// column is null
    const std::string &getValueOfText() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getText() const noexcept;
    /// Set the value of the column text
    void setText(const std::string &pText) noexcept;
    void setText(std::string &&pText) noexcept;
    void setTextToNull() noexcept;

    /**  For column avatar  */
    /// Get the value of the column avatar, returns the default value if the
    /// column is null
    const std::vector<char> &getValueOfAvatar() const noexcept;
    /// Return the column value by std::string with binary data
    std::string getValueOfAvatarAsString() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<std::vector<char>> &getAvatar() const noexcept;
    /// Set the value of the column avatar
    void setAvatar(const std::vector<char> &pAvatar) noexcept;
    void setAvatar(const std::string &pAvatar) noexcept;
    void setAvatarToNull() noexcept;

    /**  For column is_default  */
    /// Get the value of the column is_default, returns the default value if the
    /// column is null
    const bool &getValueOfIsDefault() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<bool> &getIsDefault() const noexcept;
    /// Set the value of the column is_default
    void setIsDefault(const bool &pIsDefault) noexcept;
    void setIsDefaultToNull() noexcept;

    static size_t getColumnNumber() noexcept
    {
        return 11;
    }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;
    Json::Value toMasqueradedJson(
        const std::vector<std::string> &pMasqueradingVector) const;
    /// Relationship interfaces
  private:
    friend Mapper<Groups>;
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    /// For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<uint64_t> groupId_;
    std::shared_ptr<std::string> groupName_;
    std::shared_ptr<uint64_t> createrId_;
    std::shared_ptr<std::string> createTime_;
    std::shared_ptr<uint64_t> inviting_;
    std::shared_ptr<uint64_t> invitingUserId_;
    std::shared_ptr<std::string> avatarId_;
    std::shared_ptr<double> uuu_;
    std::shared_ptr<std::string> text_;
    std::shared_ptr<std::vector<char>> avatar_;
    std::shared_ptr<bool> isDefault_;
    struct MetaData
    {
        const std::string colName_;
        const std::string colType_;
        const std::string colDatabaseType_;
        const ssize_t colLength_;
        const bool isAutoVal_;
        const bool isPrimaryKey_;
        const bool notNull_;
    };
    static const std::vector<MetaData> metaData_;
    bool dirtyFlag_[11] = {false};

  public:
    static const std::string &sqlForFindingByPrimaryKey()
    {
        static const std::string sql =
            "select * from " + tableName + " where group_id = ?";
        return sql;
    }

    static const std::string &sqlForDeletingByPrimaryKey()
    {
        static const std::string sql =
            "delete from " + tableName + " where group_id = ?";
        return sql;
    }
    std::string sqlForInserting(bool &needSelection) const
    {
        std::string sql = "insert into " + tableName + " (";
        size_t parametersCount = 0;
        needSelection = false;
        sql += "group_id,";
        ++parametersCount;
        if (dirtyFlag_[1])
        {
            sql += "group_name,";
            ++parametersCount;
        }
        if (dirtyFlag_[2])
        {
            sql += "creater_id,";
            ++parametersCount;
        }
        if (dirtyFlag_[3])
        {
            sql += "create_time,";
            ++parametersCount;
        }
        if (dirtyFlag_[4])
        {
            sql += "inviting,";
            ++parametersCount;
        }
        if (dirtyFlag_[5])
        {
            sql += "inviting_user_id,";
            ++parametersCount;
        }
        if (dirtyFlag_[6])
        {
            sql += "avatar_id,";
            ++parametersCount;
        }
        if (dirtyFlag_[7])
        {
            sql += "uuu,";
            ++parametersCount;
        }
        if (dirtyFlag_[8])
        {
            sql += "text,";
            ++parametersCount;
        }
        if (dirtyFlag_[9])
        {
            sql += "avatar,";
            ++parametersCount;
        }
        if (dirtyFlag_[10])
        {
            sql += "is_default,";
            ++parametersCount;
        }
        needSelection = true;
        if (parametersCount > 0)
        {
            sql[sql.length() - 1] = ')';
            sql += " values (";
        }
        else
            sql += ") values (";

        sql += "default,";
        if (dirtyFlag_[1])
        {
            sql.append("?,");
        }
        if (dirtyFlag_[2])
        {
            sql.append("?,");
        }
        if (dirtyFlag_[3])
        {
            sql.append("?,");
        }
        if (dirtyFlag_[4])
        {
            sql.append("?,");
        }
        if (dirtyFlag_[5])
        {
            sql.append("?,");
        }
        if (dirtyFlag_[6])
        {
            sql.append("?,");
        }
        if (dirtyFlag_[7])
        {
            sql.append("?,");
        }
        if (dirtyFlag_[8])
        {
            sql.append("?,");
        }
        if (dirtyFlag_[9])
        {
            sql.append("?,");
        }
        if (dirtyFlag_[10])
        {
            sql.append("?,");
        }
        if (parametersCount > 0)
        {
            sql.resize(sql.length() - 1);
        }
        sql.append(1, ')');
        LOG_TRACE << sql;
        return sql;
    }
};
}  // namespace sqlite3
}  // namespace drogon_model
