/***********************************************************************************************************************************
Command and Option Configuration

Automatically generated by Build.pm -- do not modify directly.
***********************************************************************************************************************************/
#ifndef CONFIG_CONFIG_AUTO_H
#define CONFIG_CONFIG_AUTO_H

/***********************************************************************************************************************************
Command constants
***********************************************************************************************************************************/
#define CFGCMD_ARCHIVE_GET                                          "archive-get"
    STRING_DECLARE(CFGCMD_ARCHIVE_GET_STR);
#define CFGCMD_ARCHIVE_PUSH                                         "archive-push"
    STRING_DECLARE(CFGCMD_ARCHIVE_PUSH_STR);
#define CFGCMD_BACKUP                                               "backup"
    STRING_DECLARE(CFGCMD_BACKUP_STR);
#define CFGCMD_CHECK                                                "check"
    STRING_DECLARE(CFGCMD_CHECK_STR);
#define CFGCMD_EXPIRE                                               "expire"
    STRING_DECLARE(CFGCMD_EXPIRE_STR);
#define CFGCMD_HELP                                                 "help"
    STRING_DECLARE(CFGCMD_HELP_STR);
#define CFGCMD_INFO                                                 "info"
    STRING_DECLARE(CFGCMD_INFO_STR);
#define CFGCMD_REPO_CREATE                                          "repo-create"
    STRING_DECLARE(CFGCMD_REPO_CREATE_STR);
#define CFGCMD_REPO_GET                                             "repo-get"
    STRING_DECLARE(CFGCMD_REPO_GET_STR);
#define CFGCMD_REPO_LS                                              "repo-ls"
    STRING_DECLARE(CFGCMD_REPO_LS_STR);
#define CFGCMD_REPO_PUT                                             "repo-put"
    STRING_DECLARE(CFGCMD_REPO_PUT_STR);
#define CFGCMD_REPO_RM                                              "repo-rm"
    STRING_DECLARE(CFGCMD_REPO_RM_STR);
#define CFGCMD_RESTORE                                              "restore"
    STRING_DECLARE(CFGCMD_RESTORE_STR);
#define CFGCMD_STANZA_CREATE                                        "stanza-create"
    STRING_DECLARE(CFGCMD_STANZA_CREATE_STR);
#define CFGCMD_STANZA_DELETE                                        "stanza-delete"
    STRING_DECLARE(CFGCMD_STANZA_DELETE_STR);
#define CFGCMD_STANZA_UPGRADE                                       "stanza-upgrade"
    STRING_DECLARE(CFGCMD_STANZA_UPGRADE_STR);
#define CFGCMD_START                                                "start"
    STRING_DECLARE(CFGCMD_START_STR);
#define CFGCMD_STOP                                                 "stop"
    STRING_DECLARE(CFGCMD_STOP_STR);
#define CFGCMD_VERIFY                                               "verify"
    STRING_DECLARE(CFGCMD_VERIFY_STR);
#define CFGCMD_VERSION                                              "version"
    STRING_DECLARE(CFGCMD_VERSION_STR);

#define CFG_COMMAND_TOTAL                                           20

/***********************************************************************************************************************************
Option group constants
***********************************************************************************************************************************/
#define CFG_OPTION_GROUP_TOTAL                                      2

/***********************************************************************************************************************************
Option constants
***********************************************************************************************************************************/
#define CFGOPT_ARCHIVE_ASYNC                                        "archive-async"
    STRING_DECLARE(CFGOPT_ARCHIVE_ASYNC_STR);
#define CFGOPT_ARCHIVE_CHECK                                        "archive-check"
    STRING_DECLARE(CFGOPT_ARCHIVE_CHECK_STR);
#define CFGOPT_ARCHIVE_COPY                                         "archive-copy"
    STRING_DECLARE(CFGOPT_ARCHIVE_COPY_STR);
#define CFGOPT_ARCHIVE_GET_QUEUE_MAX                                "archive-get-queue-max"
    STRING_DECLARE(CFGOPT_ARCHIVE_GET_QUEUE_MAX_STR);
#define CFGOPT_ARCHIVE_MODE                                         "archive-mode"
    STRING_DECLARE(CFGOPT_ARCHIVE_MODE_STR);
