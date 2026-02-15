// SessionCheckpoint.h

#ifndef SESSION_CHECKPOINT_H
#define SESSION_CHECKPOINT_H

// Structure to hold checkpoint information
struct Checkpoint {
    int id;             // Checkpoint ID
    char timestamp[20]; // Timestamp of the checkpoint
    // Additional fields as needed
};

// Function declarations
void createCheckpoint(int id);
void restoreCheckpoint(int id);
void deleteCheckpoint(int id);

#endif // SESSION_CHECKPOINT_H
