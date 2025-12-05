#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <vector>

/**
 * \file ProcessCommandLine.hpp
 * \brief Contains the declaration of the function for processing the command-line arguments
 */

/**
 * \brief A ProgramSettings struct to hold all the program settings to be edited in processCommandLine
 * 
 * Contains the helpRequested and versionRequested booleans, the file path strings for the input and output files;
 * the cipher key as a string, and the encrypt boolean.
 * 
 * \param helpRequested Indicates the presence of the help flag in the arguments
 * \param versionRequested Indicates the presence of the version flag in the arguments
 * \param inputFile Name of the input file
 * \param outputFile Name of the output file
 * \param cipherKey Key to be used in encrypting/decrypting routine
 * \param encrypt Flag indicating the mode in which the cipher should run (encrypt = true, decrypt = false)
 * 
 */
struct ProgramSettings{
    bool helpRequested{false};
    bool versionRequested{false};
    std::string inputFile{""};
    std::string outputFile{""};
    std::string cipherKey{""};
    bool encrypt{true};
};

/**
 * \brief Processes the command-line arguments and modifies accordingly the program settings
 *
 * \param cmdLineArgs The command-line arguments to be processed
 * \param program_settings The ProgramSettings struct that stores the program settings taken from the processed command-line arguments
 * 
 * \return true if the arguments could be successfully parsed, false otherwise
 */
bool processCommandLine(const std::vector<std::string>& cmdLineArgs,
                        ProgramSettings& program_settings);

#endif    // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