#define CFGOPT_ARCHIVE_PUSH_QUEUE_MAX                               "archive-push-queue-max"
    STRING_DECLARE(CFGOPT_ARCHIVE_PUSH_QUEUE_MAX_STR);
#define CFGOPT_ARCHIVE_TIMEOUT                                      "archive-timeout"
    STRING_DECLARE(CFGOPT_ARCHIVE_TIMEOUT_STR);
#define CFGOPT_BACKUP_STANDBY                                       "backup-standby"
    STRING_DECLARE(CFGOPT_BACKUP_STANDBY_STR);
#define CFGOPT_BUFFER_SIZE                                          "buffer-size"
    STRING_DECLARE(CFGOPT_BUFFER_SIZE_STR);
#define CFGOPT_CHECKSUM_PAGE                                        "checksum-page"
    STRING_DECLARE(CFGOPT_CHECKSUM_PAGE_STR);
#define CFGOPT_CIPHER_PASS                                          "cipher-pass"
    STRING_DECLARE(CFGOPT_CIPHER_PASS_STR);
#define CFGOPT_CMD_SSH                                              "cmd-ssh"
    STRING_DECLARE(CFGOPT_CMD_SSH_STR);
#define CFGOPT_COMPRESS                                             "compress"
    STRING_DECLARE(CFGOPT_COMPRESS_STR);
#define CFGOPT_COMPRESS_LEVEL                                       "compress-level"
    STRING_DECLARE(CFGOPT_COMPRESS_LEVEL_STR);
#define CFGOPT_COMPRESS_LEVEL_NETWORK                               "compress-level-network"
    STRING_DECLARE(CFGOPT_COMPRESS_LEVEL_NETWORK_STR);
#define CFGOPT_COMPRESS_TYPE                                        "compress-type"
    STRING_DECLARE(CFGOPT_COMPRESS_TYPE_STR);
#define CFGOPT_CONFIG                                               "config"
    STRING_DECLARE(CFGOPT_CONFIG_STR);
#define CFGOPT_CONFIG_INCLUDE_PATH                                  "config-include-path"
    STRING_DECLARE(CFGOPT_CONFIG_INCLUDE_PATH_STR);
#define CFGOPT_CONFIG_PATH                                          "config-path"
    STRING_DECLARE(CFGOPT_CONFIG_PATH_STR);
#define CFGOPT_DB_INCLUDE                                           "db-include"
    STRING_DECLARE(CFGOPT_DB_INCLUDE_STR);
#define CFGOPT_DB_TIMEOUT                                           "db-timeout"
    STRING_DECLARE(CFGOPT_DB_TIMEOUT_STR);
#define CFGOPT_DELTA                                                "delta"
    STRING_DECLARE(CFGOPT_DELTA_STR);
#define CFGOPT_DRY_RUN                                              "dry-run"
    STRING_DECLARE(CFGOPT_DRY_RUN_STR);
#define CFGOPT_EXCLUDE                                              "exclude"
    STRING_DECLARE(CFGOPT_EXCLUDE_STR);
#define CFGOPT_EXEC_ID                                              "exec-id"
    STRING_DECLARE(CFGOPT_EXEC_ID_STR);
#define CFGOPT_EXPIRE_AUTO                                          "expire-auto"
    STRING_DECLARE(CFGOPT_EXPIRE_AUTO_STR);
#define CFGOPT_FILTER                                               "filter"
    STRING_DECLARE(CFGOPT_FILTER_STR);
#define CFGOPT_FORCE                                                "force"
    STRING_DECLARE(CFGOPT_FORCE_STR);
#define CFGOPT_IGNORE_MISSING                                       "ignore-missing"
    STRING_DECLARE(CFGOPT_IGNORE_MISSING_STR);
#define CFGOPT_IO_TIMEOUT                                           "io-timeout"
    STRING_DECLARE(CFGOPT_IO_TIMEOUT_STR);
#define CFGOPT_JOB_RETRY                                            "job-retry"
    STRING_DECLARE(CFGOPT_JOB_RETRY_STR);
