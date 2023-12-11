#ifndef __ENCODER_H
#define __ENCODER_H

#define ASCII_CHAR 1

#define LIAM_CHAR 4

/** @brief Encodes a character to baseLiam
 *
 *  @param c the character to encode
 *  @param enc the buffer to hold the baseLiam result
 */
void encode(const char c, char *enc);

/** @brief Decodes baseLiam block to its original value
 *
 *  Exits if the block is not valud baseLiam
 *  - Must be a 4 character string
 *  - Must only contain valid baseLiam characters
 *
 *  @param enc the buffer holding the baseLiam
 *  @returns the original character value
 */
char decode(const char *enc);

#endif // __ENCODER_H
