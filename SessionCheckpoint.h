#ifndef SESSION_CHECKPOINT_H
#define SESSION_CHECKPOINT_H

#include <stdint.h>

// Magic number for validation
#define SESSION_CHECKPOINT_MAGIC 0xRCKG

// Versioning
#define SESSION_CHECKPOINT_VERSION 1

// Checkpoint structure
typedef struct {
    uint32_t magic;               // Magic number for validation
    uint32_t version;             // Version of the checkpoint structure
    uint64_t timestamp;           // Timestamp of the checkpoint
    uint32_t crc32;               // CRC32 for validation
    // Add additional fields as needed
} SessionCheckpoint;

// Function declarations
void create_checkpoint(SessionCheckpoint* checkpoint);
void validate_checkpoint(SessionCheckpoint* checkpoint);
uint32_t calculate_crc32(const void* data, size_t length);

#endif // SESSION_CHECKPOINT_H