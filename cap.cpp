#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

typedef struct ingdstr
{
    string a;
} ingd;

typedef struct food
{
    string name;
    char category;
    string recipe;
    ingd arr[25];
    int taste;
    int type;
    food *next;
} dish;

typedef struct Link
{
    dish *next;
} link;

link storage[26];

// breakfast
dish dhokla;
dish poha;
dish upma;
dish idli;
dish paratha;
dish uggani;
dish chilla;

// lunch dishes
dish masal_bhindi;
dish chhole_kulche;
dish kadhi;
dish nan;
dish aalo_muter;
dish biryani;
dish rajma;

// dinner
dish aloo_sabji;
dish paneer_sabji;
dish mushroom_sabji;
dish gobi_sabji;
dish veg_pulao;
dish chole_sabji;
dish lauki_sabji;

// other
dish gulab_jamun;
dish lemon_water;


void initialize()
{
    dhokla.name = "dhokla";
    dhokla.category = 'B';
    dhokla.recipe = "Soak semolina for 20 minutes.\n"
                    "Take a bowl and mix rawa or semolina with fenugreek seeds, yoghurt and lemon juice. Use a little water for the right consistency and soak for 20 minutes.\n"
                    "Heat water in a pressure cooker.\n"
                    "Now, heat sufficient water in a pressure cooker and keep support net in it.\n"
                    "Prepare the batter.\n"
                    "After soaking the rawa, add salt, green chilli paste, cumin powder, sugar, baking soda, in the batter and mix well.\n"
                    "Now, keep this batter in the cooker tiffin and keep this tiffin slowly in the cooker.\n"
                    "Cook the dhokla for 20 minutes.\n"
                    "Remove the whistle of the cooker and close the lid.\n"
                    "Let the dhokla cook for 20 minutes.\n";
    dhokla.taste = 1;
    dhokla.type = 3;
    dhokla.next = NULL;

    // lunch dishes

    // masala bhindi
    masal_bhindi.name = "masala bhindi";
    masal_bhindi.category = 'L';
    masal_bhindi.recipe =
        "Trim the ends of the okra and cut them into 1-inch pieces. If the okra is too long, you can cut them lengthwise into halves or quarters.\n"
        "Heat oil in a pan or skillet over medium heat. Once the oil is hot, add cumin seeds and let them splutter.\n"
        "Add chopped onions to the pan and sauté until they turn golden brown.\n"
        "Add ginger-garlic paste and green chili (if using) to the pan. Sauté for a minute until the raw smell disappears.\n"
        "Add chopped tomatoes to the pan and cook until they turn soft and mushy, stirring occasionally.\n"
        "Once the tomatoes are cooked, add turmeric powder, coriander powder, cumin powder, red chili powder, and salt to the pan. Mix well and cook for 2-3 minutes until the spices are fragrant.\n"
        "Add the chopped okra to the pan and mix well with the masala. Ensure that the okra is evenly coated with the spice mixture.\n"
        "Cover the pan with a lid and cook the okra on low to medium heat for about 10-12 minutes, stirring occasionally, until the okra is tender and cooked through. Be careful not to overcook, as the okra should remain slightly crunchy.\n"
        "Once the okra is cooked, remove the lid and cook for an additional 2-3 minutes to allow any excess moisture to evaporate.\n"
        "Garnish the Masala Bhindi with freshly chopped coriander leaves and serve hot with roti, naan, or rice. Squeeze some lemon juice on top before serving for an extra tangy flavor.\n"
        "Enjoy your delicious Masala Bhindi as a side dish or a main course with your favorite Indian bread or rice!\n";
    masal_bhindi.arr[0].a = "bhindi";
    masal_bhindi.arr[1].a = "oil";
    masal_bhindi.arr[2].a = "cumin";
    masal_bhindi.arr[3].a = "onion";
    masal_bhindi.arr[4].a = "tomatoes";
    masal_bhindi.arr[5].a = "green chili";
    masal_bhindi.arr[6].a = "ginger-garlic paste";
    masal_bhindi.arr[7].a = "turmeric powder\n";
    masal_bhindi.arr[8].a = "coriander";
    masal_bhindi.arr[9].a = "cumin powder";
    masal_bhindi.arr[10].a = "red chili powder";
    masal_bhindi.arr[11].a = "Salt";
    masal_bhindi.arr[12].a = "coriander leaves";
    masal_bhindi.arr[13].a = "Lemon wedges";
    masal_bhindi.type = 3;
    masal_bhindi.next = &mushroom_sabji;

    // chhole kulche
    chhole_kulche.name = "chhole kulche";
    chhole_kulche.category = 'L';
    chhole_kulche.recipe =
        " Heat oil or ghee in a pan. Add cumin seeds, chopped onions, ginger-garlic paste, green chilies, and sauté until golden brown.\n"
        "Add chopped tomatoes, turmeric powder, coriander powder, cumin powder, garam masala, amchur, and salt. Cook until oil separates.\n"
        "Add soaked or canned chickpeas with water. Simmer until chickpeas are tender and the curry thickens. Garnish with chopped coriander leaves.\n"
        "Preparing Kulche:\n"
        "Combine all-purpose flour, salt, baking powder, and baking soda in a bowl.\n"
        "Mix in yogurt and oil or ghee. Knead into a soft dough with water. Let it rest for 30 minutes.\n"
        "Divide dough into balls. Roll each ball into a flat disc.\n"
        "Cook on a heated tawa until bubbles appear. Flip and cook until brown spots appear. Apply butter or ghee.\n"
        "Repeat with remaining dough balls.\n";
    chhole_kulche.arr[0].a = "Dried chickpeas";
    chhole_kulche.arr[1].a = "Oil";
    chhole_kulche.arr[2].a = "Onion";
    chhole_kulche.arr[3].a = "Tomatoes";
    chhole_kulche.arr[4].a = "Green chilies";
    chhole_kulche.arr[5].a = "Ginger-garlic paste";
    chhole_kulche.arr[6].a = "Cumin seeds";
    chhole_kulche.arr[7].a = "Turmeric powder";
    chhole_kulche.arr[8].a = "Coriander powder";
    chhole_kulche.arr[9].a = "Cumin powder";
    chhole_kulche.arr[10].a = "Garam masala";
    chhole_kulche.arr[11].a = "Amchur";
    chhole_kulche.arr[12].a = "Salt";
    chhole_kulche.arr[13].a = "Coriander leaves";
    chhole_kulche.arr[14].a = "maida";
    chhole_kulche.arr[15].a = "Yogurt";
    chhole_kulche.arr[16].a = "Baking soda";
    chhole_kulche.arr[17].a = "water";
    chhole_kulche.arr[18].a = "butter";
    chhole_kulche.type = 3;
    chhole_kulche.next = &chole_sabji;

    // kadhi
    kadhi.name = "kadhi";
    kadhi.category = 'L';
    kadhi.recipe =
        "Whisk gram flour and yogurt. Add water gradually, whisking to avoid lumps.\n"
        "Heat oil, add mustard seeds, cumin seeds, fenugreek seeds. Add onions, green chilies, ginger, curry leaves. Sauté.\n"
        "Add turmeric, coriander, red chili powder. Cook for a minute.\n"
        "Pour in the yogurt mixture, stir well, and simmer for 25-30 mins.\n"
        "Garnish with coriander leaves. Serve hot with rice or roti.\n";
    kadhi.arr[0].a = "besan";
    kadhi.arr[1].a = "yogurt";
    kadhi.arr[2].a = "water";
    kadhi.arr[3].a = "ghee";
    kadhi.arr[4].a = "mustard seeds";
    kadhi.arr[5].a = "cumin seeds";
    kadhi.arr[6].a = "fenugreek seeds";
    kadhi.arr[7].a = "onion";
    kadhi.arr[8].a = "green chilies";
    kadhi.arr[9].a = "ginger";
    kadhi.arr[10].a = "curry leaves";
    kadhi.arr[11].a = "turmeric powder";
    kadhi.arr[12].a = "coriander powder";
    kadhi.arr[13].a = "red chili powder";
    kadhi.arr[14].a = "Salt";
    kadhi.arr[15].a = "coriander leaves";
    kadhi.type = 3;
    kadhi.next = NULL;

    // nan
    nan.name = "nan";
    nan.category = 'L';
    nan.recipe =
        "Activate yeast in warm water with sugar for 5-10 minutes.\n"
        "Mix flour, salt, baking powder, yogurt, melted butter, and activated yeast to form a dough.\n"
        "Knead dough, let it rise for 1-2 hours.\n"
        "Preheat oven with a pizza stone or baking sheet inside.\n"
        "Divide dough, roll out into naan shapes.\n"
        "Bake at highest oven temperature for 2-3 minutes until puffed and golden.\n"
        "Brush with melted butter and optional seeds.\n"
        "Serve hot with your favorite curry or dip.\n";
    nan.arr[0].a = "flour";
    nan.arr[1].a = "warm water";
    nan.arr[2].a = "yogurt";
    nan.arr[3].a = "butter";
    nan.arr[4].a = "sugar";
    nan.arr[5].a = "salt";
    nan.arr[6].a = "dry active yeast";
    nan.arr[7].a = "baking powder";
    nan.arr[8].a = "coriander leaves";
    nan.next = NULL;

    // aalo_muter
    aalo_muter.name = "aalo mutter";
    aalo_muter.category = 'L';
    aalo_muter.recipe =
        "Sautéing: Heat oil or ghee in a pan. Add cumin seeds and let them splutter. Add chopped onions and sauté until golden brown.\n"
        "Add ginger-garlic paste and slit green chilies. Sauté for a minute until the raw aroma disappears. Add chopped tomatoes and cook until they turn soft and mushy.\n"
        "Add turmeric powder, coriander powder, cumin powder, red chili powder, garam masala, and salt. Mix well and cook for a couple of minutes until the spices are aromatic.\n"
        "Adding Potatoes and Peas: Add diced potatoes and green peas to the pan. Stir well until they are coated with the spice mixture.\n"
        "Simmering: Pour in water just enough to cover the potatoes and peas. Cover the pan and let it simmer on medium-low heat until the potatoes are tender and cooked through. Stir occasionally to prevent sticking.\n"
        "Finishing Touch: Once the potatoes are cooked, check for seasoning and adjust if needed. Garnish with chopped coriander leaves.\n";
    aalo_muter.arr[0].a = "potato";
    aalo_muter.arr[0].a = "green peas";
    aalo_muter.arr[0].a = "oil";
    aalo_muter.arr[0].a = "cumin seeds";
    aalo_muter.arr[0].a = "onion";
    aalo_muter.arr[0].a = "tomato";
    aalo_muter.arr[0].a = "green chilies";
    aalo_muter.arr[0].a = "ginger-garlic paste";
    aalo_muter.arr[0].a = "turmeric";
    aalo_muter.arr[0].a = "coriander powder";
    aalo_muter.arr[0].a = "red chili powder";
    aalo_muter.arr[0].a = "Salt";
    aalo_muter.arr[0].a = "coriander leaves";
    aalo_muter.type = 3;
    aalo_muter.next = NULL;

    // biryani
    biryani.name = "biryani";
    biryani.category = 'L';
    biryani.recipe =
        "Preparation: Rinse basmati rice thoroughly and soak in water for 30 minutes. Drain before cooking.\n"
        "Cooking Rice: In a large pot, bring water to a boil. Add soaked and drained rice along with a pinch of salt. Cook until rice is 70% cooked. Drain and set aside\n""Sautéing Vegetables: In a separate large pan, heat ghee or oil. Add cumin seeds, cinnamon stick, cloves, cardamom pods, and bay leaf. Sauté until fragrant.\n"
                                                                                                                                                                            "Add sliced onions and cook until golden brown. Then, add chopped tomatoes and cook until soft.\n"
                                                                                                                                                                            "Adding Vegetables: Add diced carrots, bell pepper, green beans, cauliflower florets, and green peas. Sauté for a few minutes until the vegetables are slightly tender.\n"
                                                                                                                                                                            "Spices: Stir in biryani masala, turmeric powder, and salt. Mix well to coat the vegetables evenly.\n"
                                                                                                                                                                            "Layering: In a large pot or cooker, layer half of the partially cooked rice at the bottom. Top it with the sautéed vegetable mixture. Then, layer the remaining rice on top.\n"
                                                                                                                                                                            "Cooking Biryani: Cover the pot with a tight-fitting lid. Cook on low heat for about 15-20 minutes, or until the rice is fully cooked and the flavors are well blended.\n"
                                                                                                                                                                            "Final Touch: Once done, gently fluff the biryani with a fork. Garnish with chopped coriander leaves and fried onions if desired.\n"
                                                                                                                                                                            "Serving: Serve hot vegetable biryani with raita, salad, or your favorite yogurt-based side dish.\n";
    biryani.arr[0].a = "basmati rice";
    biryani.arr[1].a = "water";
    biryani.arr[2].a = "oil";
    biryani.arr[3].a = "onion";
    biryani.arr[4].a = "carrots";
    biryani.arr[5].a = "bell pepper";
    biryani.arr[6].a = "green beans";
    biryani.arr[7].a = "cauliflower florets";
    biryani.arr[8].a = "green peas";
    biryani.arr[9].a = "tomato";
    biryani.arr[10].a = "biryani masala";
    biryani.arr[11].a = "cumin seeds";
    biryani.arr[12].a = "cinnamon stick";
    biryani.arr[13].a = "cloves";
    biryani.arr[14].a = "green cardamom pods";
    biryani.arr[15].a = "Salt";
    biryani.arr[16].a = "onion";
    biryani.type = 3;
    biryani.next = NULL;

    // rajma
    rajma.name = "rajma";
    rajma.category = 'L';
    rajma.recipe =
        "Cooking Rajma: Drain soaked rajma and rinse under running water. In a pressure cooker, add soaked rajma with enough water to cover them\n""Cook under pressure for about 15-20 minutes until rajma becomes tender. If using canned rajma, skip this step.\n"
                                                                                                                                                    "Preparing Curry Base: Heat oil or ghee in a pan. Add cumin seeds and let them splutter.\n"
                                                                                                                                                    "Add chopped onions and sauté until they turn golden brown.\n"
                                                                                                                                                    "Adding Aromatics: Add ginger-garlic paste and slit green chilies. Sauté for a minute until the raw aroma disappears.\n"
                                                                                                                                                    "Adding Spices: Add turmeric powder, coriander powder, red chili powder, and garam masala.\n"
                                                                                                                                                    "Mix well and cook for a couple of minutes until the spices are aromatic.\n"
                                                                                                                                                    "Cooking Tomatoes: Add chopped tomatoes to the pan and cook until they turn soft and mushy.\n"
                                                                                                                                                    "Combining Rajma and Curry: Once the tomatoes are cooked, add the cooked rajma along with its water (if pressure cooked).\n"
                                                                                                                                                    " Mix well and simmer for about 10-15 minutes until the flavors blend together and the curry thickens\n"
                                                                                                                                                    " Add salt to taste.\n"
                                                                                                                                                    "Final Touch: Garnish with chopped coriander leaves before serving.\n"
                                                                                                                                                    "Serving: Serve hot rajma curry with steamed rice or naan. Enjoy the delicious and comforting meal!\n";
    rajma.arr[0].a = "rajma";
    rajma.arr[1].a = "oil";
    rajma.arr[2].a = "onion";
    rajma.arr[3].a = "tomatoes";
    rajma.arr[4].a = "green chilies";
    rajma.arr[5].a = "ginger-garlic paste";
    rajma.arr[6].a = "cumin seeds";
    rajma.arr[7].a = "turmeric powder";
    rajma.arr[8].a = "coriander powder";
    rajma.arr[9].a = "red chili powder";
    rajma.arr[10].a = "garam masala";
    rajma.arr[11].a = "Salt";
    rajma.type = 3;
    rajma.next = NULL;

    // gulab jamun
    gulab_jamun.name = "gulab jamun";
    gulab_jamun.category = 'O';
    gulab_jamun.recipe =
        " Preparing Sugar Syrup:\n"
        "In a saucepan, combine sugar, water, crushed cardamom pods, and saffron strands (if using).\n"
        "Bring to a boil over medium heat, stirring occasionally, until the sugar is completely dissolved.\n"
        "Let it simmer for about 5-7 minutes until the syrup slightly thickens. Remove from heat and add rose water or kewra water if using. Keep the syrup warm.\n"
        "Making Gulab Jamun Dough:\n"
        "In a mixing bowl, combine milk powder, all-purpose flour, and baking soda. Mix well.\n"
        "Add ghee and mix until it resembles breadcrumbs.\n"
        "Gradually add milk, a little at a time, and knead into a soft dough. The dough should be smooth and slightly sticky.\n"
        "Shaping Gulab Jamun:\n"
        "Divide the dough into small portions and roll each portion into smooth balls without any cracks.\n"
        " Make sure the balls are compact and smooth to avoid breaking while frying.\n"
        "Frying Gulab Jamun:\n"
        "Heat oil or ghee in a deep frying pan over medium heat. Once the oil is hot, reduce the heat to low.\n"
        "Gently slide the prepared gulab jamun balls into the hot oil, making sure not to overcrowd the pan. Fry in batches if necessary.\n"
        "Fry the gulab jamun balls on low heat, stirring occasionally, until they turn golden brown evenly on all sides. This may take about 8-10 minutes.\n"
        "Remove the fried gulab jamun balls using a slotted spoon and drain excess oil by placing them on a paper towel.\n"
        "Soaking Gulab Jamun:\n"
        "Immediately transfer the fried gulab jamun balls into the warm sugar syrup. Ensure that the syrup covers the gulab jamun completely.\n"
        "Let the gulab jamun soak in the sugar syrup for at least 1-2 hours to absorb the flavors and become soft and spongy.\n"
        "Serving:\n"
        "Serve the gulab jamun warm or at room temperature, garnished with chopped nuts if desired.\n"
        "Enjoy these delectable sweet treats as a dessert or on festive occasions!\n";
    gulab_jamun.arr[0].a = "milk powder";
    gulab_jamun.arr[1].a = "maida";
    gulab_jamun.arr[2].a = "baking soda";
    gulab_jamun.arr[3].a = "ghee";
    gulab_jamun.arr[4].a = "milk";
    gulab_jamun.arr[5].a = "sugar";
    gulab_jamun.arr[6].a = "water";
    gulab_jamun.type = 2;
    gulab_jamun.next = &gobi_sabji;

    // lemon water
    lemon_water.name = "lemon water";
    lemon_water.category = 'O';
    lemon_water.recipe =
        "take some water and squeze lemon into it\n"
        "add some salt and sugar into it\n"
        "mix it well and done \n";
    lemon_water.arr[0].a = "water";
    lemon_water.arr[1].a = "sugar";
    lemon_water.arr[2].a = "salt";
    lemon_water.arr[3].a = "lemon";
    lemon_water.type = 1;
    lemon_water.next = &lauki_sabji;

    poha.name = "poha" ;poha.category = 'B'; poha.recipe = "Put poha in a colander and wash, not letting it soak too long in the water. Leave in the colander to drain out completely.\n"
                                                         "Heat the oil and add asafoetida, mustard seeds, curry leaves and onions along with whole red chillies.\n"
                                                         "When onions are light brown, add potatoes, and turn around till they look a bit glossy.\n"
                                                         "Add the turmeric and sauté over low heat till the potatoes are cooked through.\n"
                                                         "Increase the heat, add salt and poha and mix well. Saute till mixed and heated through.\n"
                                                         "Shut off the heat, and mix in the green chillies, lemon juice and half of the coriander.\n"
                                                         "Transfer on to a serving dish, garnish with the rest of the coriander and lemon wedges and serve.\n";

    poha.taste = 1;
    poha.type = 3;
    poha.next = &paneer_sabji;

    poha.arr[0].a = "poha";
    poha.arr[1].a = "oil";
    poha.arr[2].a = "onions";
    poha.arr[3].a = "curry leaves";
    poha.arr[4].a = "red chillies";
    poha.arr[5].a = "potatos";
    poha.arr[6].a = "turmeric";
    poha.arr[7].a = "salt";

    upma.name = "upma" ;upma.category = 'B';upma.recipe = "Heat oil, fry dal, mustard and cumin seeds for 15 seconds.\n"
                                                         "Add onions, curry leaves, chopped chillies, ginger, garlic, turmeric, and salt and coconut paste. Stir and fry for 5 minutes.\n"
                                                         "Add vegetables and tomato. Fry for 3-4 minutes.\n"
                                                         "Add semolina. After 2-3 minute, pour in water and curd. Cook for 5 minutes until dry.\n"
                                                         "Garnish with coriander and sharpen with lemon juice.\n";

    upma.arr[0].a = "mustard"; upma.arr[1].a = "onion";upma.arr[2].a = "curry leaves"; upma.arr[3].a = "curd"; upma.arr[4].a = "rava"; upma.arr[5].a = "water"; upma.arr[6].a = "salt"; upma.arr[7].a = "garlic"; upma.arr[8].a = "vegetables"; upma.arr[9].a = "turmeric"; upma.arr[10].a = "coconut paste"; upma.arr[11].a = "ginger";

                                                                                                                                                                                                                                                                                                                     upma.taste = 1;
    upma.type = 3;
    upma.next = &uggani;

    chilla.name = 1;
    chilla.category = 'B';
    chilla.recipe = "Soak the moong dal overnight and grind it with some salt into a consistent flowing batter.\n"
                    "Heat tawa and spread some batter in a circular motion over it.\n"
                    "Add the cashewnuts and all the vegetables.\n"
                    "Dab some ghee on top and flip it over to cook for a few minutes.\n"
                    "Serve with mint chutney and sweet chutney.\n";

    chilla.arr[0].a = "moong dal";
    chilla.arr[1].a = "salt";
    chilla.arr[2].a = "water";
    chilla.arr[3].a = "cashewnuts";
    chilla.arr[4].a = "vegetables";
    chilla.arr[5].a = "ghee";
    chilla.arr[6].a = "oil";
    chilla.arr[7].a = "turmeric";

    chilla.taste = 1;
    chilla.type = 3;
    chilla.next = &chhole_kulche;

    idli.name = "idli";
    idli.category = 'B';
    idli.recipe = "Soak the rice and lentil in water separately for 5-6 hours.\n"
                  "Grind the lentil to a fine smooth paste, and the rice a little coarse (enough to feel a texture, like fine sand).\n"
                  "Mix the two ground ingredients with salt and enough water to form a batter of dropping consistency.\n"
                  "Leave covered, in a warm place to ferment to a spongy batter, overnight.\n"
                  "Steam in an idli steamer and serve hot.\n";

    idli.arr[0].a = "water";
    idli.arr[1].a = "salt";
    idli.arr[2].a = "rice";
    idli.arr[3].a = "baking soda";
    idli.arr[4].a = "lentil";

    idli.taste = 1;
    idli.type = 3;
    idli.next = NULL;

    paratha.name = "paratha";
    paratha.category = 'B';
    paratha.recipe = "Make small round portions from the dough.\n"
                     "Roll it in the shape of a parantha and, grease a little with ghee and sprinkle the masala.\n"
                     "Roll it in the shape of a parantha and, grease a little with ghee and sprinkle the masala.\n"
                     "Roll it again and shallow fry on high flame while turning it on a griddle.\n"
                     "Once done, serve with Sita Phal ki Subzi, Aloo ki Subzi, Achar or Saunth.\n";

    paratha.arr[0].a = "water";
    paratha.arr[0].a = "ghee";
    paratha.arr[0].a = "wheat";
    paratha.arr[0].a = "oil";
    paratha.arr[0].a = "saunf";

    paratha.taste = 1;
    paratha.type = 3;
    paratha.next = NULL;

    uggani.name = "uggani";
    uggani.category = 'B';
    uggani.recipe = "Wash the puff rice in cold water and squeeze out the excess water.\n"
                    "In a pan add oil, curry leaves, mustard seeds, urad dal and peanuts. Cook it until they are soft brown.\n"
                    "Throw in the salt, turmeric and chilli powder as per your taste.\n"
                    "Then add your chopped onion and tomato. Cook for 5 minutes on low heat.\n"
                    "When the onions and tomatoes are soft, add your puffed rice.\n"
                    "Give them a good mix and put your uggani in a bowl\n";

    uggani.arr[0].a = "puff rice";
    uggani.arr[1].a = "water";
    uggani.arr[2].a = "mustard seeds";
    uggani.arr[3].a = "urad dal";
    uggani.arr[4].a = "peanuts";
    uggani.arr[5].a = "onion";
    uggani.arr[6].a = "tomato";
    uggani.arr[7].a = "oil";
    uggani.arr[8].a = "turmeric";
    uggani.arr[9].a = "green chilli";

    uggani.taste = 1;
    uggani.type = 3;
    uggani.next = NULL;

    aloo_sabji.name = "aloo sabji";
    aloo_sabji.category = 'D';
    aloo_sabji.recipe = "Keep a karahi (wok) or small pot on medium heat and add the cumin seeds. When they start to sizzle, add the onions and garlic. Fry until the onions are just turning reddish brown.\n"
                        "Add the potatoes and the ground spices. Stir with a spoon to coat the potatoes with the spices and cook for 4-5 minutes only. Do not add any water.\n"
                        "Add the potatoes and the ground spices. Stir with a spoon to coat the potatoes with the spices and cook for 4-5 minutes only. Do not add any water.\n";

    aloo_sabji.arr[0].a = "cumin seeds";
    aloo_sabji.arr[1].a = "onion";
    aloo_sabji.arr[2].a = "garlic";
    aloo_sabji.arr[3].a = "potato";
    aloo_sabji.arr[4].a = "chilli powder";
    aloo_sabji.arr[5].a = "ground spices";
    aloo_sabji.arr[6].a = "water";
    aloo_sabji.arr[7].a = "oil";
    aloo_sabji.arr[8].a = "corriender";
    aloo_sabji.arr[9].a = "ginger";

    aloo_sabji.taste = 2;
    aloo_sabji.type = 3;
    aloo_sabji.next = &aalo_muter;

    paneer_sabji.name = "paneer sabji";
    paneer_sabji.category = 'D';
    paneer_sabji.recipe = "Keep a karahi (wok) or small pot on medium heat and add the cumin seeds. When they start to sizzle, add the onions and garlic. Fry until the onions are just turning reddish brown.\n"
                          "Add the paneer and the ground spices. Stir with a spoon to coat the paneers with the spices and cook for 4-5 minutes only. Do not add any water.\n"
                          "Add the paneer and the ground spices. Stir with a spoon to coat the paneer with the spices and cook for 4-5 minutes only. Do not add any water.\n";
    paneer_sabji.arr[0].a = "cumin seeds";
    paneer_sabji.arr[1].a = "onion";
    paneer_sabji.arr[2].a = "garlic";
    paneer_sabji.arr[3].a = "potato";
    paneer_sabji.arr[4].a = "chilli powder";
    paneer_sabji.arr[5].a = "ground spices";
    paneer_sabji.arr[6].a = "water";
    paneer_sabji.arr[7].a = "oil";
    paneer_sabji.arr[8].a = "corriender";
    paneer_sabji.arr[9].a = "ginger";

    paneer_sabji.taste = 2;
    paneer_sabji.type = 3;
    paneer_sabji.next = &paratha;

    mushroom_sabji.name = "mushroom sabji";
    mushroom_sabji.category = 'D';
    mushroom_sabji.recipe = "Keep a karahi (wok) or small pot on medium heat and add the cumin seeds. When they start to sizzle, add the onions and garlic. Fry until the onions are just turning reddish brown.\n"
                            "Add the mushroom and the ground spices. Stir with a spoon to coat the mushroom with the spices and cook for 4-5 minutes only. Do not add any water.\n"
                            "Add the mushroom and the ground spices. Stir with a spoon to coat the mushroom with the spices and cook for 4-5 minutes only. Do not add any water.\n";
    mushroom_sabji.arr[0].a = "cumin seeds";
    mushroom_sabji.arr[1].a = "onion";
    mushroom_sabji.arr[2].a = "garlic";
    mushroom_sabji.arr[3].a = "potato";
    mushroom_sabji.arr[4].a = "chilli powder";
    mushroom_sabji.arr[5].a = "ground spices";
    mushroom_sabji.arr[6].a = "water";
    mushroom_sabji.arr[7].a = "oil";
    mushroom_sabji.arr[8].a = "corriender";
    mushroom_sabji.arr[9].a = "ginger";

    mushroom_sabji.taste = 2;
    mushroom_sabji.type = 3;
    mushroom_sabji.next = NULL;

    gobi_sabji.name = "gobi sabji";
    gobi_sabji.category = 'D';
    gobi_sabji.recipe = "Heat oil in a pan or kadhai over medium heat. Once hot, add cumin seeds and let them splutter.\n"

                        "Add chopped onions and sauté until they turn translucent.\n"

                        "Add ginger-garlic paste and slit green chilies. Sauté for a minute until the raw smell disappears.\n"
                        "Add chopped tomatoes and cook until they turn mushy and the oil starts separating from the masala.\n"

                        "Add turmeric powder, coriander powder, cumin powder, red chili powder, and salt. Mix well and cook the spices for a minute.\n"

                        "Add cauliflower florets to the pan and toss well with the masala until the cauliflower is evenly coated.\n"
                        "Cover the pan and cook the cauliflower on low to medium heat until it becomes tender, stirring occasionally. This may take about 10-15 minutes depending on the size of the florets.\n"

                        "Once the cauliflower is cooked through and tender, remove the lid and cook for a few more minutes to evaporate any excess moisture and to let the flavors meld together.\n"

                        "Garnish with fresh coriander leaves and serve hot with roti, paratha, or rice.\n";

    gobi_sabji.arr[0].a = "cummin seeds";
    gobi_sabji.arr[1].a = "ginger-garlic paste";
    gobi_sabji.arr[2].a = "red chilli powder";
    gobi_sabji.arr[3].a = "corriender powder";
    gobi_sabji.arr[4].a = "salt";
    gobi_sabji.arr[5].a = "water";
    gobi_sabji.arr[6].a = "cauliflower";
    gobi_sabji.arr[7].a = "oil";
    gobi_sabji.arr[8].a = "turmeric";
    gobi_sabji.arr[9].a = "tomatoes";
    gobi_sabji.arr[10].a = "green chillies";
    gobi_sabji.arr[11].a = "butter";

    gobi_sabji.taste = 2;
    gobi_sabji.type = 3;
    gobi_sabji.next = NULL;

    veg_pulao.name = "veg pulao";
    veg_pulao.category = 'D';
    veg_pulao.recipe = "Heat oil or ghee in a pressure cooker or a deep pan over medium heat. Add cumin seeds, cinnamon stick, cloves, and cardamom pods. Sauté until aromatic."

                       "Add sliced onions and sauté until they turn golden brown.\n"

                       "Add chopped tomatoes and cook until they become soft and mushy.\n"

                       "Add mixed vegetables, garam masala, turmeric powder, and salt. Mix well and cook for 3-4 minutes.\n"

                       "Drain the soaked rice and add it to the pan. Stir gently to mix the rice with the vegetables and spices.\n"
                       "Add 2 cups of water and stir well. Bring the mixture to a boil.\n"
                       "If using a pressure cooker, close the lid and cook on medium heat for 2 whistles. If using a pan, cover with a tight-fitting lid and cook on low heat until the rice is cooked and the water is absorbed, about 15-20 minutes.\n"

                       "Once done, fluff the rice gently with a fork. Garnish with fresh coriander leaves.\n"

                       "Serve hot Vegetable Pulao with raita (yogurt dip) or any curry of your choice.\n";

                       veg_pulao.arr[0].a = "rice";
    veg_pulao.arr[1].a = "water";
    veg_pulao.arr[2].a = "oil";
    veg_pulao.arr[3].a = "red chilli powder";
    veg_pulao.arr[4].a = "green chilli";
    veg_pulao.arr[5].a = "cinamon";
    veg_pulao.arr[6].a = "cloves";
    veg_pulao.arr[7].a = "salt";
    veg_pulao.arr[8].a = "cumin seeds";

    veg_pulao.taste = 2;
    veg_pulao.type = 3;
    veg_pulao.next = NULL;

    chole_sabji.name = "gobi sabji";
    chole_sabji.category = 'D';
    chole_sabji.recipe = "Heat oil in a pan or kadhai over medium heat. Once hot, add cumin seeds and let them splutter.\n"

                         "Add chopped onions and sauté until they turn translucent.\n"

                         "Add ginger-garlic paste and slit green chilies. Sauté for a minute until the raw smell disappears.\n"
                         "Add chopped tomatoes and cook until they turn mushy and the oil starts separating from the masala.\n"

                         "Add turmeric powder, coriander powder, cumin powder, red chili powder, and salt. Mix well and cook the spices for a minute.\n"

                         "Add chole to the pan and toss well with the masala until the chole is evenly coated.\n"
                         "Cover the pan and cook the chole on low to medium heat until it becomes tender, stirring occasionally.\n"

                         "Once the chole is cooked through and tender, remove the lid and cook for a few more minutes to evaporate any excess moisture and to let the flavors meld together.\n"

                         "Garnish with fresh coriander leaves and serve hot with roti, paratha, or rice.\n";

    chole_sabji.arr[0].a = "cummin seeds";
    chole_sabji.arr[1].a = "ginger-garlic paste";
    chole_sabji.arr[2].a = "red chilli powder";
    chole_sabji.arr[3].a = "corriender powder";
    chole_sabji.arr[4].a = "salt";
    chole_sabji.arr[5].a = "water";
    chole_sabji.arr[6].a = "cauliflower";
    chole_sabji.arr[7].a = "oil";
    chole_sabji.arr[8].a = "turmeric";
    chole_sabji.arr[9].a = "tomatoes";
    chole_sabji.arr[10].a = "green chillies";
    chole_sabji.arr[11].a = "butter";

    chole_sabji.taste = 2;
    chole_sabji.type = 3;
    chole_sabji.next = NULL;

    lauki_sabji.name = "lauki sabji";
    lauki_sabji.category = 'D';
    lauki_sabji.recipe = "Heat oil in a pan or kadhai over medium heat. Once hot, add cumin seeds and let them splutter.\n"

                         "Add chopped onions and sauté until they turn translucent.\n"

                         "Add ginger-garlic paste and slit green chilies. Sauté for a minute until the raw smell disappears.\n"
                         "Add chopped tomatoes and cook until they turn mushy and the oil starts separating from the masala.\n"

                         "Add turmeric powder, coriander powder, cumin powder, red chili powder, and salt. Mix well and cook the spices for a minute.\n"

                         "Add lauki to the pan and toss well with the masala until the lauki is evenly coated.\n"
                         "Cover the pan and cook the lauki on low to medium heat until it becomes tender, stirring occasionally.\n"

                         "Once the lauki is cooked through and tender, remove the lid and cook for a few more minutes to evaporate any excess moisture and to let the flavors meld together.\n"

                         "Garnish with fresh coriander leaves and serve hot with roti, paratha, or rice.\n";

    lauki_sabji.arr[0].a = "cummin seeds";
    lauki_sabji.arr[1].a = "ginger-garlic paste";
    lauki_sabji.arr[2].a = "red chilli powder";
    lauki_sabji.arr[3].a = "corriender powder";
    lauki_sabji.arr[4].a = "salt";
    lauki_sabji.arr[5].a = "water";
    lauki_sabji.arr[6].a = "cauliflower";
    lauki_sabji.arr[7].a = "oil";
    lauki_sabji.arr[8].a = "turmeric";
    lauki_sabji.arr[9].a = "tomatoes";
    lauki_sabji.arr[10].a = "green chillies";
    lauki_sabji.arr[11].a = "butter";

    lauki_sabji.taste = 2;
    lauki_sabji.type = 3;
    lauki_sabji.next = NULL;
}

void storing()
{

    storage[0].next = &aloo_sabji;
    storage[1].next = &biryani;
    storage[2].next = &chilla;
    storage[3].next = &dhokla;
    storage[6].next = &gulab_jamun;
    storage[8].next = &idli;
    storage[10].next = &kadhi;
    storage[11].next = &lemon_water;
    storage[12].next = &masal_bhindi;
    storage[13].next = &nan;
    storage[15].next = &poha;
    storage[17].next = &rajma;
    storage[20].next = &upma;
    storage[21].next = &veg_pulao;
}
void search(string reci, int index)
{

    dish *temp = storage[index].next;
    while (temp != NULL)
    {
        if (reci.compare(temp->name) == 0)
        {
            cout << temp->recipe;
            goto end;
        }
        else
        {
            temp = temp->next;
        }
    }
    cout << "No such recipe found :(";
end:
    cout << endl;
}

void inputReci(dish &reci)
{
    int ind;
    ind = reci.name[0] - 97;
    if (storage[ind].next == NULL)
    {
        storage[ind].next = new dish(reci);
    }
    else
    {
        dish *temp = storage[ind].next;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new dish(reci);
    }
}