#define CFGOPT_JOB_RETRY_INTERVAL                                   "job-retry-interval"
    STRING_DECLARE(CFGOPT_JOB_RETRY_INTERVAL_STR);
#define CFGOPT_LINK_ALL                                             "link-all"
    STRING_DECLARE(CFGOPT_LINK_ALL_STR);
#define CFGOPT_LINK_MAP                                             "link-map"
    STRING_DECLARE(CFGOPT_LINK_MAP_STR);
#define CFGOPT_LOCK_PATH                                            "lock-path"
    STRING_DECLARE(CFGOPT_LOCK_PATH_STR);
#define CFGOPT_LOG_LEVEL_CONSOLE                                    "log-level-console"
    STRING_DECLARE(CFGOPT_LOG_LEVEL_CONSOLE_STR);
#define CFGOPT_LOG_LEVEL_FILE                                       "log-level-file"
    STRING_DECLARE(CFGOPT_LOG_LEVEL_FILE_STR);
#define CFGOPT_LOG_LEVEL_STDERR                                     "log-level-stderr"
    STRING_DECLARE(CFGOPT_LOG_LEVEL_STDERR_STR);
#define CFGOPT_LOG_PATH                                             "log-path"
    STRING_DECLARE(CFGOPT_LOG_PATH_STR);
#define CFGOPT_LOG_SUBPROCESS                                       "log-subprocess"
    STRING_DECLARE(CFGOPT_LOG_SUBPROCESS_STR);
#define CFGOPT_LOG_TIMESTAMP                                        "log-timestamp"
    STRING_DECLARE(CFGOPT_LOG_TIMESTAMP_STR);
#define CFGOPT_MANIFEST_SAVE_THRESHOLD                              "manifest-save-threshold"
    STRING_DECLARE(CFGOPT_MANIFEST_SAVE_THRESHOLD_STR);
#define CFGOPT_NEUTRAL_UMASK                                        "neutral-umask"
    STRING_DECLARE(CFGOPT_NEUTRAL_UMASK_STR);
#define CFGOPT_ONLINE                                               "online"
    STRING_DECLARE(CFGOPT_ONLINE_STR);
#define CFGOPT_OUTPUT                                               "output"
    STRING_DECLARE(CFGOPT_OUTPUT_STR);
#define CFGOPT_PG                                                   "pg"
    STRING_DECLARE(CFGOPT_PG_STR);
#define CFGOPT_PROCESS                                              "process"
    STRING_DECLARE(CFGOPT_PROCESS_STR);
#define CFGOPT_PROCESS_MAX                                          "process-max"
    STRING_DECLARE(CFGOPT_PROCESS_MAX_STR);
#define CFGOPT_PROTOCOL_TIMEOUT                                     "protocol-timeout"
    STRING_DECLARE(CFGOPT_PROTOCOL_TIMEOUT_STR);
#define CFGOPT_RAW                                                  "raw"
    STRING_DECLARE(CFGOPT_RAW_STR);
#define CFGOPT_RECOVERY_OPTION                                      "recovery-option"
    STRING_DECLARE(CFGOPT_RECOVERY_OPTION_STR);
#define CFGOPT_RECURSE                                              "recurse"
    STRING_DECLARE(CFGOPT_RECURSE_STR);
#define CFGOPT_REMOTE_TYPE                                          "remote-type"
    STRING_DECLARE(CFGOPT_REMOTE_TYPE_STR);
#define CFGOPT_REPO                                                 "repo"
    STRING_DECLARE(CFGOPT_REPO_STR);
#define CFGOPT_RESUME                                               "resume"
    STRING_DECLARE(CFGOPT_RESUME_STR);
#define CFGOPT_SCK_BLOCK                                            "sck-block"
    STRING_DECLARE(CFGOPT_SCK_BLOCK_STR);
#define CFGOPT_SCK_KEEP_ALIVE                                       "sck-keep-alive"
    STRING_DECLARE(CFGOPT_SCK_KEEP_ALIVE_STR);
#define CFGOPT_SET                                                  "set"
    STRING_DECLARE(CFGOPT_SET_STR);
#define CFGOPT_SORT                                                 "sort"
    STRING_DECLARE(CFGOPT_SORT_STR);
