#include <filesystem>
#include <cstdlib>

namespace fs = std::filesystem; // lyhentaa
int main() {


const char* home = getenv("USERPROFILE"); // pista kayttajan home muutujaan
if (home) 

{
    fs::path sijainti = home; 
    fs::path Downloads = sijainti/ "Downloads";




    fs::path repo = Downloads / "MiniNeuron-master";
    fs::path Zip = Downloads / "MiniNeuron-master.zip";
    if (fs::exists(Zip)) {
        fs::remove(Zip);
    }
    if (fs::exists(repo))
    {fs::remove_all(repo);}

 }

return 0;
}