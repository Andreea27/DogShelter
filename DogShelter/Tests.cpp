//#include "Tests.h"
//#include "Dog.h"
//#include "Repository.h"
//#include "Controller.h"
//#include <assert.h>
//#include <string>
//
//void testDog()
//{
//	Dog d1{ "Labrador","Lisa",3,"https://www.google.ro/search?q=labrador&source=lnms&tbm=isch&sa=X&ved=0ahUKEwjSn7jV3P3ZAhVpCMAKHYajADMQ_AUICigB&biw=1366&bih=662#imgrc=reZF_pMETQc3GM:",2 };
//	assert(d1.getBreed()=="Labrador");
//	assert(d1.getName()=="Lisa");
//	assert(d1.getAge() == 3);
//	assert(d1.getWeight() == 2);
//	assert(d1.getPhoto()=="https://www.google.ro/search?q=labrador&source=lnms&tbm=isch&sa=X&ved=0ahUKEwjSn7jV3P3ZAhVpCMAKHYajADMQ_AUICigB&biw=1366&bih=662#imgrc=reZF_pMETQc3GM:");
//
//}
//
//void testDogIsEmpty()
//{
//	Dog d1;
//	assert(d1.getBreed() == "");
//	assert(d1.getName() == "");
//	assert(d1.getAge() == 0);
//	assert(d1.getWeight() == 0);
//	assert(d1.getPhoto() == "");
//
//}
//
//void testAddDog()
//{
//	Dog d1{ "Labrador","Lisa",3,"https://www.google.ro/search?q=labrador&source=lnms&tbm=isch&sa=X&ved=0ahUKEwjSn7jV3P3ZAhVpCMAKHYajADMQ_AUICigB&biw=1366&bih=662#imgrc=reZF_pMETQc3GM:",2 };
//	Repository repo{};
//	assert(repo.addDog(d1)==1);
//}
//
//void testAddDogFail()
//{
//	Dog d1{ "Labrador","Lisa",3,"https://www.google.ro/search?q=labrador&source=lnms&tbm=isch&sa=X&ved=0ahUKEwjSn7jV3P3ZAhVpCMAKHYajADMQ_AUICigB&biw=1366&bih=662#imgrc=reZF_pMETQc3GM:",2 };
//	Repository repo{};
//	repo.addDog(d1);
//	assert(repo.addDog(d1) == 0);
//}
//
//void testRemoveDog()
//{
//	Repository repo{};
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",2 };
//	repo.addDog(d1);
//	Dog d2{ "Golden Retriever","Jack",2,"https://www.ilovepets.com/20-little-known-golden-retrievers-facts/",2 };
//	repo.addDog(d2);
//	Dog d3{ "Dalmatian","Justin",2,"http://www.purina.com.au/owning-a-dog/dog-breeds/Dalmatian",2 };
//	repo.addDog(d3);
//	assert(repo.removeDog("Labrador", "Lisa")==1);
//}
//
//void testRemoveDogFail()
//{
//	Repository repo{};
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",2 };
//	assert(repo.removeDog("Orange", d1.getName()) == 0);
//}
//
//void testUpdateDog()
//{
//	Repository repo{};
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/" ,2};
//	Dog d2{ "Labrador","Lisa",2,"http://www.akc.org/expert-advice/lifestyle/" ,2 };
//	Dog d3{ "Dalmatian","Justin",2,"http://www.purina.com.au/owning-a-dog/dog-breeds/Dalmatian" ,2 };
//	repo.addDog(d3);
//	repo.addDog(d1);
//	repo.addDog(d2);
//	assert(repo.updateDog(d2) == 1);
//}
//
//void testUpdateDogFail()
//{
//	Repository repo{};
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/" ,2 };
//	Dog d2{};
//	repo.addDog(d1);
//	repo.addDog(d2);
//	assert(repo.updateDog(d2) == 0);
//}
//
////void testVplusE()
////{
////	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/" };
////	Dog d2{ "Labrador","Lisa",2,"http://www.akc.org/expert-advice/lifestyle/" };
////	std::vector<Dog> v;
////	v = v + d1;
////	assert(v.size() == 1);
////}
////
////void testEplusV()
////{
////	std::vector<Dog> v{};
////	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/" };
////	Dog d2{ "Labrador","Lisa",2,"http://www.akc.org/expert-advice/lifestyle/" };
////	v = d1 + v;
////	v = d2 + v;
////	assert(v.size() == 2);
////}
//
//
//
////--------CONTROLLER TESTS--------------------
//
//
//
//void testAddDogC()
//{
//	Dog d1{ "Labrador","Lisa",3,"https://www.google.ro/search?q=labrador&source=lnms&tbm=isch&sa=X&ved=0ahUKEwjSn7jV3P3ZAhVpCMAKHYajADMQ_AUICigB&biw=1366&bih=662#imgrc=reZF_pMETQc3GM:" ,2 };
//	Repository repo{};
//	Controller ctrl{ repo };
//	assert(ctrl.addDogCtrl(d1.getBreed(),d1.getName(),d1.getAge(),d1.getPhoto(),d1.getWeight()) == 1);
//}
//
//void testAddDogFailC()
//{
//	Dog d1{ "Labrador","Lisa",3,"https://www.google.ro/search?q=labrador&source=lnms&tbm=isch&sa=X&ved=0ahUKEwjSn7jV3P3ZAhVpCMAKHYajADMQ_AUICigB&biw=1366&bih=662#imgrc=reZF_pMETQc3GM:" ,2 };
//	Repository repo{};
//	Controller ctrl{ repo };
//	ctrl.addDogCtrl(d1.getBreed(), d1.getName(), d1.getAge(), d1.getPhoto(), d1.getWeight());
//	assert(ctrl.addDogCtrl(d1.getBreed(), d1.getName(), d1.getAge(), d1.getPhoto(), d1.getWeight()) == 0);
//}
//
//void testRemoveDogC()
//{
//	Repository repo{};
//	Controller ctrl{ repo };
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/" ,2 };
//	ctrl.addDogCtrl(d1.getBreed(), d1.getName(), d1.getAge(), d1.getPhoto(), d1.getWeight());
//	Dog d2{ "Golden Retriever","Jack",2,"https://www.ilovepets.com/20-little-known-golden-retrievers-facts/" ,2 };
//	ctrl.addDogCtrl(d2.getBreed(), d2.getName(), d2.getAge(), d2.getPhoto(), d1.getWeight());
//	assert(ctrl.removeDogCtrl("Labrador", "Lisa") == 1);
//}
//
//void testRemoveDogFailC()
//{
//	Repository repo{};
//	Controller ctrl{ repo };
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",2 };
//	assert(ctrl.removeDogCtrl("Orange", d1.getName()) == 0);
//}
//
//void testUpdateDogC()
//{
//	Repository repo{};
//	Controller ctrl{ repo };
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",2 };
//	Dog d2{ "Labrador","Lisa",2,"http://www.akc.org/expert-advice/lifestyle/",2 };
//	Dog d3{ "Dalmatian","Justin",2,"http://www.purina.com.au/owning-a-dog/dog-breeds/Dalmatian" ,2 };
//	ctrl.addDogCtrl(d3.getBreed(), d3.getName(), d3.getAge(), d3.getPhoto(), d1.getWeight());
//	ctrl.addDogCtrl(d1.getBreed(), d1.getName(), d1.getAge(), d1.getPhoto(), d1.getWeight());
//	ctrl.addDogCtrl(d2.getBreed(), d2.getName(), d2.getAge(), d2.getPhoto(), d1.getWeight());
//	assert(ctrl.updateDogCtrl(d2.getBreed(), d2.getName(), d2.getAge(), d2.getPhoto(), d1.getWeight()) == 1);
//}
//
//void testUpdateDogFailC()
//{
//	Repository repo{};
//	Controller ctrl{ repo };
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",2 };
//	Dog d2{};
//	ctrl.addDogCtrl(d1.getBreed(), d1.getName(), d1.getAge(), d1.getPhoto(), d1.getWeight());
//	ctrl.addDogCtrl(d2.getBreed(), d2.getName(), d2.getAge(), d2.getPhoto(), d1.getWeight());
//	assert(ctrl.updateDogCtrl(d2.getBreed(), d2.getName(), d2.getAge(), d2.getPhoto(), d1.getWeight()) == 0);
//}
//
//void testFilterByBreed()
//{
//	Repository repo{};
//	std::vector<Dog> v{};
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/" ,2 };
//	Dog d2{ "Labrador","Lora",2,"http://www.akc.org/expert-advice/lifestyle/",2 };
//	Dog d3{ "Dalmatian","Justin",2,"http://www.purina.com.au/owning-a-dog/dog-breeds/Dalmatian",2 };
//	repo.addDog(d3);
//	repo.addDog(d1);
//	repo.addDog(d2);
//	v=repo.filterByBreedAndAge("Labrador",3);
//	//assert(v.size() == 2);
//}
//
//void testFilterByBreedIsEmpty()
//{
//	Repository repo{};
//	std::vector<Dog> v{};
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/" ,2 };
//	Dog d2{ "Labrador","Lora",2,"http://www.akc.org/expert-advice/lifestyle/" ,2 };
//	Dog d3{ "Dalmatian","Justin",2,"http://www.purina.com.au/owning-a-dog/dog-breeds/Dalmatian" ,2 };
//	repo.addDog(d3);
//	repo.addDog(d1);
//	repo.addDog(d2);
//	v = repo.filterByBreedAndAge("Pug",0);
//	assert(v.size() == 0);
//}
//
//void testFilterByAge()
//{
//	Repository repo{};
//	std::vector<Dog> v{};
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/" ,2 };
//	Dog d2{ "Labrador","Lora",2,"http://www.akc.org/expert-advice/lifestyle/" ,2 };
//	Dog d3{ "Dalmatian","Justin",2,"http://www.purina.com.au/owning-a-dog/dog-breeds/Dalmatian" ,2 };
//	repo.addDog(d3);
//	repo.addDog(d1);
//	repo.addDog(d2);
//	v = repo.filterByAge(3);
//	assert(v.size() == 3);
//}
//
//void testFilterByAgeIsEmpty()
//{
//	Repository repo{};
//	std::vector<Dog> v{};
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",2 };
//	Dog d2{ "Labrador","Lora",2,"http://www.akc.org/expert-advice/lifestyle/",2 };
//	Dog d3{ "Dalmatian","Justin",2,"http://www.purina.com.au/owning-a-dog/dog-breeds/Dalmatian" ,2 };
//	repo.addDog(d3);
//	repo.addDog(d1);
//	repo.addDog(d2);
//	v = repo.filterByAge(0);
//	assert(v.size() == 3);
//}
//
//
//void testFilterByBreedC()
//{
//	Repository repo{};
//	std::vector<Dog> v{};
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/" ,2 };
//	Dog d2{ "Labrador","Lora",2,"http://www.akc.org/expert-advice/lifestyle/" ,2 };
//	Dog d3{ "Dalmatian","Justin",2,"http://www.purina.com.au/owning-a-dog/dog-breeds/Dalmatian",2 };
//	repo.addDog(d3);
//	repo.addDog(d1);
//	repo.addDog(d2);
//
//	Controller ctrl{ repo };
//	v = ctrl.filterByBreedAndAgeCtrl("Labrador",3);
//	assert(v.size() == 2);
//}
//
//void testFilterByBreedIsEmptyC()
//{
//	Repository repo{};
//	std::vector<Dog> v{};
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/" ,2 };
//	Dog d2{ "Labrador","Lora",2,"http://www.akc.org/expert-advice/lifestyle/" ,2 };
//	Dog d3{ "Dalmatian","Justin",2,"http://www.purina.com.au/owning-a-dog/dog-breeds/Dalmatian",2 };
//	repo.addDog(d3);
//	repo.addDog(d1);
//	repo.addDog(d2);
//
//	Controller ctrl{ repo };
//	v = ctrl.filterByBreedAndAgeCtrl("Pug",0);
//
//	//assert(v.size() == 0);
//}
//
//void testFilterByAgeC()
//{
//	Repository repo{};
//	std::vector<Dog> v{};
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/" ,2 };
//	Dog d2{ "Labrador","Lora",2,"http://www.akc.org/expert-advice/lifestyle/" ,2 };
//	Dog d3{ "Dalmatian","Justin",2,"http://www.purina.com.au/owning-a-dog/dog-breeds/Dalmatian" ,2 };
//	repo.addDog(d3);
//	repo.addDog(d1);
//	repo.addDog(d2);
//
//	Controller ctrl{ repo };
//
//	v = ctrl.filterByAgeCtrl(1);
//	//assert(v.size() == 1);
//}
//
//void testFilterByAgeIsEmptyC()
//{
//	Repository repo{};
//	std::vector<Dog> v{};
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",2 };
//	Dog d2{ "Labrador","Lora",2,"http://www.akc.org/expert-advice/lifestyle/" ,2 };
//	Dog d3{ "Dalmatian","Justin",2,"http://www.purina.com.au/owning-a-dog/dog-breeds/Dalmatian" ,2 };
//	repo.addDog(d3);
//	repo.addDog(d1);
//	repo.addDog(d2);
//
//	Controller ctrl{ repo };
//
//	v = ctrl.filterByAgeCtrl(0);
//	//assert(v.size() == 0);
//}
//
//
//void testDAadd()
//{
//	std::vector<Dog> v;
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",2 };
//
//	v.push_back(d1);
//	assert(v.size() == 1);
//}
//
//void testDAremove()
//{
//	std::vector<Dog> v;
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/" ,2 };
//
//	v.push_back(d1);
//	v.erase(v.begin());
//	assert(v.size() == 0);
//}
//
//void testgetDogs()
//{
//
//	Dog d1{ "Labrador","Lisa",3,"https://www.google.ro/search?q=labrador&source=lnms&tbm=isch&sa=X&ved=0ahUKEwjSn7jV3P3ZAhVpCMAKHYajADMQ_AUICigB&biw=1366&bih=662#imgrc=reZF_pMETQc3GM:" ,2 };
//	Repository repo{};
//	repo.addDog(d1);
//	assert(repo.getDogs().size() == 1);
//}
//
//void testfindDogByBreedAndName()
//{
//	Repository repo{};
//	assert(repo.findDogByBreedAndName("Pug", "Lucy").getAge() == 0);
//}
//
//void  testOperatorequal()
//{
//	std::vector<Dog> v,w;
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",2 };
//	v.push_back(d1);
//	w.push_back(d1);
//	v = w;
//	assert(v.size() == w.size());
//
//}
//
//void testoperatorbrachets()
//{
//	std::vector<Dog> v, w;
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",2 };
//	v.push_back(d1);
//	assert(v[0].getAge() == d1.getAge());
//}
//
//void testResize()
//{
//	std::vector<Dog> v, w;
//	
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/" ,2 };
//	for (int i = 0; i < 100; i++)
//		v.push_back(d1);
//	assert(v.size() == 100);
//}
//
//void testgetDogsC()
//{
//	Repository repo{};
//	std::vector<Dog> v{};
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",2 };
//	Dog d2{ "Labrador","Lora",2,"http://www.akc.org/expert-advice/lifestyle/" ,2};
//	Dog d3{ "Dalmatian","Justin",2,"http://www.purina.com.au/owning-a-dog/dog-breeds/Dalmatian",2};
//	repo.addDog(d3);
//	repo.addDog(d1);
//	repo.addDog(d2);
//
//	Controller ctrl{ repo };
//	v = ctrl.getDogsCtrl();
//	assert(v.size() == 3);
//}
//
//void testSeePhoto()
//{
//	std::vector<Dog> v, w;
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",2 };
//	d1.seePhoto();
//	assert(NULL==NULL);
//}
//
//void testfilterByBreedEmpty()
//{
//	Repository repo{};
//	std::vector<Dog> v{};
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",2 };
//	Dog d2{ "Labrador","Lora",2,"http://www.akc.org/expert-advice/lifestyle/" ,2 };
//	Dog d3{ "Dalmatian","Justin",2,"http://www.purina.com.au/owning-a-dog/dog-breeds/Dalmatian" ,2 };
//	repo.addDog(d3);
//	repo.addDog(d1);
//	repo.addDog(d2);
//	v = repo.filterByBreedAndAge("",10);
//	//assert(v.size() == 3);
//}
//
//void testSeePhotoC()
//{
//	std::vector<Dog> v, w;
//	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",2 };
//	Repository repo{};
//	repo.addDog(d1);
//	Controller ctrl{ repo };
//	ctrl.seePhotoCtrl(d1);
//	assert(NULL == NULL);
//}
//
////void testOperatorLess()
////{
////	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",2 };
////	Dog d2{ "Labrador","Mary",2,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",3 };
////	assert(d1 < d2);
////}
////
////void testOperatorLessFalse()
////{
////	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",2 };
////	Dog d2{ "Labrador","Mary",2,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/",3 };
////	assert(!(d2 < d1));
////}
//
////void testgetAllElems()
////{
////	std::vector<Dog> v,w;
////	Dog d1{ "Labrador","Lisa",1,"http://www.akc.org/expert-advice/lifestyle/did-you-know/7-reasons-the-lab-is-so-popular/" };
////
////	assert(v.getAllElems[0] == d1);
////}
//
//
//void Tests::testApp()
//{
//	testDog();
//
//	testDogIsEmpty();
//
//	testAddDog();
//	
//	testAddDogFail();
//	
//	testRemoveDog();
//	
//	testRemoveDogFail();
//	
//	testUpdateDog();
//	
//	testUpdateDogFail();
//	
//	testAddDogC();
//	
//	testAddDogFailC();
//	
//	testRemoveDogC();
//	
//	testRemoveDogFailC();
//	
//	testUpdateDogC();
//	
//	testUpdateDogFailC();
//	
//	testFilterByBreed();
//	
//	testFilterByBreedIsEmpty();
//	
//	testFilterByAge();
//	
//	testFilterByAgeIsEmpty();
//	
//	testFilterByBreedC();
//	
//	testFilterByBreedIsEmptyC();
//	
//	testFilterByAgeC();
//	
//	testFilterByAgeIsEmptyC();
//	
//	testDAadd();
//	
//	testDAremove();
//	
//	testgetDogs();
//
//	testfindDogByBreedAndName();
//
//	testOperatorequal();
//
//	testoperatorbrachets();
//
//	testResize();
//
//	testSeePhoto();
//
//	testgetDogsC();
//
//	testfilterByBreedEmpty();
//
//	testSeePhotoC();
//
//	//testOperatorLess();
//
//	//testOperatorLessFalse();
//
//
//	//testgetAllElems();
//}