#define CFGOPT_SPOOL_PATH                                           "spool-path"
    STRING_DECLARE(CFGOPT_SPOOL_PATH_STR);
#define CFGOPT_STANZA                                               "stanza"
    STRING_DECLARE(CFGOPT_STANZA_STR);
#define CFGOPT_START_FAST                                           "start-fast"
    STRING_DECLARE(CFGOPT_START_FAST_STR);
#define CFGOPT_STOP_AUTO                                            "stop-auto"
    STRING_DECLARE(CFGOPT_STOP_AUTO_STR);
#define CFGOPT_TABLESPACE_MAP                                       "tablespace-map"
    STRING_DECLARE(CFGOPT_TABLESPACE_MAP_STR);
#define CFGOPT_TABLESPACE_MAP_ALL                                   "tablespace-map-all"
    STRING_DECLARE(CFGOPT_TABLESPACE_MAP_ALL_STR);
#define CFGOPT_TARGET                                               "target"
    STRING_DECLARE(CFGOPT_TARGET_STR);
#define CFGOPT_TARGET_ACTION                                        "target-action"
    STRING_DECLARE(CFGOPT_TARGET_ACTION_STR);
#define CFGOPT_TARGET_EXCLUSIVE                                     "target-exclusive"
    STRING_DECLARE(CFGOPT_TARGET_EXCLUSIVE_STR);
#define CFGOPT_TARGET_TIMELINE                                      "target-timeline"
    STRING_DECLARE(CFGOPT_TARGET_TIMELINE_STR);
#define CFGOPT_TCP_KEEP_ALIVE_COUNT                                 "tcp-keep-alive-count"
    STRING_DECLARE(CFGOPT_TCP_KEEP_ALIVE_COUNT_STR);
#define CFGOPT_TCP_KEEP_ALIVE_IDLE                                  "tcp-keep-alive-idle"
    STRING_DECLARE(CFGOPT_TCP_KEEP_ALIVE_IDLE_STR);
#define CFGOPT_TCP_KEEP_ALIVE_INTERVAL                              "tcp-keep-alive-interval"
    STRING_DECLARE(CFGOPT_TCP_KEEP_ALIVE_INTERVAL_STR);
#define CFGOPT_TYPE                                                 "type"
    STRING_DECLARE(CFGOPT_TYPE_STR);

#define CFG_OPTION_TOTAL                                            128

/***********************************************************************************************************************************
Command enum
***********************************************************************************************************************************/
typedef enum
{
    cfgCmdArchiveGet,
    cfgCmdArchivePush,
    cfgCmdBackup,
    cfgCmdCheck,
    cfgCmdExpire,
    cfgCmdHelp,
    cfgCmdInfo,
    cfgCmdRepoCreate,
    cfgCmdRepoGet,
    cfgCmdRepoLs,
    cfgCmdRepoPut,
    cfgCmdRepoRm,
    cfgCmdRestore,
    cfgCmdStanzaCreate,
    cfgCmdStanzaDelete,
    cfgCmdStanzaUpgrade,
    cfgCmdStart,
    cfgCmdStop,
    cfgCmdVerify,
    cfgCmdVersion,
    cfgCmdNone,
} ConfigCommand;

/***********************************************************************************************************************************
Option group enum
***********************************************************************************************************************************/
typedef enum
{
    cfgOptGrpPg,
    cfgOptGrpRepo,
} ConfigOptionGroup;

