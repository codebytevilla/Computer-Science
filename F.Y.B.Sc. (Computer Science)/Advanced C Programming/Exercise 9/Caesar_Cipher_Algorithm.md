# Caesar Cipher Encryption Algorithm

The Caesar cipher is one of the simplest and oldest encryption techniques in cryptography. It is a substitution cipher that works by shifting the letters of the alphabet by a fixed number of positions. This fixed number is known as the "key" or "shift value." Here's how the Caesar cipher works:

1. Choose a key, which is a positive integer representing the number of positions to shift the letters.

2. Take the plaintext (the message you want to encrypt) and go through each character.

3. For each alphabetic character (A-Z or a-z), shift it forward in the alphabet by the key positions. If you reach the end of the alphabet, wrap around to the beginning.

4. Leave non-alphabetic characters (numbers, punctuation, spaces, etc.) unchanged.

5. Repeat this process for the entire plaintext.

6. The result is the ciphertext, which is the encrypted message.

## Example

Here's an example with a key of 3:

- Original message: "HELLO"
- Shift each letter in the alphabet by 3 positions forward:
  - H -> K
  - E -> H
  - L -> O
  - L -> O
  - O -> R
- Encrypted message: "KHOOR"

## Decryption

To decrypt a message encrypted with the Caesar cipher, you simply reverse the process by shifting the characters backward by the same key.

The Caesar cipher is named after Julius Caesar, who is believed to have used this method for secure communication. However, it is not considered a secure encryption method for modern applications because it is vulnerable to brute force attacks, especially with a limited number of possible keys (26 in the case of the English alphabet). It's more of a historical curiosity than a robust encryption technique.