/***********************************************************************************************************************************
Option enum
***********************************************************************************************************************************/
typedef enum
{
    cfgOptArchiveAsync,
    cfgOptArchiveCheck,
    cfgOptArchiveCopy,
    cfgOptArchiveGetQueueMax,
    cfgOptArchiveMode,
    cfgOptArchivePushQueueMax,
    cfgOptArchiveTimeout,
    cfgOptBackupStandby,
    cfgOptBufferSize,
    cfgOptChecksumPage,
    cfgOptCipherPass,
    cfgOptCmdSsh,
    cfgOptCompress,
    cfgOptCompressLevel,
    cfgOptCompressLevelNetwork,
    cfgOptCompressType,
    cfgOptConfig,
    cfgOptConfigIncludePath,
    cfgOptConfigPath,
    cfgOptDbInclude,
    cfgOptDbTimeout,
    cfgOptDelta,
    cfgOptDryRun,
    cfgOptExclude,
    cfgOptExecId,
    cfgOptExpireAuto,
    cfgOptFilter,
    cfgOptForce,
    cfgOptIgnoreMissing,
    cfgOptIoTimeout,
    cfgOptJobRetry,
    cfgOptJobRetryInterval,
    cfgOptLinkAll,
    cfgOptLinkMap,
    cfgOptLockPath,
    cfgOptLogLevelConsole,
    cfgOptLogLevelFile,
    cfgOptLogLevelStderr,
    cfgOptLogPath,
    cfgOptLogSubprocess,
    cfgOptLogTimestamp,
    cfgOptManifestSaveThreshold,
    cfgOptNeutralUmask,
    cfgOptOnline,
    cfgOptOutput,
    cfgOptPg,
    cfgOptPgDatabase,
    cfgOptPgHost,
    cfgOptPgHostCmd,
    cfgOptPgHostConfig,
    cfgOptPgHostConfigIncludePath,
    cfgOptPgHostConfigPath,
    cfgOptPgHostPort,
    cfgOptPgHostUser,
    cfgOptPgLocal,
    cfgOptPgPath,
    cfgOptPgPort,
    cfgOptPgSocketPath,
    cfgOptPgUser,
    cfgOptProcess,
    cfgOptProcessMax,
    cfgOptProtocolTimeout,
    cfgOptRaw,
    cfgOptRecoveryOption,
    cfgOptRecurse,
    cfgOptRemoteType,
    cfgOptRepo,
    cfgOptRepoAzureAccount,
    cfgOptRepoAzureCaFile,
    cfgOptRepoAzureCaPath,
    cfgOptRepoAzureContainer,
    cfgOptRepoAzureEndpoint,
    cfgOptRepoAzureHost,
    cfgOptRepoAzureKey,
    cfgOptRepoAzureKeyType,
    cfgOptRepoAzurePort,
    cfgOptRepoAzureVerifyTls,
    cfgOptRepoCipherPass,
    cfgOptRepoCipherType,
    cfgOptRepoHardlink,
    cfgOptRepoHost,
    cfgOptRepoHostCmd,
    cfgOptRepoHostConfig,
    cfgOptRepoHostConfigIncludePath,
    cfgOptRepoHostConfigPath,
    cfgOptRepoHostPort,
    cfgOptRepoHostUser,
    cfgOptRepoLocal,
    cfgOptRepoPath,
    cfgOptRepoRetentionArchive,
    cfgOptRepoRetentionArchiveType,
    cfgOptRepoRetentionDiff,
    cfgOptRepoRetentionFull,
    cfgOptRepoRetentionFullType,
    cfgOptRepoS3Bucket,
    cfgOptRepoS3CaFile,
    cfgOptRepoS3CaPath,
    cfgOptRepoS3Endpoint,
    cfgOptRepoS3Host,
    cfgOptRepoS3Key,
    cfgOptRepoS3KeySecret,
    cfgOptRepoS3KeyType,
    cfgOptRepoS3Port,
    cfgOptRepoS3Region,
    cfgOptRepoS3Role,
    cfgOptRepoS3Token,
    cfgOptRepoS3UriStyle,
    cfgOptRepoS3VerifyTls,
    cfgOptRepoType,
    cfgOptResume,
    cfgOptSckBlock,
    cfgOptSckKeepAlive,
    cfgOptSet,
    cfgOptSort,
    cfgOptSpoolPath,
    cfgOptStanza,
    cfgOptStartFast,
    cfgOptStopAuto,
    cfgOptTablespaceMap,
    cfgOptTablespaceMapAll,
    cfgOptTarget,
    cfgOptTargetAction,
    cfgOptTargetExclusive,
    cfgOptTargetTimeline,
    cfgOptTcpKeepAliveCount,
    cfgOptTcpKeepAliveIdle,
    cfgOptTcpKeepAliveInterval,
    cfgOptType,
} ConfigOption;

#endif
