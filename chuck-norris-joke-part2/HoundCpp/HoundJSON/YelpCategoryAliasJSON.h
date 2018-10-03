/* file "YelpCategoryAliasJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef YELPCATEGORYALIASJSON_H
#define YELPCATEGORYALIASJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class YelpCategoryAliasJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_contractors,
        Value_lawyers,
        Value_physicians,
        Value_hair,
        Value_autorepair,
        Value_insurance,
        Value_realestateagents,
        Value_accountants,
        Value_banks,
        Value_hotels,
        Value_churches,
        Value_grocery,
        Value_elementaryschools,
        Value_itservices,
        Value_hotdogs,
        Value_generaldentistry,
        Value_electricians,
        Value_plumbing,
        Value_professional,
        Value_pizza,
        Value_religiousorgs,
        Value_hvac,
        Value_realestatesvcs,
        Value_bakeries,
        Value_apartments,
        Value_car_dealers,
        Value_restaurants,
        Value_architects,
        Value_convenience,
        Value_furniture,
        Value_childcare,
        Value_landscaping,
        Value_othersalons,
        Value_womenscloth,
        Value_painters,
        Value_coffee,
        Value_highschools,
        Value_massage,
        Value_sandwiches,
        Value_jewelry,
        Value_servicestations,
        Value_chiropractors,
        Value_dentists,
        Value_nonprofit,
        Value_c_and_mh,
        Value_homeservices,
        Value_mortgagebrokers,
        Value_physicaltherapy,
        Value_marketing,
        Value_tradamerican,
        Value_education,
        Value_tires,
        Value_optometrists,
        Value_burgers,
        Value_mobilephones,
        Value_drugstores,
        Value_beer_and_wine,
        Value_health,
        Value_accessories,
        Value_vet,
        Value_roofing,
        Value_web_design,
        Value_italian,
        Value_employmentagencies,
        Value_localservices,
        Value_bodyshops,
        Value_skincare,
        Value_mexican,
        Value_familydr,
        Value_shoes,
        Value_autopartssupplies,
        Value_barbers,
        Value_preschools,
        Value_florists,
        Value_opticians,
        Value_propertymgmt,
        Value_taxservices,
        Value_interiordesign,
        Value_fashion,
        Value_homecleaning,
        Value_financialadvising,
        Value_internalmed,
        Value_homeappliancerepair,
        Value_electronics,
        Value_copyshops,
        Value_flooring,
        Value_bars,
        Value_laundryservices,
        Value_cosmetics,
        Value_photographers,
        Value_carpet_cleaning,
        Value_graphicdesign,
        Value_pubs,
        Value_catering,
        Value_buildingsupplies,
        Value_gardening,
        Value_cafes,
        Value_cosmeticdentists,
        Value_computers,
        Value_breakfast_brunch,
        Value_investing,
        Value_taxis,
        Value_towing,
        Value_healthtrainers,
        Value_selfstorage,
        Value_chinese,
        Value_homehealthcare,
        Value_travelservices,
        Value_gyms,
        Value_personal_injury,
        Value_antiques,
        Value_officecleaning,
        Value_galleries,
        Value_oralsurgeons,
        Value_divorce,
        Value_realestate,
        Value_menscloth,
        Value_deptstores,
        Value_advertising,
        Value_massage_therapy,
        Value_pet_sitting,
        Value_obgyn,
        Value_shopping,
        Value_movers,
        Value_theater,
        Value_icecream,
        Value_auto,
        Value_sports_clubs,
        Value_funeralservices,
        Value_medcenters,
        Value_delis,
        Value_homedecor,
        Value_venues,
        Value_meats,
        Value_driving_schools,
        Value_pharmacy,
        Value_hospitals,
        Value_hardware,
        Value_eventplanning,
        Value_sessionphotography,
        Value_carrental,
        Value_german,
        Value_newamerican,
        Value_amateursportsteams,
        Value_seafood,
        Value_sportgoods,
        Value_beautysvc,
        Value_locksmiths,
        Value_couriers,
        Value_pest_control,
        Value_hairstylists,
        Value_parks,
        Value_carwash,
        Value_spas,
        Value_podiatrists,
        Value_food,
        Value_acupuncture,
        Value_musicalinstrumentsandteachers,
        Value_orthodontists,
        Value_kitchenandbath,
        Value_sewingalterations,
        Value_notaries,
        Value_oilchange,
        Value_eventphotography,
        Value_financialservices,
        Value_groomer,
        Value_retirement_homes,
        Value_officeequipment,
        Value_postoffices,
        Value_isps,
        Value_chicken_wings,
        Value_orthopedists,
        Value_printmedia,
        Value_treeservices,
        Value_waxing,
        Value_collegeuniv,
        Value_psychiatrists,
        Value_tobaccoshops,
        Value_carpeting,
        Value_transport,
        Value_parking,
        Value_bookstores,
        Value_french,
        Value_autoinsurance,
        Value_tours,
        Value_petstore,
        Value_lifeinsurance,
        Value_appliances,
        Value_bedbreakfast,
        Value_shipping_centers,
        Value_markets,
        Value_cardiology,
        Value_masonry_concrete,
        Value_flowers,
        Value_limos,
        Value_windowsinstallation,
        Value_securitysystems,
        Value_photographystores,
        Value_makeupartists,
        Value_truck_rental,
        Value_desserts,
        Value_tanning,
        Value_criminaldefense,
        Value_yoga,
        Value_publicservicesgovt,
        Value_childcloth,
        Value_giftshops,
        Value_homeandgarden,
        Value_autoglass,
        Value_libraries,
        Value_homeinsurance,
        Value_specialtyschools,
        Value_museums,
        Value_opthamalogists,
        Value_discountstore,
        Value_mattresses,
        Value_nutritionists,
        Value_auto_detailing,
        Value_salad,
        Value_gardeners,
        Value_mags,
        Value_artsandcrafts,
        Value_wineries,
        Value_motorcycledealers,
        Value_dermatology,
        Value_golf,
        Value_bbq,
        Value_wedding_planning,
        Value_sportswear,
        Value_handyman,
        Value_healthmarkets,
        Value_japanese,
        Value_stationery,
        Value_eyelashservice,
        Value_sportsmed,
        Value_sportsbars,
        Value_home_inspectors,
        Value_bankruptcy,
        Value_sushi,
        Value_arts,
        Value_bikes,
        Value_toys,
        Value_landmarks,
        Value_gutterservices,
        Value_videofilmproductions,
        Value_tattoo,
        Value_blinds,
        Value_social_clubs,
        Value_foodtrucks,
        Value_lighting,
        Value_indpak,
        Value_businessconsulting,
        Value_gourmet,
        Value_naturopathic,
        Value_transmissionrepair,
        Value_pet_training,
        Value_steak,
        Value_martialarts,
        Value_pressurewashers,
        Value_boating,
        Value_vintage,
        Value_reupholstery,
        Value_adultedu,
        Value_weightlosscenters,
        Value_airport_shuttles,
        Value_juicebars,
        Value_hairremoval,
        Value_videoandgames,
        Value_endodontists,
        Value_djs,
        Value_windowwashing,
        Value_mobilephonerepair,
        Value_pediatric_dentists,
        Value_donuts,
        Value_campgrounds,
        Value_damagerestoration,
        Value_radiostations,
        Value_nightlife,
        Value_pediatricians,
        Value_general_litigation,
        Value_metalfabricators,
        Value_hobbyshops,
        Value_vacation_rentals,
        Value_diners,
        Value_landscapearchitects,
        Value_realestatelawyers,
        Value_junkremovalandhauling,
        Value_packingsupplies,
        Value_cosmeticsurgeons,
        Value_lifecoach,
        Value_medicalspa,
        Value_dogwalkers,
        Value_earnosethroat,
        Value_periodontists,
        Value_tutoring,
        Value_partysupplies,
        Value_fishing,
        Value_wine_bars,
        Value_thai,
        Value_usedcardealers,
        Value_cabinetry,
        Value_musicvenues,
        Value_cocktailbars,
        Value_thrift_stores,
        Value_mediterranean,
        Value_rehabilitation_center,
        Value_fitness,
        Value_guesthouses,
        Value_shoerepair,
        Value_watches,
        Value_fencesgates,
        Value_garage_door_services,
        Value_shoppingcenters,
        Value_bridal,
        Value_cellphoneaccessories,
        Value_vapeshops,
        Value_signmaking,
        Value_dance_schools,
        Value_petservices,
        Value_waterheaterinstallrepair,
        Value_movietheaters,
        Value_businesslawyers,
        Value_partyequipmentrentals,
        Value_drywall,
        Value_hair_extensions,
        Value_urgent_care,
        Value_danceclubs,
        Value_lounges,
        Value_greek,
        Value_paydayloans,
        Value_farmersmarket,
        Value_dancestudio,
        Value_estateplanning,
        Value_windshieldinstallrepair,
        Value_seafoodmarkets,
        Value_hotelstravel,
        Value_electronicsrepair,
        Value_fabricstores,
        Value_septicservices,
        Value_midwives,
        Value_recyclingcenter,
        Value_festivals,
        Value_dryclean,
        Value_pawn,
        Value_tex_mex,
        Value_motorcyclerepair,
        Value_carpenters,
        Value_leather,
        Value_recording_studios,
        Value_smog_check_stations,
        Value_asianfusion,
        Value_fishnchips,
        Value_lingerie,
        Value_payroll,
        Value_laundromat,
        Value_horsebackriding,
        Value_solarinstallation,
        Value_candy,
        Value_football,
        Value_fooddeliveryservices,
        Value_chocolate,
        Value_poolservice,
        Value_localflavor,
        Value_softwaredevelopment,
        Value_vietnamese,
        Value_privatetutors,
        Value_bookkeepers,
        Value_videographers,
        Value_snowremoval,
        Value_musicvideo,
        Value_psychologists,
        Value_swimmingpools,
        Value_irrigation,
        Value_pets,
        Value_televisionserviceproviders,
        Value_screen_printing_tshirt_printing,
        Value_outdoorgear,
        Value_artsupplies,
        Value_duilawyers,
        Value_poolcleaners,
        Value_bowling,
        Value_employmentlawyers,
        Value_framing,
        Value_reflexology,
        Value_british,
        Value_hiking,
        Value_telecommunications,
        Value_summer_camps,
        Value_educationservices,
        Value_active,
        Value_breweries,
        Value_hearingaidproviders,
        Value_assistedliving,
        Value_buffets,
        Value_language_schools,
        Value_commercialrealestate,
        Value_hotdog,
        Value_glassandmirrors,
        Value_pilates,
        Value_reiki,
        Value_doorsales,
        Value_stereo_installation,
        Value_soup,
        Value_insulationinstallation,
        Value_amusementparks,
        Value_legalservices,
        Value_piercing,
        Value_osteopathicphysicians,
        Value_laser_hair_removal,
        Value_airductcleaning,
        Value_arcades,
        Value_boatcharters,
        Value_decksrailing,
        Value_baby_gear,
        Value_recreation,
        Value_kids_activities,
        Value_divebars,
        Value_medicalsupplies,
        Value_tennis,
        Value_photoboothrentals,
        Value_vinylsiding,
        Value_policedepartments,
        Value_tiling,
        Value_cupcakes,
        Value_wholesale_stores,
        Value_hometheatreinstallation,
        Value_surgeons,
        Value_foodstands,
        Value_outlet_stores,
        Value_permanentmakeup,
        Value_foundationrepair,
        Value_immigrationlawyers,
        Value_cakeshop,
        Value_autocustomization,
        Value_tcm,
        Value_publicrelations,
        Value_publictransport,
        Value_allergist,
        Value_tanningbeds,
        Value_paintstores,
        Value_stadiumsarenas,
        Value_bootcamps,
        Value_bagels,
        Value_careercounseling,
        Value_vitaminssupplements,
        Value_privateinvestigation,
        Value_jewelryrepair,
        Value_bistros,
        Value_playgrounds,
        Value_korean,
        Value_bailbondsmen,
        Value_excavationservices,
        Value_creperies,
        Value_hostels,
        Value_eventservices,
        Value_guns_and_ammo,
        Value_vegetarian,
        Value_spraytanning,
        Value_eyebrowservices,
        Value_dialysisclinics,
        Value_hottubandpool,
        Value_animalshelters,
        Value_musicians,
        Value_refinishing,
        Value_artclasses,
        Value_southern,
        Value_willstrustsprobates,
        Value_latin,
        Value_psychic_astrology,
        Value_laboratorytesting,
        Value_home_organization,
        Value_landsurveying,
        Value_artschools,
        Value_watch_repair,
        Value_occupationaltherapy,
        Value_machinerental,
        Value_international,
        Value_massmedia,
        Value_brasseries,
        Value_boatrepair,
        Value_kebab,
        Value_sharedofficespaces,
        Value_blowoutservices,
        Value_fireprotection,
        Value_security,
        Value_truckrepair,
        Value_roadsideassist,
        Value_titleloans,
        Value_poolhalls,
        Value_testprep,
        Value_karate,
        Value_tea,
        Value_appraisalservices,
        Value_butcher,
        Value_screenprinting,
        Value_painmanagement,
        Value_mortgagelenders,
        Value_pakistani,
        Value_costumes,
        Value_wheelrimrepair,
        Value_countryclubs,
        Value_diagnosticimaging,
        Value_media,
        Value_carpetinstallation,
        Value_fireplace,
        Value_vocation,
        Value_beerbar,
        Value_neurologist,
        Value_bike_repair_maintenance,
        Value_televisionstations,
        Value_cheese,
        Value_bikerentals,
        Value_formalwear,
        Value_countertopinstall,
        Value_trainstations,
        Value_chimneysweeps,
        Value_hospice,
        Value_menshair,
        Value_casinos,
        Value_streetvendors,
        Value_caribbean,
        Value_importedfood,
        Value_hypnosis,
        Value_mideastern,
        Value_organic_stores,
        Value_speech_therapists,
        Value_turkish,
        Value_audiologist,
        Value_waterproofing,
        Value_montessori,
        Value_datarecovery,
        Value_laserlasikeyes,
        Value_panasian,
        Value_delicatessen,
        Value_rvparks,
        Value_waterpurification,
        Value_travelagents,
        Value_mobileparks,
        Value_gluten_free,
        Value_karaoke,
        Value_customcakes,
        Value_rafting,
        Value_goldbuyers,
        Value_noodles,
        Value_engraving,
        Value_newcanadian,
        Value_cosmetology_schools,
        Value_propane,
        Value_resorts,
        Value_beverage_stores,
        Value_specialed,
        Value_gastropubs,
        Value_demolitionservices,
        Value_vegan,
        Value_carwindowtinting,
        Value_embroideryandcrochet,
        Value_batterystores,
        Value_beaches,
        Value_adultentertainment,
        Value_intervaltraininggyms,
        Value_radiologists,
        Value_shutters,
        Value_farmingequipment,
        Value_translationservices,
        Value_condominiums,
        Value_homeautomation,
        Value_custommerchandise,
        Value_taekwondo,
        Value_cannabis_clinics,
        Value_autoloanproviders,
        Value_comfortfood,
        Value_welldrilling,
        Value_beergarden,
        Value_packingservices,
        Value_healthinsurance,
        Value_cajun,
        Value_petboarding,
        Value_homestaging,
        Value_threadingservices,
        Value_personalchefs,
        Value_tapas,
        Value_rugs,
        Value_gastroenterologist,
        Value_personalcare,
        Value_floraldesigners,
        Value_bubbletea,
        Value_spanish,
        Value_uniforms,
        Value_cprclasses,
        Value_psychics,
        Value_utilities,
        Value_airports,
        Value_plus_size_fashion,
        Value_vehiclewraps,
        Value_skatingrinks,
        Value_shavedice,
        Value_personal_shopping,
        Value_estatephotography,
        Value_diagnosticservices,
        Value_workerscomplaw,
        Value_knittingsupplies,
        Value_hookah_bars,
        Value_craneservices,
        Value_horse_boarding,
        Value_homewindowtinting,
        Value_swimminglessons,
        Value_rv_dealers,
        Value_tapasmallplates,
        Value_synagogues,
        Value_halal,
        Value_comicbooks,
        Value_boatdealers,
        Value_plasticsurgeons,
        Value_videogamestores,
        Value_modern_european,
        Value_rvrepair,
        Value_gun_ranges,
        Value_oncologist,
        Value_soulfood,
        Value_headshops,
        Value_airlines,
        Value_furniturerepair,
        Value_tacos,
        Value_structuralengineers,
        Value_mobilehomes,
        Value_boxing,
        Value_bavarian,
        Value_lakes,
        Value_trailerdealers,
        Value_luggage,
        Value_culturalcenter,
        Value_skillednursing,
        Value_meditationcenters,
        Value_auctionhouses,
        Value_wigs,
        Value_mediators,
        Value_candlestores,
        Value_taxlaw,
        Value_lawnservices,
        Value_partybusrentals,
        Value_adult,
        Value_urologists,
        Value_trailerrepair,
        Value_swimwear,
        Value_mini_golf,
        Value_pianoservices,
        Value_mailboxcenters,
        Value_blooddonation,
        Value_barreclasses,
        Value_chickenshop,
        Value_dog_parks,
        Value_farmequipmentrepair,
        Value_musicproduction,
        Value_patiocoverings,
        Value_billingservices,
        Value_gymnastics,
        Value_seniorcenters,
        Value_escapegames,
        Value_intlgrocery,
        Value_skiresorts,
        Value_homenetworkinstall,
        Value_doulas,
        Value_homedevelopers,
        Value_awnings,
        Value_vinyl_records,
        Value_perfume,
        Value_hawaiian,
        Value_trailerrental,
        Value_medicallaw,
        Value_orthotics,
        Value_vacationrentalagents,
        Value_herbsandspices,
        Value_autoupholstery,
        Value_diving,
        Value_flightinstruction,
        Value_coffeeroasteries,
        Value_cremationservices,
        Value_cookingschools,
        Value_coffeeteasupplies,
        Value_environmentaltesting,
        Value_trophyshops,
        Value_firstaidclasses,
        Value_vehicleshipping,
        Value_personalassistants,
        Value_psychotherapists,
        Value_dumpsterrental,
        Value_shredding,
        Value_teethwhitening,
        Value_enviroabatement,
        Value_saunas,
        Value_petadoption,
        Value_sleepspecialists,
        Value_officiants,
        Value_souvenirs,
        Value_rvrental,
        Value_medicaltransportation,
        Value_paintandsip,
        Value_editorialservices,
        Value_huntingfishingsupplies,
        Value_estateliquidation,
        Value_jazzandblues,
        Value_wallpapering,
        Value_firewood,
        Value_magicians,
        Value_hairloss,
        Value_petphotography,
        Value_wildlifecontrol,
        Value_gardens,
        Value_debtrelief,
        Value_carbuyers,
        Value_buses,
        Value_cheesesteaks,
        Value_musicinstrumentservices,
        Value_sportsteams,
        Value_kickboxing,
        Value_balloonservices,
        Value_maternity,
        Value_guitarstores,
        Value_motorcyclinggear,
        Value_tattooremoval,
        Value_religiousschools,
        Value_cuban,
        Value_paddleboarding,
        Value_fleamarkets,
        Value_endocrinologists,
        Value_marinas,
        Value_christmastrees,
        Value_university_housing,
        Value_cannabisdispensaries,
        Value_stucco,
        Value_ramen,
        Value_kiosk,
        Value_departmentsofmotorvehicles,
        Value_zoos,
        Value_petbreeders,
        Value_comedyclubs,
        Value_walkinclinics,
        Value_communitycenters,
        Value_pretzels,
        Value_cookingclasses,
        Value_installmentloans,
        Value_fertility,
        Value_bespoke,
        Value_pulmonologist,
        Value_nailtechnicians,
        Value_daycamps,
        Value_firearmtraining,
        Value_powdercoating,
        Value_facepainting,
        Value_lebanese,
        Value_bingo,
        Value_winetours,
        Value_outdoorfurniture,
        Value_truckdealers,
        Value_tvmounting,
        Value_hats,
        Value_currencyexchange,
        Value_nursepractitioner,
        Value_wholesalers,
        Value_prosthetics,
        Value_talentagencies,
        Value_fitnessequipment,
        Value_winetastingroom,
        Value_castles,
        Value_african,
        Value_peruvian,
        Value_waterdelivery,
        Value_irish_pubs,
        Value_groutservices,
        Value_farms,
        Value_irish,
        Value_hearing_aids,
        Value_internetcafe,
        Value_courthouses,
        Value_filipino,
        Value_buddhist_temples,
        Value_waffles,
        Value_brazilianjiujitsu,
        Value_sandblasting,
        Value_scuba,
        Value_generatorinstallrepair,
        Value_portuguese,
        Value_nephrologists,
        Value_bartenders,
        Value_hifi,
        Value_diyfood,
        Value_housingcooperatives,
        Value_carbrokers,
        Value_golfequipment,
        Value_firedepartments,
        Value_races,
        Value_skishops,
        Value_golflessons,
        Value_selfdefenseclasses,
        Value_addictionmedicine,
        Value_towncarservice,
        Value_livestocksupply,
        Value_gaybars,
        Value_taichi,
        Value_townhall,
        Value_gelato,
        Value_climbing,
        Value_nannys,
        Value_registrationservices,
        Value_dimsum,
        Value_smokehouse,
        Value_prosthodontists,
        Value_skateshops,
        Value_hennaartists,
        Value_furnitureassembly,
        Value_wraps,
        Value_cyclingclasses,
        Value_aquariumservices,
        Value_pathologists,
        Value_poke,
        Value_anesthesiologists,
        Value_machineshops,
        Value_artificialturf,
        Value_archery,
        Value_salvadoran,
        Value_csa,
        Value_cardioclasses,
        Value_pensions,
        Value_historicaltours,
        Value_paintball,
        Value_chinesemartialarts,
        Value_horsequipment,
        Value_spiritual_shop,
        Value_lactationservices,
        Value_mortuaryservices,
        Value_commissionedartists,
        Value_kosher,
        Value_collegecounseling,
        Value_safestores,
        Value_walkingtours,
        Value_rhematologists,
        Value_aquariums,
        Value_parentingclasses,
        Value_hydrojetting,
        Value_mobilityequipment,
        Value_processservers,
        Value_popcorn,
        Value_currysausage,
        Value_mosques,
        Value_mountainbiking,
        Value_boudoirphotography,
        Value_swabian,
        Value_distilleries,
        Value_moroccan,
        Value_fireworks,
        Value_roofinspectors,
        Value_eldercareplanning,
        Value_surfing,
        Value_cafeteria,
        Value_grillingequipment,
        Value_brazilian,
        Value_homeenergyauditors,
        Value_cantonese,
        Value_retinaspecialists,
        Value_foodbanks,
        Value_metrostations,
        Value_trafficticketinglaw,
        Value_businessfinancing,
        Value_matchmakers,
        Value_food_court,
        Value_teambuilding,
        Value_visitorcenters,
        Value_suppliesrestaurant,
        Value_ticketsales,
        Value_religiousitems,
        Value_lasertag,
        Value_tabletopgames,
        Value_courtreporters,
        Value_pettransport,
        Value_autodamageassessment,
        Value_childbirthedu,
        Value_knifesharpening,
        Value_acaibowls,
        Value_pastashops,
        Value_persian,
        Value_bustours,
        Value_taiwanese,
        Value_boattours,
        Value_serbocroatian,
        Value_usedbooks,
        Value_pianostores,
        Value_mobiledentrepair,
        Value_clockrepair,
        Value_valetservices,
        Value_donationcenter,
        Value_szechuan,
        Value_reststops,
        Value_taxidermy,
        Value_sugaring,
        Value_mongolian,
        Value_basketballcourts,
        Value_carauctions,
        Value_rentfurniture,
        Value_falafel,
        Value_gokarts,
        Value_partycharacters,
        Value_opera,
        Value_clowns,
        Value_vascularmedicine,
        Value_tenantlaw,
        Value_psychicmediums,
        Value_skate_parks,
        Value_beergardens,
        Value_fingerprinting,
        Value_liceservices,
        Value_speechtraining,
        Value_spinesurgeons,
        Value_socialsecuritylaw,
        Value_emergencyrooms,
        Value_iplaw,
        Value_poolbilliards,
        Value_battingcages,
        Value_bouncehouserentals,
        Value_safetyequipment,
        Value_surfshop,
        Value_hotpot,
        Value_healthcoach,
        Value_colombian,
        Value_racetracks,
        Value_ethiopian,
        Value_dentalhygienists,
        Value_backshop,
        Value_cryotherapy,
        Value_weddingchappels,
        Value_trampoline,
        Value_macarons,
        Value_adoptionservices,
        Value_acnetreatment,
        Value_prenatal,
        Value_massage_schools,
        Value_contractlaw,
        Value_jetskis,
        Value_medicalfoot,
        Value_productdesign,
        Value_homeownerassociation,
        Value_yelpevents,
        Value_tuina,
        Value_sailing,
        Value_dietitians,
        Value_hospitalists,
        Value_foodtours,
        Value_autosecurity,
        Value_hauntedhouses,
        Value_wildlifehunting,
        Value_herbalshops,
        Value_clothingrental,
        Value_tableware,
        Value_brewingsupplies,
        Value_embassy,
        Value_baseballfields,
        Value_concept_shops,
        Value_furclothing,
        Value_linens,
        Value_himalayan,
        Value_rock_climbing,
        Value_popupshops,
        Value_gunsmith,
        Value_publicplazas,
        Value_argentine,
        Value_discgolf,
        Value_hockeyequipment,
        Value_golfcartdealers,
        Value_passportvisaservices,
        Value_artrestoration,
        Value_ayurveda,
        Value_artmuseums,
        Value_localfishstores,
        Value_emergencypethospital,
        Value_bettingcenters,
        Value_housesitters,
        Value_backflowservices,
        Value_hazardouswastedisposal,
        Value_waterstores,
        Value_afghani,
        Value_polish,
        Value_hydroponics,
        Value_fondue,
        Value_pumpkinpatches,
        Value_skydiving,
        Value_pickyourown,
        Value_colonics,
        Value_holidaydecorations,
        Value_sextherapists,
        Value_xmasmarkets,
        Value_behavioranalysts,
        Value_paintyourownpottery,
        Value_ranches,
        Value_tradclothing,
        Value_dancewear,
        Value_attractionfarms,
        Value_indoor_playcenter,
        Value_3dprinting,
        Value_motodealers,
        Value_oliveoil,
        Value_bookbinding,
        Value_dominican,
        Value_fengshui,
        Value_russian,
        Value_puertorican,
        Value_bodycontouring,
        Value_waterparks,
        Value_atvrentals,
        Value_hindu_temples,
        Value_raw_food,
        Value_basque,
        Value_hydrotherapy,
        Value_airportlounges,
        Value_arabian,
        Value_muaythai,
        Value_marchingbands,
        Value_challengecourses,
        Value_placentaencapsulation,
        Value_empanadas,
        Value_healthretreats,
        Value_brewpubs,
        Value_junkyards,
        Value_solarpanelcleaning,
        Value_motorepairs,
        Value_audiovisualequipmentrental,
        Value_canteen,
        Value_emergencymedicine,
        Value_homeopathic,
        Value_patentlaw,
        Value_petcremation,
        Value_disabilitylaw,
        Value_alternativemedicine,
        Value_privatejetcharter,
        Value_seasonaldecorservices,
        Value_circuittraininggyms,
        Value_civiccenter,
        Value_qigong,
        Value_shoeshine,
        Value_militarysurplus,
        Value_floatspa,
        Value_memorycare,
        Value_eroticmassage,
        Value_sud_ouest,
        Value_easterngerman,
        Value_motorcycle_rental,
        Value_calligraphy,
        Value_donairs,
        Value_ivhydration,
        Value_bangladeshi,
        Value_publicadjusters,
        Value_whiskeybars,
        Value_tikibars,
        Value_birdshops,
        Value_publicart,
        Value_poledancingclasses,
        Value_surfschools,
        Value_evchargingstations,
        Value_infectiousdisease,
        Value_golfcartrentals,
        Value_nursingschools,
        Value_malaysian,
        Value_artspacerentals,
        Value_poutineries,
        Value_cabaret,
        Value_digitizingservices,
        Value_aircraftrepairs,
        Value_trafficschools,
        Value_venezuelan,
        Value_proctologist,
        Value_austrian,
        Value_belgian,
        Value_hot_air_balloons,
        Value_busrental,
        Value_aircraftdealers,
        Value_beachequipmentrental,
        Value_privateschools,
        Value_veteransorganizations,
        Value_alsatian,
        Value_communitygardens,
        Value_snorkeling,
        Value_cheerleading,
        Value_honey,
        Value_fischbroetchen,
        Value_beachbars,
        Value_conciergemedicine,
        Value_tubing,
        Value_cideries,
        Value_horseracing,
        Value_customsbrokers,
        Value_provencal,
        Value_waldorfschools,
        Value_newmexican,
        Value_scottish,
        Value_cannabisreferrals,
        Value_pianobars,
        Value_generalfestivals,
        Value_fencing,
        Value_champagne_bars,
        Value_gametruckrental,
        Value_diveshops,
        Value_driveintheater,
        Value_carshares,
        Value_palatine,
        Value_childrensmuseums,
        Value_trains,
        Value_gerontologist,
        Value_streetart,
        Value_zipline,
        Value_caricatures,
        Value_teppanyaki,
        Value_underseamedicine,
        Value_cambodian,
        Value_animalholistic,
        Value_oriental,
        Value_wok,
        Value_popuprestaurants,
        Value_fishmonger,
        Value_schnitzel,
        Value_dutyfreeshops,
        Value_frozenfood,
        Value_skiing,
        Value_airsoft,
        Value_preventivemedicine,
        Value_biketours,
        Value_winetasteclasses,
        Value_baden,
        Value_stripclubs,
        Value_northerngerman,
        Value_golfshops,
        Value_icedelivery,
        Value_laotian,
        Value_beertours,
        Value_farriers,
        Value_ferries,
        Value_stripteasedancers,
        Value_aerialfitness,
        Value_haitian,
        Value_aerialtours,
        Value_homelessshelters,
        Value_pethospice,
        Value_bikesharing,
        Value_bartendingschools,
        Value_scooterrentals,
        Value_observatories,
        Value_sikhtemples,
        Value_kiteboarding,
        Value_psychoanalysts,
        Value_speakeasies,
        Value_hessian,
        Value_corsican,
        Value_communitybookbox,
        Value_dinnertheater,
        Value_cannabiscollective,
        Value_astrologers,
        Value_scavengerhunts,
        Value_indonesian,
        Value_bocceball,
        Value_pettingzoos,
        Value_entertainmentlaw,
        Value_emstraining,
        Value_whalewatchingtours,
        Value_childproofing,
        Value_marketstalls,
        Value_animalphysicaltherapy,
        Value_airportterminals,
        Value_vocalcoach,
        Value_indoorlandscaping,
        Value_arttours,
        Value_friterie,
        Value_mobile_home_repair,
        Value_shanghainese,
        Value_izakaya,
        Value_armenian,
        Value_flowersonly,
        Value_cigarbars,
        Value_scandinavian,
        Value_ethnicmarkets,
        Value_hepatologists,
        Value_choirs,
        Value_otologists,
        Value_eatertainment,
        Value_duplicationservices,
        Value_halotherapy,
        Value_duischools,
        Value_kombucha,
        Value_registry_office,
        Value_hungarian,
        Value_skischools,
        Value_props,
        Value_countrydancehalls,
        Value_neurotologists,
        Value_petinsurance,
        Value_outdoormovies,
        Value_publicmarkets,
        Value_tradefairs,
        Value_bubblesoccer,
        Value_phlebologists,
        Value_teachersupplies,
        Value_architecturaltours,
        Value_shavedsnow,
        Value_badminton,
        Value_habilitativeservices,
        Value_busstations,
        Value_foodsafety,
        Value_kitchenincubators,
        Value_flyboarding,
        Value_pedicabs,
        Value_planetarium,
        Value_themedcafes,
        Value_fueldocks,
        Value_sophrologists,
        Value_freediving,
        Value_milkshakebars,
        Value_toxicologists,
        Value_lyonnais,
        Value_geneticists,
        Value_virtualrealitycenters,
        Value_photoclasses,
        Value_hanggliding,
        Value_municipality,
        Value_reptileshops,
        Value_carousels,
        Value_singaporean,
        Value_oxygenbars,
        Value_squash,
        Value_forestry,
        Value_burmese,
        Value_lancenters,
        Value_sledding,
        Value_playsets,
        Value_racingexperience,
        Value_australian,
        Value_srilankan,
        Value_rotisserie_chicken,
        Value_tabac,
        Value_gliding,
        Value_immunodermatologists,
        Value_ukrainian,
        Value_czech,
        Value_sportspsychologists,
        Value_barcrawl,
        Value_drivethrubars,
        Value_honduran,
        Value_neuropathologists,
        Value_supperclubs,
        Value_baguettes,
        Value_sommelierservices,
        Value_syrian,
        Value_parasailing,
        Value_sunglasses,
        Value_rodeo,
        Value_rhinelandian,
        Value_egyptian,
        Value_triviahosts,
        Value_tickets,
        Value_cannabistours,
        Value_youth_club,
        Value_unofficialyelpevents,
        Value_interlocksystems,
        Value_southafrican,
        Value_partybikerentals,
        Value_funfair,
        Value_animalassistedtherapy,
        Value_beerhall,
        Value_glassblowing,
        Value_hkcafe,
        Value_auvergnat,
        Value_eltern_cafes,
        Value_trinidadian,
        Value_mountainhuts,
        Value_flatbread,
        Value_conveyorsushi,
        Value_potatoes,
        Value_dramaschools,
        Value_japacurry,
        Value_scootertours,
        Value_reunion,
        Value_ultrasoundimagingcenters,
        Value_luggagestorage,
        Value_carpetdyeing,
        Value_nicaraguan,
        Value_kidshairsalons,
        Value_boatpartsandsupplies,
        Value_uzbek,
        Value_ethicgrocery,
        Value_studiotaping,
        Value_senegalese,
        Value_cablecars,
        Value_bourguignon,
        Value_taxoffice,
        Value_saunainstallation,
        Value_silentdisco,
        Value_makerspaces,
        Value_agriturismi,
        Value_swissfood,
        Value_bathing_area,
        Value_hybridcarrepair,
        Value_lightingstores,
        Value_nudist,
        Value_mystics,
        Value_halfwayhouses,
        Value_axethrowing,
        Value_tastingclasses,
        Value_tuscan,
        Value_diyautoshop,
        Value_clubcrawl,
        Value_nicois,
        Value_aestheticians,
        Value_mohels,
        Value_bulgarian,
        Value_estheticians,
        Value_catalan,
        Value_service_stations,
        Value_experiences,
        Value_record_labels,
        Value_parklets,
        Value_eastern_european,
        Value_organdonorservices,
        Value_napoletana,
        Value_bikeparking,
        Value_kitchensupplies,
        Value_hakka,
        Value_sicilian,
        Value_hotsprings,
        Value_ateliers,
        Value_franconian,
        Value_mistingsystemservices,
        Value_spermclinic,
        Value_jewish,
        Value_trattorie,
        Value_gluhwein,
        Value_georgian,
        Value_watertaxis,
        Value_romanian,
        Value_mauritius,
        Value_bungeejumping,
        Value_dentalhygeiniststorefront,
        Value_petwasteremoval,
        Value_israeli,
        Value_gamemeat,
        Value_snuggleservices,
        Value_stockings,
        Value_beachvolleyball,
        Value_gemstonesandminerals,
        Value_sugarshacks,
        Value_guamanian,
        Value_circusschools,
        Value_chimneycakes,
        Value_cheesetastingclasses,
        Value_bikeshop,
        Value_drycleaninglaundry,
        Value_flemish,
        Value_hainan,
        Value_slovakian,
        Value_aviationservices,
        Value_bicyclepaths,
        Value_ethnicgrocery,
        Value_ceremonialclothing,
        Value_bikerepair,
        Value_bobsledding,
        Value_electricitysuppliers,
        Value_berrichon,
        Value_iberian,
        Value_sardinian,
        Value_shoppingpassages,
        Value_danish,
        Value_bulkbilling,
        Value_volleyball,
        Value_watersuppliers,
        Value_zorbing,
        Value_apartmentagents,
        Value_dentalhygienistsmobile,
        Value_drones,
        Value_vermouthbars,
        Value_pubfood,
        Value_coffeeshops,
        Value_swedish,
        Value_cypriot,
        Value_calabrian,
        Value_piadina,
        Value_karaokerental,
        Value_naturalgassuppliers,
        Value_roman,
        Value_hotel_bar,
        Value_norwegian,
        Value_tropicalmedicine,
        Value_pita,
        Value_pekinese,
        Value_bicycles,
        Value_dancerestaurants,
        Value_sleepwear,
        Value_metaldetectorservices,
        Value_autoelectric,
        Value_gasstations,
        Value_lawn_bowling,
        Value_yugoslav,
        Value_czechslovakian,
        Value_meatballs,
        Value_arroceria_paella,
        Value_chilean,
        Value_modern_australian,
        Value_newzealand,
        Value_island_pub,
        Value_hunan,
        Value_fasil,
        Value_osteopaths,
        Value_handball,
        Value_specialbikes,
        Value_jailsandprisons,
        Value_galician,
        Value_churros,
        Value_shrines,
        Value_opensandwiches,
        Value_cheekufta,
        Value_fuzhou,
        Value__none
      };
    struct TypeValue
      {
        bool in_known_list;
        std::string string_value;
        TypeValueKnownValues list_value;

        TypeValue(void);
        TypeValue(const TypeValue &other);
        TypeValue(TypeValueKnownValues other);
        bool  operator==(const TypeValue &other) const;
        bool  operator!=(const TypeValue &other) const;
        bool  operator<(const TypeValue &other) const;
        bool  operator>(const TypeValue &other) const;
        bool  operator>=(const TypeValue &other) const;
        bool  operator<=(const TypeValue &other) const;

      };

    static TypeValueKnownValues  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValueKnownValues the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    YelpCategoryAliasJSON(const YelpCategoryAliasJSON &);
    YelpCategoryAliasJSON & operator=(const YelpCategoryAliasJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    YelpCategoryAliasJSON(void);
    YelpCategoryAliasJSON(TypeValue init_value);
    YelpCategoryAliasJSON(const char *init_value);
    YelpCategoryAliasJSON(std::string init_value);
    YelpCategoryAliasJSON(TypeValueKnownValues init_value);
    virtual ~YelpCategoryAliasJSON(void);
    bool  hasValue(void) const;
    TypeValue  getValue(void);
    const TypeValue  getValue(void) const;
    const char * getValueAsChars(void) const;
    std::string  getValueAsString(void) const;


    void setValue(TypeValue new_value)
      {
        flagHasValue = true;
        storeValue = new_value;
      }
    void setValue(const char *chars)
      {
        TypeValueKnownValues known = stringToValue(chars);
        TypeValue new_value;
        if (known == Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setValue(new_value);
      }
    void setValue(std::string the_string)
      {
        setValue(the_string.c_str());
      }
    void setValue(TypeValueKnownValues new_value)
      {
        TypeValue new_full_value;
        assert(new_value != Value__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setValue(new_full_value);
      }
    void unsetValue(void)
      {
        flagHasValue = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        if (storeValue.in_known_list)
          {
            switch (storeValue.list_value)
              {
                case Value_contractors:
                    handler->string_value("contractors");
                    break;
                case Value_lawyers:
                    handler->string_value("lawyers");
                    break;
                case Value_physicians:
                    handler->string_value("physicians");
                    break;
                case Value_hair:
                    handler->string_value("hair");
                    break;
                case Value_autorepair:
                    handler->string_value("autorepair");
                    break;
                case Value_insurance:
                    handler->string_value("insurance");
                    break;
                case Value_realestateagents:
                    handler->string_value("realestateagents");
                    break;
                case Value_accountants:
                    handler->string_value("accountants");
                    break;
                case Value_banks:
                    handler->string_value("banks");
                    break;
                case Value_hotels:
                    handler->string_value("hotels");
                    break;
                case Value_churches:
                    handler->string_value("churches");
                    break;
                case Value_grocery:
                    handler->string_value("grocery");
                    break;
                case Value_elementaryschools:
                    handler->string_value("elementaryschools");
                    break;
                case Value_itservices:
                    handler->string_value("itservices");
                    break;
                case Value_hotdogs:
                    handler->string_value("hotdogs");
                    break;
                case Value_generaldentistry:
                    handler->string_value("generaldentistry");
                    break;
                case Value_electricians:
                    handler->string_value("electricians");
                    break;
                case Value_plumbing:
                    handler->string_value("plumbing");
                    break;
                case Value_professional:
                    handler->string_value("professional");
                    break;
                case Value_pizza:
                    handler->string_value("pizza");
                    break;
                case Value_religiousorgs:
                    handler->string_value("religiousorgs");
                    break;
                case Value_hvac:
                    handler->string_value("hvac");
                    break;
                case Value_realestatesvcs:
                    handler->string_value("realestatesvcs");
                    break;
                case Value_bakeries:
                    handler->string_value("bakeries");
                    break;
                case Value_apartments:
                    handler->string_value("apartments");
                    break;
                case Value_car_dealers:
                    handler->string_value("car_dealers");
                    break;
                case Value_restaurants:
                    handler->string_value("restaurants");
                    break;
                case Value_architects:
                    handler->string_value("architects");
                    break;
                case Value_convenience:
                    handler->string_value("convenience");
                    break;
                case Value_furniture:
                    handler->string_value("furniture");
                    break;
                case Value_childcare:
                    handler->string_value("childcare");
                    break;
                case Value_landscaping:
                    handler->string_value("landscaping");
                    break;
                case Value_othersalons:
                    handler->string_value("othersalons");
                    break;
                case Value_womenscloth:
                    handler->string_value("womenscloth");
                    break;
                case Value_painters:
                    handler->string_value("painters");
                    break;
                case Value_coffee:
                    handler->string_value("coffee");
                    break;
                case Value_highschools:
                    handler->string_value("highschools");
                    break;
                case Value_massage:
                    handler->string_value("massage");
                    break;
                case Value_sandwiches:
                    handler->string_value("sandwiches");
                    break;
                case Value_jewelry:
                    handler->string_value("jewelry");
                    break;
                case Value_servicestations:
                    handler->string_value("servicestations");
                    break;
                case Value_chiropractors:
                    handler->string_value("chiropractors");
                    break;
                case Value_dentists:
                    handler->string_value("dentists");
                    break;
                case Value_nonprofit:
                    handler->string_value("nonprofit");
                    break;
                case Value_c_and_mh:
                    handler->string_value("c_and_mh");
                    break;
                case Value_homeservices:
                    handler->string_value("homeservices");
                    break;
                case Value_mortgagebrokers:
                    handler->string_value("mortgagebrokers");
                    break;
                case Value_physicaltherapy:
                    handler->string_value("physicaltherapy");
                    break;
                case Value_marketing:
                    handler->string_value("marketing");
                    break;
                case Value_tradamerican:
                    handler->string_value("tradamerican");
                    break;
                case Value_education:
                    handler->string_value("education");
                    break;
                case Value_tires:
                    handler->string_value("tires");
                    break;
                case Value_optometrists:
                    handler->string_value("optometrists");
                    break;
                case Value_burgers:
                    handler->string_value("burgers");
                    break;
                case Value_mobilephones:
                    handler->string_value("mobilephones");
                    break;
                case Value_drugstores:
                    handler->string_value("drugstores");
                    break;
                case Value_beer_and_wine:
                    handler->string_value("beer_and_wine");
                    break;
                case Value_health:
                    handler->string_value("health");
                    break;
                case Value_accessories:
                    handler->string_value("accessories");
                    break;
                case Value_vet:
                    handler->string_value("vet");
                    break;
                case Value_roofing:
                    handler->string_value("roofing");
                    break;
                case Value_web_design:
                    handler->string_value("web_design");
                    break;
                case Value_italian:
                    handler->string_value("italian");
                    break;
                case Value_employmentagencies:
                    handler->string_value("employmentagencies");
                    break;
                case Value_localservices:
                    handler->string_value("localservices");
                    break;
                case Value_bodyshops:
                    handler->string_value("bodyshops");
                    break;
                case Value_skincare:
                    handler->string_value("skincare");
                    break;
                case Value_mexican:
                    handler->string_value("mexican");
                    break;
                case Value_familydr:
                    handler->string_value("familydr");
                    break;
                case Value_shoes:
                    handler->string_value("shoes");
                    break;
                case Value_autopartssupplies:
                    handler->string_value("autopartssupplies");
                    break;
                case Value_barbers:
                    handler->string_value("barbers");
                    break;
                case Value_preschools:
                    handler->string_value("preschools");
                    break;
                case Value_florists:
                    handler->string_value("florists");
                    break;
                case Value_opticians:
                    handler->string_value("opticians");
                    break;
                case Value_propertymgmt:
                    handler->string_value("propertymgmt");
                    break;
                case Value_taxservices:
                    handler->string_value("taxservices");
                    break;
                case Value_interiordesign:
                    handler->string_value("interiordesign");
                    break;
                case Value_fashion:
                    handler->string_value("fashion");
                    break;
                case Value_homecleaning:
                    handler->string_value("homecleaning");
                    break;
                case Value_financialadvising:
                    handler->string_value("financialadvising");
                    break;
                case Value_internalmed:
                    handler->string_value("internalmed");
                    break;
                case Value_homeappliancerepair:
                    handler->string_value("homeappliancerepair");
                    break;
                case Value_electronics:
                    handler->string_value("electronics");
                    break;
                case Value_copyshops:
                    handler->string_value("copyshops");
                    break;
                case Value_flooring:
                    handler->string_value("flooring");
                    break;
                case Value_bars:
                    handler->string_value("bars");
                    break;
                case Value_laundryservices:
                    handler->string_value("laundryservices");
                    break;
                case Value_cosmetics:
                    handler->string_value("cosmetics");
                    break;
                case Value_photographers:
                    handler->string_value("photographers");
                    break;
                case Value_carpet_cleaning:
                    handler->string_value("carpet_cleaning");
                    break;
                case Value_graphicdesign:
                    handler->string_value("graphicdesign");
                    break;
                case Value_pubs:
                    handler->string_value("pubs");
                    break;
                case Value_catering:
                    handler->string_value("catering");
                    break;
                case Value_buildingsupplies:
                    handler->string_value("buildingsupplies");
                    break;
                case Value_gardening:
                    handler->string_value("gardening");
                    break;
                case Value_cafes:
                    handler->string_value("cafes");
                    break;
                case Value_cosmeticdentists:
                    handler->string_value("cosmeticdentists");
                    break;
                case Value_computers:
                    handler->string_value("computers");
                    break;
                case Value_breakfast_brunch:
                    handler->string_value("breakfast_brunch");
                    break;
                case Value_investing:
                    handler->string_value("investing");
                    break;
                case Value_taxis:
                    handler->string_value("taxis");
                    break;
                case Value_towing:
                    handler->string_value("towing");
                    break;
                case Value_healthtrainers:
                    handler->string_value("healthtrainers");
                    break;
                case Value_selfstorage:
                    handler->string_value("selfstorage");
                    break;
                case Value_chinese:
                    handler->string_value("chinese");
                    break;
                case Value_homehealthcare:
                    handler->string_value("homehealthcare");
                    break;
                case Value_travelservices:
                    handler->string_value("travelservices");
                    break;
                case Value_gyms:
                    handler->string_value("gyms");
                    break;
                case Value_personal_injury:
                    handler->string_value("personal_injury");
                    break;
                case Value_antiques:
                    handler->string_value("antiques");
                    break;
                case Value_officecleaning:
                    handler->string_value("officecleaning");
                    break;
                case Value_galleries:
                    handler->string_value("galleries");
                    break;
                case Value_oralsurgeons:
                    handler->string_value("oralsurgeons");
                    break;
                case Value_divorce:
                    handler->string_value("divorce");
                    break;
                case Value_realestate:
                    handler->string_value("realestate");
                    break;
                case Value_menscloth:
                    handler->string_value("menscloth");
                    break;
                case Value_deptstores:
                    handler->string_value("deptstores");
                    break;
                case Value_advertising:
                    handler->string_value("advertising");
                    break;
                case Value_massage_therapy:
                    handler->string_value("massage_therapy");
                    break;
                case Value_pet_sitting:
                    handler->string_value("pet_sitting");
                    break;
                case Value_obgyn:
                    handler->string_value("obgyn");
                    break;
                case Value_shopping:
                    handler->string_value("shopping");
                    break;
                case Value_movers:
                    handler->string_value("movers");
                    break;
                case Value_theater:
                    handler->string_value("theater");
                    break;
                case Value_icecream:
                    handler->string_value("icecream");
                    break;
                case Value_auto:
                    handler->string_value("auto");
                    break;
                case Value_sports_clubs:
                    handler->string_value("sports_clubs");
                    break;
                case Value_funeralservices:
                    handler->string_value("funeralservices");
                    break;
                case Value_medcenters:
                    handler->string_value("medcenters");
                    break;
                case Value_delis:
                    handler->string_value("delis");
                    break;
                case Value_homedecor:
                    handler->string_value("homedecor");
                    break;
                case Value_venues:
                    handler->string_value("venues");
                    break;
                case Value_meats:
                    handler->string_value("meats");
                    break;
                case Value_driving_schools:
                    handler->string_value("driving_schools");
                    break;
                case Value_pharmacy:
                    handler->string_value("pharmacy");
                    break;
                case Value_hospitals:
                    handler->string_value("hospitals");
                    break;
                case Value_hardware:
                    handler->string_value("hardware");
                    break;
                case Value_eventplanning:
                    handler->string_value("eventplanning");
                    break;
                case Value_sessionphotography:
                    handler->string_value("sessionphotography");
                    break;
                case Value_carrental:
                    handler->string_value("carrental");
                    break;
                case Value_german:
                    handler->string_value("german");
                    break;
                case Value_newamerican:
                    handler->string_value("newamerican");
                    break;
                case Value_amateursportsteams:
                    handler->string_value("amateursportsteams");
                    break;
                case Value_seafood:
                    handler->string_value("seafood");
                    break;
                case Value_sportgoods:
                    handler->string_value("sportgoods");
                    break;
                case Value_beautysvc:
                    handler->string_value("beautysvc");
                    break;
                case Value_locksmiths:
                    handler->string_value("locksmiths");
                    break;
                case Value_couriers:
                    handler->string_value("couriers");
                    break;
                case Value_pest_control:
                    handler->string_value("pest_control");
                    break;
                case Value_hairstylists:
                    handler->string_value("hairstylists");
                    break;
                case Value_parks:
                    handler->string_value("parks");
                    break;
                case Value_carwash:
                    handler->string_value("carwash");
                    break;
                case Value_spas:
                    handler->string_value("spas");
                    break;
                case Value_podiatrists:
                    handler->string_value("podiatrists");
                    break;
                case Value_food:
                    handler->string_value("food");
                    break;
                case Value_acupuncture:
                    handler->string_value("acupuncture");
                    break;
                case Value_musicalinstrumentsandteachers:
                    handler->string_value("musicalinstrumentsandteachers");
                    break;
                case Value_orthodontists:
                    handler->string_value("orthodontists");
                    break;
                case Value_kitchenandbath:
                    handler->string_value("kitchenandbath");
                    break;
                case Value_sewingalterations:
                    handler->string_value("sewingalterations");
                    break;
                case Value_notaries:
                    handler->string_value("notaries");
                    break;
                case Value_oilchange:
                    handler->string_value("oilchange");
                    break;
                case Value_eventphotography:
                    handler->string_value("eventphotography");
                    break;
                case Value_financialservices:
                    handler->string_value("financialservices");
                    break;
                case Value_groomer:
                    handler->string_value("groomer");
                    break;
                case Value_retirement_homes:
                    handler->string_value("retirement_homes");
                    break;
                case Value_officeequipment:
                    handler->string_value("officeequipment");
                    break;
                case Value_postoffices:
                    handler->string_value("postoffices");
                    break;
                case Value_isps:
                    handler->string_value("isps");
                    break;
                case Value_chicken_wings:
                    handler->string_value("chicken_wings");
                    break;
                case Value_orthopedists:
                    handler->string_value("orthopedists");
                    break;
                case Value_printmedia:
                    handler->string_value("printmedia");
                    break;
                case Value_treeservices:
                    handler->string_value("treeservices");
                    break;
                case Value_waxing:
                    handler->string_value("waxing");
                    break;
                case Value_collegeuniv:
                    handler->string_value("collegeuniv");
                    break;
                case Value_psychiatrists:
                    handler->string_value("psychiatrists");
                    break;
                case Value_tobaccoshops:
                    handler->string_value("tobaccoshops");
                    break;
                case Value_carpeting:
                    handler->string_value("carpeting");
                    break;
                case Value_transport:
                    handler->string_value("transport");
                    break;
                case Value_parking:
                    handler->string_value("parking");
                    break;
                case Value_bookstores:
                    handler->string_value("bookstores");
                    break;
                case Value_french:
                    handler->string_value("french");
                    break;
                case Value_autoinsurance:
                    handler->string_value("autoinsurance");
                    break;
                case Value_tours:
                    handler->string_value("tours");
                    break;
                case Value_petstore:
                    handler->string_value("petstore");
                    break;
                case Value_lifeinsurance:
                    handler->string_value("lifeinsurance");
                    break;
                case Value_appliances:
                    handler->string_value("appliances");
                    break;
                case Value_bedbreakfast:
                    handler->string_value("bedbreakfast");
                    break;
                case Value_shipping_centers:
                    handler->string_value("shipping_centers");
                    break;
                case Value_markets:
                    handler->string_value("markets");
                    break;
                case Value_cardiology:
                    handler->string_value("cardiology");
                    break;
                case Value_masonry_concrete:
                    handler->string_value("masonry_concrete");
                    break;
                case Value_flowers:
                    handler->string_value("flowers");
                    break;
                case Value_limos:
                    handler->string_value("limos");
                    break;
                case Value_windowsinstallation:
                    handler->string_value("windowsinstallation");
                    break;
                case Value_securitysystems:
                    handler->string_value("securitysystems");
                    break;
                case Value_photographystores:
                    handler->string_value("photographystores");
                    break;
                case Value_makeupartists:
                    handler->string_value("makeupartists");
                    break;
                case Value_truck_rental:
                    handler->string_value("truck_rental");
                    break;
                case Value_desserts:
                    handler->string_value("desserts");
                    break;
                case Value_tanning:
                    handler->string_value("tanning");
                    break;
                case Value_criminaldefense:
                    handler->string_value("criminaldefense");
                    break;
                case Value_yoga:
                    handler->string_value("yoga");
                    break;
                case Value_publicservicesgovt:
                    handler->string_value("publicservicesgovt");
                    break;
                case Value_childcloth:
                    handler->string_value("childcloth");
                    break;
                case Value_giftshops:
                    handler->string_value("giftshops");
                    break;
                case Value_homeandgarden:
                    handler->string_value("homeandgarden");
                    break;
                case Value_autoglass:
                    handler->string_value("autoglass");
                    break;
                case Value_libraries:
                    handler->string_value("libraries");
                    break;
                case Value_homeinsurance:
                    handler->string_value("homeinsurance");
                    break;
                case Value_specialtyschools:
                    handler->string_value("specialtyschools");
                    break;
                case Value_museums:
                    handler->string_value("museums");
                    break;
                case Value_opthamalogists:
                    handler->string_value("opthamalogists");
                    break;
                case Value_discountstore:
                    handler->string_value("discountstore");
                    break;
                case Value_mattresses:
                    handler->string_value("mattresses");
                    break;
                case Value_nutritionists:
                    handler->string_value("nutritionists");
                    break;
                case Value_auto_detailing:
                    handler->string_value("auto_detailing");
                    break;
                case Value_salad:
                    handler->string_value("salad");
                    break;
                case Value_gardeners:
                    handler->string_value("gardeners");
                    break;
                case Value_mags:
                    handler->string_value("mags");
                    break;
                case Value_artsandcrafts:
                    handler->string_value("artsandcrafts");
                    break;
                case Value_wineries:
                    handler->string_value("wineries");
                    break;
                case Value_motorcycledealers:
                    handler->string_value("motorcycledealers");
                    break;
                case Value_dermatology:
                    handler->string_value("dermatology");
                    break;
                case Value_golf:
                    handler->string_value("golf");
                    break;
                case Value_bbq:
                    handler->string_value("bbq");
                    break;
                case Value_wedding_planning:
                    handler->string_value("wedding_planning");
                    break;
                case Value_sportswear:
                    handler->string_value("sportswear");
                    break;
                case Value_handyman:
                    handler->string_value("handyman");
                    break;
                case Value_healthmarkets:
                    handler->string_value("healthmarkets");
                    break;
                case Value_japanese:
                    handler->string_value("japanese");
                    break;
                case Value_stationery:
                    handler->string_value("stationery");
                    break;
                case Value_eyelashservice:
                    handler->string_value("eyelashservice");
                    break;
                case Value_sportsmed:
                    handler->string_value("sportsmed");
                    break;
                case Value_sportsbars:
                    handler->string_value("sportsbars");
                    break;
                case Value_home_inspectors:
                    handler->string_value("home_inspectors");
                    break;
                case Value_bankruptcy:
                    handler->string_value("bankruptcy");
                    break;
                case Value_sushi:
                    handler->string_value("sushi");
                    break;
                case Value_arts:
                    handler->string_value("arts");
                    break;
                case Value_bikes:
                    handler->string_value("bikes");
                    break;
                case Value_toys:
                    handler->string_value("toys");
                    break;
                case Value_landmarks:
                    handler->string_value("landmarks");
                    break;
                case Value_gutterservices:
                    handler->string_value("gutterservices");
                    break;
                case Value_videofilmproductions:
                    handler->string_value("videofilmproductions");
                    break;
                case Value_tattoo:
                    handler->string_value("tattoo");
                    break;
                case Value_blinds:
                    handler->string_value("blinds");
                    break;
                case Value_social_clubs:
                    handler->string_value("social_clubs");
                    break;
                case Value_foodtrucks:
                    handler->string_value("foodtrucks");
                    break;
                case Value_lighting:
                    handler->string_value("lighting");
                    break;
                case Value_indpak:
                    handler->string_value("indpak");
                    break;
                case Value_businessconsulting:
                    handler->string_value("businessconsulting");
                    break;
                case Value_gourmet:
                    handler->string_value("gourmet");
                    break;
                case Value_naturopathic:
                    handler->string_value("naturopathic");
                    break;
                case Value_transmissionrepair:
                    handler->string_value("transmissionrepair");
                    break;
                case Value_pet_training:
                    handler->string_value("pet_training");
                    break;
                case Value_steak:
                    handler->string_value("steak");
                    break;
                case Value_martialarts:
                    handler->string_value("martialarts");
                    break;
                case Value_pressurewashers:
                    handler->string_value("pressurewashers");
                    break;
                case Value_boating:
                    handler->string_value("boating");
                    break;
                case Value_vintage:
                    handler->string_value("vintage");
                    break;
                case Value_reupholstery:
                    handler->string_value("reupholstery");
                    break;
                case Value_adultedu:
                    handler->string_value("adultedu");
                    break;
                case Value_weightlosscenters:
                    handler->string_value("weightlosscenters");
                    break;
                case Value_airport_shuttles:
                    handler->string_value("airport_shuttles");
                    break;
                case Value_juicebars:
                    handler->string_value("juicebars");
                    break;
                case Value_hairremoval:
                    handler->string_value("hairremoval");
                    break;
                case Value_videoandgames:
                    handler->string_value("videoandgames");
                    break;
                case Value_endodontists:
                    handler->string_value("endodontists");
                    break;
                case Value_djs:
                    handler->string_value("djs");
                    break;
                case Value_windowwashing:
                    handler->string_value("windowwashing");
                    break;
                case Value_mobilephonerepair:
                    handler->string_value("mobilephonerepair");
                    break;
                case Value_pediatric_dentists:
                    handler->string_value("pediatric_dentists");
                    break;
                case Value_donuts:
                    handler->string_value("donuts");
                    break;
                case Value_campgrounds:
                    handler->string_value("campgrounds");
                    break;
                case Value_damagerestoration:
                    handler->string_value("damagerestoration");
                    break;
                case Value_radiostations:
                    handler->string_value("radiostations");
                    break;
                case Value_nightlife:
                    handler->string_value("nightlife");
                    break;
                case Value_pediatricians:
                    handler->string_value("pediatricians");
                    break;
                case Value_general_litigation:
                    handler->string_value("general_litigation");
                    break;
                case Value_metalfabricators:
                    handler->string_value("metalfabricators");
                    break;
                case Value_hobbyshops:
                    handler->string_value("hobbyshops");
                    break;
                case Value_vacation_rentals:
                    handler->string_value("vacation_rentals");
                    break;
                case Value_diners:
                    handler->string_value("diners");
                    break;
                case Value_landscapearchitects:
                    handler->string_value("landscapearchitects");
                    break;
                case Value_realestatelawyers:
                    handler->string_value("realestatelawyers");
                    break;
                case Value_junkremovalandhauling:
                    handler->string_value("junkremovalandhauling");
                    break;
                case Value_packingsupplies:
                    handler->string_value("packingsupplies");
                    break;
                case Value_cosmeticsurgeons:
                    handler->string_value("cosmeticsurgeons");
                    break;
                case Value_lifecoach:
                    handler->string_value("lifecoach");
                    break;
                case Value_medicalspa:
                    handler->string_value("medicalspa");
                    break;
                case Value_dogwalkers:
                    handler->string_value("dogwalkers");
                    break;
                case Value_earnosethroat:
                    handler->string_value("earnosethroat");
                    break;
                case Value_periodontists:
                    handler->string_value("periodontists");
                    break;
                case Value_tutoring:
                    handler->string_value("tutoring");
                    break;
                case Value_partysupplies:
                    handler->string_value("partysupplies");
                    break;
                case Value_fishing:
                    handler->string_value("fishing");
                    break;
                case Value_wine_bars:
                    handler->string_value("wine_bars");
                    break;
                case Value_thai:
                    handler->string_value("thai");
                    break;
                case Value_usedcardealers:
                    handler->string_value("usedcardealers");
                    break;
                case Value_cabinetry:
                    handler->string_value("cabinetry");
                    break;
                case Value_musicvenues:
                    handler->string_value("musicvenues");
                    break;
                case Value_cocktailbars:
                    handler->string_value("cocktailbars");
                    break;
                case Value_thrift_stores:
                    handler->string_value("thrift_stores");
                    break;
                case Value_mediterranean:
                    handler->string_value("mediterranean");
                    break;
                case Value_rehabilitation_center:
                    handler->string_value("rehabilitation_center");
                    break;
                case Value_fitness:
                    handler->string_value("fitness");
                    break;
                case Value_guesthouses:
                    handler->string_value("guesthouses");
                    break;
                case Value_shoerepair:
                    handler->string_value("shoerepair");
                    break;
                case Value_watches:
                    handler->string_value("watches");
                    break;
                case Value_fencesgates:
                    handler->string_value("fencesgates");
                    break;
                case Value_garage_door_services:
                    handler->string_value("garage_door_services");
                    break;
                case Value_shoppingcenters:
                    handler->string_value("shoppingcenters");
                    break;
                case Value_bridal:
                    handler->string_value("bridal");
                    break;
                case Value_cellphoneaccessories:
                    handler->string_value("cellphoneaccessories");
                    break;
                case Value_vapeshops:
                    handler->string_value("vapeshops");
                    break;
                case Value_signmaking:
                    handler->string_value("signmaking");
                    break;
                case Value_dance_schools:
                    handler->string_value("dance_schools");
                    break;
                case Value_petservices:
                    handler->string_value("petservices");
                    break;
                case Value_waterheaterinstallrepair:
                    handler->string_value("waterheaterinstallrepair");
                    break;
                case Value_movietheaters:
                    handler->string_value("movietheaters");
                    break;
                case Value_businesslawyers:
                    handler->string_value("businesslawyers");
                    break;
                case Value_partyequipmentrentals:
                    handler->string_value("partyequipmentrentals");
                    break;
                case Value_drywall:
                    handler->string_value("drywall");
                    break;
                case Value_hair_extensions:
                    handler->string_value("hair_extensions");
                    break;
                case Value_urgent_care:
                    handler->string_value("urgent_care");
                    break;
                case Value_danceclubs:
                    handler->string_value("danceclubs");
                    break;
                case Value_lounges:
                    handler->string_value("lounges");
                    break;
                case Value_greek:
                    handler->string_value("greek");
                    break;
                case Value_paydayloans:
                    handler->string_value("paydayloans");
                    break;
                case Value_farmersmarket:
                    handler->string_value("farmersmarket");
                    break;
                case Value_dancestudio:
                    handler->string_value("dancestudio");
                    break;
                case Value_estateplanning:
                    handler->string_value("estateplanning");
                    break;
                case Value_windshieldinstallrepair:
                    handler->string_value("windshieldinstallrepair");
                    break;
                case Value_seafoodmarkets:
                    handler->string_value("seafoodmarkets");
                    break;
                case Value_hotelstravel:
                    handler->string_value("hotelstravel");
                    break;
                case Value_electronicsrepair:
                    handler->string_value("electronicsrepair");
                    break;
                case Value_fabricstores:
                    handler->string_value("fabricstores");
                    break;
                case Value_septicservices:
                    handler->string_value("septicservices");
                    break;
                case Value_midwives:
                    handler->string_value("midwives");
                    break;
                case Value_recyclingcenter:
                    handler->string_value("recyclingcenter");
                    break;
                case Value_festivals:
                    handler->string_value("festivals");
                    break;
                case Value_dryclean:
                    handler->string_value("dryclean");
                    break;
                case Value_pawn:
                    handler->string_value("pawn");
                    break;
                case Value_tex_mex:
                    handler->string_value("tex-mex");
                    break;
                case Value_motorcyclerepair:
                    handler->string_value("motorcyclerepair");
                    break;
                case Value_carpenters:
                    handler->string_value("carpenters");
                    break;
                case Value_leather:
                    handler->string_value("leather");
                    break;
                case Value_recording_studios:
                    handler->string_value("recording_studios");
                    break;
                case Value_smog_check_stations:
                    handler->string_value("smog_check_stations");
                    break;
                case Value_asianfusion:
                    handler->string_value("asianfusion");
                    break;
                case Value_fishnchips:
                    handler->string_value("fishnchips");
                    break;
                case Value_lingerie:
                    handler->string_value("lingerie");
                    break;
                case Value_payroll:
                    handler->string_value("payroll");
                    break;
                case Value_laundromat:
                    handler->string_value("laundromat");
                    break;
                case Value_horsebackriding:
                    handler->string_value("horsebackriding");
                    break;
                case Value_solarinstallation:
                    handler->string_value("solarinstallation");
                    break;
                case Value_candy:
                    handler->string_value("candy");
                    break;
                case Value_football:
                    handler->string_value("football");
                    break;
                case Value_fooddeliveryservices:
                    handler->string_value("fooddeliveryservices");
                    break;
                case Value_chocolate:
                    handler->string_value("chocolate");
                    break;
                case Value_poolservice:
                    handler->string_value("poolservice");
                    break;
                case Value_localflavor:
                    handler->string_value("localflavor");
                    break;
                case Value_softwaredevelopment:
                    handler->string_value("softwaredevelopment");
                    break;
                case Value_vietnamese:
                    handler->string_value("vietnamese");
                    break;
                case Value_privatetutors:
                    handler->string_value("privatetutors");
                    break;
                case Value_bookkeepers:
                    handler->string_value("bookkeepers");
                    break;
                case Value_videographers:
                    handler->string_value("videographers");
                    break;
                case Value_snowremoval:
                    handler->string_value("snowremoval");
                    break;
                case Value_musicvideo:
                    handler->string_value("musicvideo");
                    break;
                case Value_psychologists:
                    handler->string_value("psychologists");
                    break;
                case Value_swimmingpools:
                    handler->string_value("swimmingpools");
                    break;
                case Value_irrigation:
                    handler->string_value("irrigation");
                    break;
                case Value_pets:
                    handler->string_value("pets");
                    break;
                case Value_televisionserviceproviders:
                    handler->string_value("televisionserviceproviders");
                    break;
                case Value_screen_printing_tshirt_printing:
                    handler->string_value("screen_printing_tshirt_printing");
                    break;
                case Value_outdoorgear:
                    handler->string_value("outdoorgear");
                    break;
                case Value_artsupplies:
                    handler->string_value("artsupplies");
                    break;
                case Value_duilawyers:
                    handler->string_value("duilawyers");
                    break;
                case Value_poolcleaners:
                    handler->string_value("poolcleaners");
                    break;
                case Value_bowling:
                    handler->string_value("bowling");
                    break;
                case Value_employmentlawyers:
                    handler->string_value("employmentlawyers");
                    break;
                case Value_framing:
                    handler->string_value("framing");
                    break;
                case Value_reflexology:
                    handler->string_value("reflexology");
                    break;
                case Value_british:
                    handler->string_value("british");
                    break;
                case Value_hiking:
                    handler->string_value("hiking");
                    break;
                case Value_telecommunications:
                    handler->string_value("telecommunications");
                    break;
                case Value_summer_camps:
                    handler->string_value("summer_camps");
                    break;
                case Value_educationservices:
                    handler->string_value("educationservices");
                    break;
                case Value_active:
                    handler->string_value("active");
                    break;
                case Value_breweries:
                    handler->string_value("breweries");
                    break;
                case Value_hearingaidproviders:
                    handler->string_value("hearingaidproviders");
                    break;
                case Value_assistedliving:
                    handler->string_value("assistedliving");
                    break;
                case Value_buffets:
                    handler->string_value("buffets");
                    break;
                case Value_language_schools:
                    handler->string_value("language_schools");
                    break;
                case Value_commercialrealestate:
                    handler->string_value("commercialrealestate");
                    break;
                case Value_hotdog:
                    handler->string_value("hotdog");
                    break;
                case Value_glassandmirrors:
                    handler->string_value("glassandmirrors");
                    break;
                case Value_pilates:
                    handler->string_value("pilates");
                    break;
                case Value_reiki:
                    handler->string_value("reiki");
                    break;
                case Value_doorsales:
                    handler->string_value("doorsales");
                    break;
                case Value_stereo_installation:
                    handler->string_value("stereo_installation");
                    break;
                case Value_soup:
                    handler->string_value("soup");
                    break;
                case Value_insulationinstallation:
                    handler->string_value("insulationinstallation");
                    break;
                case Value_amusementparks:
                    handler->string_value("amusementparks");
                    break;
                case Value_legalservices:
                    handler->string_value("legalservices");
                    break;
                case Value_piercing:
                    handler->string_value("piercing");
                    break;
                case Value_osteopathicphysicians:
                    handler->string_value("osteopathicphysicians");
                    break;
                case Value_laser_hair_removal:
                    handler->string_value("laser_hair_removal");
                    break;
                case Value_airductcleaning:
                    handler->string_value("airductcleaning");
                    break;
                case Value_arcades:
                    handler->string_value("arcades");
                    break;
                case Value_boatcharters:
                    handler->string_value("boatcharters");
                    break;
                case Value_decksrailing:
                    handler->string_value("decksrailing");
                    break;
                case Value_baby_gear:
                    handler->string_value("baby_gear");
                    break;
                case Value_recreation:
                    handler->string_value("recreation");
                    break;
                case Value_kids_activities:
                    handler->string_value("kids_activities");
                    break;
                case Value_divebars:
                    handler->string_value("divebars");
                    break;
                case Value_medicalsupplies:
                    handler->string_value("medicalsupplies");
                    break;
                case Value_tennis:
                    handler->string_value("tennis");
                    break;
                case Value_photoboothrentals:
                    handler->string_value("photoboothrentals");
                    break;
                case Value_vinylsiding:
                    handler->string_value("vinylsiding");
                    break;
                case Value_policedepartments:
                    handler->string_value("policedepartments");
                    break;
                case Value_tiling:
                    handler->string_value("tiling");
                    break;
                case Value_cupcakes:
                    handler->string_value("cupcakes");
                    break;
                case Value_wholesale_stores:
                    handler->string_value("wholesale_stores");
                    break;
                case Value_hometheatreinstallation:
                    handler->string_value("hometheatreinstallation");
                    break;
                case Value_surgeons:
                    handler->string_value("surgeons");
                    break;
                case Value_foodstands:
                    handler->string_value("foodstands");
                    break;
                case Value_outlet_stores:
                    handler->string_value("outlet_stores");
                    break;
                case Value_permanentmakeup:
                    handler->string_value("permanentmakeup");
                    break;
                case Value_foundationrepair:
                    handler->string_value("foundationrepair");
                    break;
                case Value_immigrationlawyers:
                    handler->string_value("immigrationlawyers");
                    break;
                case Value_cakeshop:
                    handler->string_value("cakeshop");
                    break;
                case Value_autocustomization:
                    handler->string_value("autocustomization");
                    break;
                case Value_tcm:
                    handler->string_value("tcm");
                    break;
                case Value_publicrelations:
                    handler->string_value("publicrelations");
                    break;
                case Value_publictransport:
                    handler->string_value("publictransport");
                    break;
                case Value_allergist:
                    handler->string_value("allergist");
                    break;
                case Value_tanningbeds:
                    handler->string_value("tanningbeds");
                    break;
                case Value_paintstores:
                    handler->string_value("paintstores");
                    break;
                case Value_stadiumsarenas:
                    handler->string_value("stadiumsarenas");
                    break;
                case Value_bootcamps:
                    handler->string_value("bootcamps");
                    break;
                case Value_bagels:
                    handler->string_value("bagels");
                    break;
                case Value_careercounseling:
                    handler->string_value("careercounseling");
                    break;
                case Value_vitaminssupplements:
                    handler->string_value("vitaminssupplements");
                    break;
                case Value_privateinvestigation:
                    handler->string_value("privateinvestigation");
                    break;
                case Value_jewelryrepair:
                    handler->string_value("jewelryrepair");
                    break;
                case Value_bistros:
                    handler->string_value("bistros");
                    break;
                case Value_playgrounds:
                    handler->string_value("playgrounds");
                    break;
                case Value_korean:
                    handler->string_value("korean");
                    break;
                case Value_bailbondsmen:
                    handler->string_value("bailbondsmen");
                    break;
                case Value_excavationservices:
                    handler->string_value("excavationservices");
                    break;
                case Value_creperies:
                    handler->string_value("creperies");
                    break;
                case Value_hostels:
                    handler->string_value("hostels");
                    break;
                case Value_eventservices:
                    handler->string_value("eventservices");
                    break;
                case Value_guns_and_ammo:
                    handler->string_value("guns_and_ammo");
                    break;
                case Value_vegetarian:
                    handler->string_value("vegetarian");
                    break;
                case Value_spraytanning:
                    handler->string_value("spraytanning");
                    break;
                case Value_eyebrowservices:
                    handler->string_value("eyebrowservices");
                    break;
                case Value_dialysisclinics:
                    handler->string_value("dialysisclinics");
                    break;
                case Value_hottubandpool:
                    handler->string_value("hottubandpool");
                    break;
                case Value_animalshelters:
                    handler->string_value("animalshelters");
                    break;
                case Value_musicians:
                    handler->string_value("musicians");
                    break;
                case Value_refinishing:
                    handler->string_value("refinishing");
                    break;
                case Value_artclasses:
                    handler->string_value("artclasses");
                    break;
                case Value_southern:
                    handler->string_value("southern");
                    break;
                case Value_willstrustsprobates:
                    handler->string_value("willstrustsprobates");
                    break;
                case Value_latin:
                    handler->string_value("latin");
                    break;
                case Value_psychic_astrology:
                    handler->string_value("psychic_astrology");
                    break;
                case Value_laboratorytesting:
                    handler->string_value("laboratorytesting");
                    break;
                case Value_home_organization:
                    handler->string_value("home_organization");
                    break;
                case Value_landsurveying:
                    handler->string_value("landsurveying");
                    break;
                case Value_artschools:
                    handler->string_value("artschools");
                    break;
                case Value_watch_repair:
                    handler->string_value("watch_repair");
                    break;
                case Value_occupationaltherapy:
                    handler->string_value("occupationaltherapy");
                    break;
                case Value_machinerental:
                    handler->string_value("machinerental");
                    break;
                case Value_international:
                    handler->string_value("international");
                    break;
                case Value_massmedia:
                    handler->string_value("massmedia");
                    break;
                case Value_brasseries:
                    handler->string_value("brasseries");
                    break;
                case Value_boatrepair:
                    handler->string_value("boatrepair");
                    break;
                case Value_kebab:
                    handler->string_value("kebab");
                    break;
                case Value_sharedofficespaces:
                    handler->string_value("sharedofficespaces");
                    break;
                case Value_blowoutservices:
                    handler->string_value("blowoutservices");
                    break;
                case Value_fireprotection:
                    handler->string_value("fireprotection");
                    break;
                case Value_security:
                    handler->string_value("security");
                    break;
                case Value_truckrepair:
                    handler->string_value("truckrepair");
                    break;
                case Value_roadsideassist:
                    handler->string_value("roadsideassist");
                    break;
                case Value_titleloans:
                    handler->string_value("titleloans");
                    break;
                case Value_poolhalls:
                    handler->string_value("poolhalls");
                    break;
                case Value_testprep:
                    handler->string_value("testprep");
                    break;
                case Value_karate:
                    handler->string_value("karate");
                    break;
                case Value_tea:
                    handler->string_value("tea");
                    break;
                case Value_appraisalservices:
                    handler->string_value("appraisalservices");
                    break;
                case Value_butcher:
                    handler->string_value("butcher");
                    break;
                case Value_screenprinting:
                    handler->string_value("screenprinting");
                    break;
                case Value_painmanagement:
                    handler->string_value("painmanagement");
                    break;
                case Value_mortgagelenders:
                    handler->string_value("mortgagelenders");
                    break;
                case Value_pakistani:
                    handler->string_value("pakistani");
                    break;
                case Value_costumes:
                    handler->string_value("costumes");
                    break;
                case Value_wheelrimrepair:
                    handler->string_value("wheelrimrepair");
                    break;
                case Value_countryclubs:
                    handler->string_value("countryclubs");
                    break;
                case Value_diagnosticimaging:
                    handler->string_value("diagnosticimaging");
                    break;
                case Value_media:
                    handler->string_value("media");
                    break;
                case Value_carpetinstallation:
                    handler->string_value("carpetinstallation");
                    break;
                case Value_fireplace:
                    handler->string_value("fireplace");
                    break;
                case Value_vocation:
                    handler->string_value("vocation");
                    break;
                case Value_beerbar:
                    handler->string_value("beerbar");
                    break;
                case Value_neurologist:
                    handler->string_value("neurologist");
                    break;
                case Value_bike_repair_maintenance:
                    handler->string_value("bike_repair_maintenance");
                    break;
                case Value_televisionstations:
                    handler->string_value("televisionstations");
                    break;
                case Value_cheese:
                    handler->string_value("cheese");
                    break;
                case Value_bikerentals:
                    handler->string_value("bikerentals");
                    break;
                case Value_formalwear:
                    handler->string_value("formalwear");
                    break;
                case Value_countertopinstall:
                    handler->string_value("countertopinstall");
                    break;
                case Value_trainstations:
                    handler->string_value("trainstations");
                    break;
                case Value_chimneysweeps:
                    handler->string_value("chimneysweeps");
                    break;
                case Value_hospice:
                    handler->string_value("hospice");
                    break;
                case Value_menshair:
                    handler->string_value("menshair");
                    break;
                case Value_casinos:
                    handler->string_value("casinos");
                    break;
                case Value_streetvendors:
                    handler->string_value("streetvendors");
                    break;
                case Value_caribbean:
                    handler->string_value("caribbean");
                    break;
                case Value_importedfood:
                    handler->string_value("importedfood");
                    break;
                case Value_hypnosis:
                    handler->string_value("hypnosis");
                    break;
                case Value_mideastern:
                    handler->string_value("mideastern");
                    break;
                case Value_organic_stores:
                    handler->string_value("organic_stores");
                    break;
                case Value_speech_therapists:
                    handler->string_value("speech_therapists");
                    break;
                case Value_turkish:
                    handler->string_value("turkish");
                    break;
                case Value_audiologist:
                    handler->string_value("audiologist");
                    break;
                case Value_waterproofing:
                    handler->string_value("waterproofing");
                    break;
                case Value_montessori:
                    handler->string_value("montessori");
                    break;
                case Value_datarecovery:
                    handler->string_value("datarecovery");
                    break;
                case Value_laserlasikeyes:
                    handler->string_value("laserlasikeyes");
                    break;
                case Value_panasian:
                    handler->string_value("panasian");
                    break;
                case Value_delicatessen:
                    handler->string_value("delicatessen");
                    break;
                case Value_rvparks:
                    handler->string_value("rvparks");
                    break;
                case Value_waterpurification:
                    handler->string_value("waterpurification");
                    break;
                case Value_travelagents:
                    handler->string_value("travelagents");
                    break;
                case Value_mobileparks:
                    handler->string_value("mobileparks");
                    break;
                case Value_gluten_free:
                    handler->string_value("gluten_free");
                    break;
                case Value_karaoke:
                    handler->string_value("karaoke");
                    break;
                case Value_customcakes:
                    handler->string_value("customcakes");
                    break;
                case Value_rafting:
                    handler->string_value("rafting");
                    break;
                case Value_goldbuyers:
                    handler->string_value("goldbuyers");
                    break;
                case Value_noodles:
                    handler->string_value("noodles");
                    break;
                case Value_engraving:
                    handler->string_value("engraving");
                    break;
                case Value_newcanadian:
                    handler->string_value("newcanadian");
                    break;
                case Value_cosmetology_schools:
                    handler->string_value("cosmetology_schools");
                    break;
                case Value_propane:
                    handler->string_value("propane");
                    break;
                case Value_resorts:
                    handler->string_value("resorts");
                    break;
                case Value_beverage_stores:
                    handler->string_value("beverage_stores");
                    break;
                case Value_specialed:
                    handler->string_value("specialed");
                    break;
                case Value_gastropubs:
                    handler->string_value("gastropubs");
                    break;
                case Value_demolitionservices:
                    handler->string_value("demolitionservices");
                    break;
                case Value_vegan:
                    handler->string_value("vegan");
                    break;
                case Value_carwindowtinting:
                    handler->string_value("carwindowtinting");
                    break;
                case Value_embroideryandcrochet:
                    handler->string_value("embroideryandcrochet");
                    break;
                case Value_batterystores:
                    handler->string_value("batterystores");
                    break;
                case Value_beaches:
                    handler->string_value("beaches");
                    break;
                case Value_adultentertainment:
                    handler->string_value("adultentertainment");
                    break;
                case Value_intervaltraininggyms:
                    handler->string_value("intervaltraininggyms");
                    break;
                case Value_radiologists:
                    handler->string_value("radiologists");
                    break;
                case Value_shutters:
                    handler->string_value("shutters");
                    break;
                case Value_farmingequipment:
                    handler->string_value("farmingequipment");
                    break;
                case Value_translationservices:
                    handler->string_value("translationservices");
                    break;
                case Value_condominiums:
                    handler->string_value("condominiums");
                    break;
                case Value_homeautomation:
                    handler->string_value("homeautomation");
                    break;
                case Value_custommerchandise:
                    handler->string_value("custommerchandise");
                    break;
                case Value_taekwondo:
                    handler->string_value("taekwondo");
                    break;
                case Value_cannabis_clinics:
                    handler->string_value("cannabis_clinics");
                    break;
                case Value_autoloanproviders:
                    handler->string_value("autoloanproviders");
                    break;
                case Value_comfortfood:
                    handler->string_value("comfortfood");
                    break;
                case Value_welldrilling:
                    handler->string_value("welldrilling");
                    break;
                case Value_beergarden:
                    handler->string_value("beergarden");
                    break;
                case Value_packingservices:
                    handler->string_value("packingservices");
                    break;
                case Value_healthinsurance:
                    handler->string_value("healthinsurance");
                    break;
                case Value_cajun:
                    handler->string_value("cajun");
                    break;
                case Value_petboarding:
                    handler->string_value("petboarding");
                    break;
                case Value_homestaging:
                    handler->string_value("homestaging");
                    break;
                case Value_threadingservices:
                    handler->string_value("threadingservices");
                    break;
                case Value_personalchefs:
                    handler->string_value("personalchefs");
                    break;
                case Value_tapas:
                    handler->string_value("tapas");
                    break;
                case Value_rugs:
                    handler->string_value("rugs");
                    break;
                case Value_gastroenterologist:
                    handler->string_value("gastroenterologist");
                    break;
                case Value_personalcare:
                    handler->string_value("personalcare");
                    break;
                case Value_floraldesigners:
                    handler->string_value("floraldesigners");
                    break;
                case Value_bubbletea:
                    handler->string_value("bubbletea");
                    break;
                case Value_spanish:
                    handler->string_value("spanish");
                    break;
                case Value_uniforms:
                    handler->string_value("uniforms");
                    break;
                case Value_cprclasses:
                    handler->string_value("cprclasses");
                    break;
                case Value_psychics:
                    handler->string_value("psychics");
                    break;
                case Value_utilities:
                    handler->string_value("utilities");
                    break;
                case Value_airports:
                    handler->string_value("airports");
                    break;
                case Value_plus_size_fashion:
                    handler->string_value("plus_size_fashion");
                    break;
                case Value_vehiclewraps:
                    handler->string_value("vehiclewraps");
                    break;
                case Value_skatingrinks:
                    handler->string_value("skatingrinks");
                    break;
                case Value_shavedice:
                    handler->string_value("shavedice");
                    break;
                case Value_personal_shopping:
                    handler->string_value("personal_shopping");
                    break;
                case Value_estatephotography:
                    handler->string_value("estatephotography");
                    break;
                case Value_diagnosticservices:
                    handler->string_value("diagnosticservices");
                    break;
                case Value_workerscomplaw:
                    handler->string_value("workerscomplaw");
                    break;
                case Value_knittingsupplies:
                    handler->string_value("knittingsupplies");
                    break;
                case Value_hookah_bars:
                    handler->string_value("hookah_bars");
                    break;
                case Value_craneservices:
                    handler->string_value("craneservices");
                    break;
                case Value_horse_boarding:
                    handler->string_value("horse_boarding");
                    break;
                case Value_homewindowtinting:
                    handler->string_value("homewindowtinting");
                    break;
                case Value_swimminglessons:
                    handler->string_value("swimminglessons");
                    break;
                case Value_rv_dealers:
                    handler->string_value("rv_dealers");
                    break;
                case Value_tapasmallplates:
                    handler->string_value("tapasmallplates");
                    break;
                case Value_synagogues:
                    handler->string_value("synagogues");
                    break;
                case Value_halal:
                    handler->string_value("halal");
                    break;
                case Value_comicbooks:
                    handler->string_value("comicbooks");
                    break;
                case Value_boatdealers:
                    handler->string_value("boatdealers");
                    break;
                case Value_plasticsurgeons:
                    handler->string_value("plasticsurgeons");
                    break;
                case Value_videogamestores:
                    handler->string_value("videogamestores");
                    break;
                case Value_modern_european:
                    handler->string_value("modern_european");
                    break;
                case Value_rvrepair:
                    handler->string_value("rvrepair");
                    break;
                case Value_gun_ranges:
                    handler->string_value("gun_ranges");
                    break;
                case Value_oncologist:
                    handler->string_value("oncologist");
                    break;
                case Value_soulfood:
                    handler->string_value("soulfood");
                    break;
                case Value_headshops:
                    handler->string_value("headshops");
                    break;
                case Value_airlines:
                    handler->string_value("airlines");
                    break;
                case Value_furniturerepair:
                    handler->string_value("furniturerepair");
                    break;
                case Value_tacos:
                    handler->string_value("tacos");
                    break;
                case Value_structuralengineers:
                    handler->string_value("structuralengineers");
                    break;
                case Value_mobilehomes:
                    handler->string_value("mobilehomes");
                    break;
                case Value_boxing:
                    handler->string_value("boxing");
                    break;
                case Value_bavarian:
                    handler->string_value("bavarian");
                    break;
                case Value_lakes:
                    handler->string_value("lakes");
                    break;
                case Value_trailerdealers:
                    handler->string_value("trailerdealers");
                    break;
                case Value_luggage:
                    handler->string_value("luggage");
                    break;
                case Value_culturalcenter:
                    handler->string_value("culturalcenter");
                    break;
                case Value_skillednursing:
                    handler->string_value("skillednursing");
                    break;
                case Value_meditationcenters:
                    handler->string_value("meditationcenters");
                    break;
                case Value_auctionhouses:
                    handler->string_value("auctionhouses");
                    break;
                case Value_wigs:
                    handler->string_value("wigs");
                    break;
                case Value_mediators:
                    handler->string_value("mediators");
                    break;
                case Value_candlestores:
                    handler->string_value("candlestores");
                    break;
                case Value_taxlaw:
                    handler->string_value("taxlaw");
                    break;
                case Value_lawnservices:
                    handler->string_value("lawnservices");
                    break;
                case Value_partybusrentals:
                    handler->string_value("partybusrentals");
                    break;
                case Value_adult:
                    handler->string_value("adult");
                    break;
                case Value_urologists:
                    handler->string_value("urologists");
                    break;
                case Value_trailerrepair:
                    handler->string_value("trailerrepair");
                    break;
                case Value_swimwear:
                    handler->string_value("swimwear");
                    break;
                case Value_mini_golf:
                    handler->string_value("mini_golf");
                    break;
                case Value_pianoservices:
                    handler->string_value("pianoservices");
                    break;
                case Value_mailboxcenters:
                    handler->string_value("mailboxcenters");
                    break;
                case Value_blooddonation:
                    handler->string_value("blooddonation");
                    break;
                case Value_barreclasses:
                    handler->string_value("barreclasses");
                    break;
                case Value_chickenshop:
                    handler->string_value("chickenshop");
                    break;
                case Value_dog_parks:
                    handler->string_value("dog_parks");
                    break;
                case Value_farmequipmentrepair:
                    handler->string_value("farmequipmentrepair");
                    break;
                case Value_musicproduction:
                    handler->string_value("musicproduction");
                    break;
                case Value_patiocoverings:
                    handler->string_value("patiocoverings");
                    break;
                case Value_billingservices:
                    handler->string_value("billingservices");
                    break;
                case Value_gymnastics:
                    handler->string_value("gymnastics");
                    break;
                case Value_seniorcenters:
                    handler->string_value("seniorcenters");
                    break;
                case Value_escapegames:
                    handler->string_value("escapegames");
                    break;
                case Value_intlgrocery:
                    handler->string_value("intlgrocery");
                    break;
                case Value_skiresorts:
                    handler->string_value("skiresorts");
                    break;
                case Value_homenetworkinstall:
                    handler->string_value("homenetworkinstall");
                    break;
                case Value_doulas:
                    handler->string_value("doulas");
                    break;
                case Value_homedevelopers:
                    handler->string_value("homedevelopers");
                    break;
                case Value_awnings:
                    handler->string_value("awnings");
                    break;
                case Value_vinyl_records:
                    handler->string_value("vinyl_records");
                    break;
                case Value_perfume:
                    handler->string_value("perfume");
                    break;
                case Value_hawaiian:
                    handler->string_value("hawaiian");
                    break;
                case Value_trailerrental:
                    handler->string_value("trailerrental");
                    break;
                case Value_medicallaw:
                    handler->string_value("medicallaw");
                    break;
                case Value_orthotics:
                    handler->string_value("orthotics");
                    break;
                case Value_vacationrentalagents:
                    handler->string_value("vacationrentalagents");
                    break;
                case Value_herbsandspices:
                    handler->string_value("herbsandspices");
                    break;
                case Value_autoupholstery:
                    handler->string_value("autoupholstery");
                    break;
                case Value_diving:
                    handler->string_value("diving");
                    break;
                case Value_flightinstruction:
                    handler->string_value("flightinstruction");
                    break;
                case Value_coffeeroasteries:
                    handler->string_value("coffeeroasteries");
                    break;
                case Value_cremationservices:
                    handler->string_value("cremationservices");
                    break;
                case Value_cookingschools:
                    handler->string_value("cookingschools");
                    break;
                case Value_coffeeteasupplies:
                    handler->string_value("coffeeteasupplies");
                    break;
                case Value_environmentaltesting:
                    handler->string_value("environmentaltesting");
                    break;
                case Value_trophyshops:
                    handler->string_value("trophyshops");
                    break;
                case Value_firstaidclasses:
                    handler->string_value("firstaidclasses");
                    break;
                case Value_vehicleshipping:
                    handler->string_value("vehicleshipping");
                    break;
                case Value_personalassistants:
                    handler->string_value("personalassistants");
                    break;
                case Value_psychotherapists:
                    handler->string_value("psychotherapists");
                    break;
                case Value_dumpsterrental:
                    handler->string_value("dumpsterrental");
                    break;
                case Value_shredding:
                    handler->string_value("shredding");
                    break;
                case Value_teethwhitening:
                    handler->string_value("teethwhitening");
                    break;
                case Value_enviroabatement:
                    handler->string_value("enviroabatement");
                    break;
                case Value_saunas:
                    handler->string_value("saunas");
                    break;
                case Value_petadoption:
                    handler->string_value("petadoption");
                    break;
                case Value_sleepspecialists:
                    handler->string_value("sleepspecialists");
                    break;
                case Value_officiants:
                    handler->string_value("officiants");
                    break;
                case Value_souvenirs:
                    handler->string_value("souvenirs");
                    break;
                case Value_rvrental:
                    handler->string_value("rvrental");
                    break;
                case Value_medicaltransportation:
                    handler->string_value("medicaltransportation");
                    break;
                case Value_paintandsip:
                    handler->string_value("paintandsip");
                    break;
                case Value_editorialservices:
                    handler->string_value("editorialservices");
                    break;
                case Value_huntingfishingsupplies:
                    handler->string_value("huntingfishingsupplies");
                    break;
                case Value_estateliquidation:
                    handler->string_value("estateliquidation");
                    break;
                case Value_jazzandblues:
                    handler->string_value("jazzandblues");
                    break;
                case Value_wallpapering:
                    handler->string_value("wallpapering");
                    break;
                case Value_firewood:
                    handler->string_value("firewood");
                    break;
                case Value_magicians:
                    handler->string_value("magicians");
                    break;
                case Value_hairloss:
                    handler->string_value("hairloss");
                    break;
                case Value_petphotography:
                    handler->string_value("petphotography");
                    break;
                case Value_wildlifecontrol:
                    handler->string_value("wildlifecontrol");
                    break;
                case Value_gardens:
                    handler->string_value("gardens");
                    break;
                case Value_debtrelief:
                    handler->string_value("debtrelief");
                    break;
                case Value_carbuyers:
                    handler->string_value("carbuyers");
                    break;
                case Value_buses:
                    handler->string_value("buses");
                    break;
                case Value_cheesesteaks:
                    handler->string_value("cheesesteaks");
                    break;
                case Value_musicinstrumentservices:
                    handler->string_value("musicinstrumentservices");
                    break;
                case Value_sportsteams:
                    handler->string_value("sportsteams");
                    break;
                case Value_kickboxing:
                    handler->string_value("kickboxing");
                    break;
                case Value_balloonservices:
                    handler->string_value("balloonservices");
                    break;
                case Value_maternity:
                    handler->string_value("maternity");
                    break;
                case Value_guitarstores:
                    handler->string_value("guitarstores");
                    break;
                case Value_motorcyclinggear:
                    handler->string_value("motorcyclinggear");
                    break;
                case Value_tattooremoval:
                    handler->string_value("tattooremoval");
                    break;
                case Value_religiousschools:
                    handler->string_value("religiousschools");
                    break;
                case Value_cuban:
                    handler->string_value("cuban");
                    break;
                case Value_paddleboarding:
                    handler->string_value("paddleboarding");
                    break;
                case Value_fleamarkets:
                    handler->string_value("fleamarkets");
                    break;
                case Value_endocrinologists:
                    handler->string_value("endocrinologists");
                    break;
                case Value_marinas:
                    handler->string_value("marinas");
                    break;
                case Value_christmastrees:
                    handler->string_value("christmastrees");
                    break;
                case Value_university_housing:
                    handler->string_value("university_housing");
                    break;
                case Value_cannabisdispensaries:
                    handler->string_value("cannabisdispensaries");
                    break;
                case Value_stucco:
                    handler->string_value("stucco");
                    break;
                case Value_ramen:
                    handler->string_value("ramen");
                    break;
                case Value_kiosk:
                    handler->string_value("kiosk");
                    break;
                case Value_departmentsofmotorvehicles:
                    handler->string_value("departmentsofmotorvehicles");
                    break;
                case Value_zoos:
                    handler->string_value("zoos");
                    break;
                case Value_petbreeders:
                    handler->string_value("petbreeders");
                    break;
                case Value_comedyclubs:
                    handler->string_value("comedyclubs");
                    break;
                case Value_walkinclinics:
                    handler->string_value("walkinclinics");
                    break;
                case Value_communitycenters:
                    handler->string_value("communitycenters");
                    break;
                case Value_pretzels:
                    handler->string_value("pretzels");
                    break;
                case Value_cookingclasses:
                    handler->string_value("cookingclasses");
                    break;
                case Value_installmentloans:
                    handler->string_value("installmentloans");
                    break;
                case Value_fertility:
                    handler->string_value("fertility");
                    break;
                case Value_bespoke:
                    handler->string_value("bespoke");
                    break;
                case Value_pulmonologist:
                    handler->string_value("pulmonologist");
                    break;
                case Value_nailtechnicians:
                    handler->string_value("nailtechnicians");
                    break;
                case Value_daycamps:
                    handler->string_value("daycamps");
                    break;
                case Value_firearmtraining:
                    handler->string_value("firearmtraining");
                    break;
                case Value_powdercoating:
                    handler->string_value("powdercoating");
                    break;
                case Value_facepainting:
                    handler->string_value("facepainting");
                    break;
                case Value_lebanese:
                    handler->string_value("lebanese");
                    break;
                case Value_bingo:
                    handler->string_value("bingo");
                    break;
                case Value_winetours:
                    handler->string_value("winetours");
                    break;
                case Value_outdoorfurniture:
                    handler->string_value("outdoorfurniture");
                    break;
                case Value_truckdealers:
                    handler->string_value("truckdealers");
                    break;
                case Value_tvmounting:
                    handler->string_value("tvmounting");
                    break;
                case Value_hats:
                    handler->string_value("hats");
                    break;
                case Value_currencyexchange:
                    handler->string_value("currencyexchange");
                    break;
                case Value_nursepractitioner:
                    handler->string_value("nursepractitioner");
                    break;
                case Value_wholesalers:
                    handler->string_value("wholesalers");
                    break;
                case Value_prosthetics:
                    handler->string_value("prosthetics");
                    break;
                case Value_talentagencies:
                    handler->string_value("talentagencies");
                    break;
                case Value_fitnessequipment:
                    handler->string_value("fitnessequipment");
                    break;
                case Value_winetastingroom:
                    handler->string_value("winetastingroom");
                    break;
                case Value_castles:
                    handler->string_value("castles");
                    break;
                case Value_african:
                    handler->string_value("african");
                    break;
                case Value_peruvian:
                    handler->string_value("peruvian");
                    break;
                case Value_waterdelivery:
                    handler->string_value("waterdelivery");
                    break;
                case Value_irish_pubs:
                    handler->string_value("irish_pubs");
                    break;
                case Value_groutservices:
                    handler->string_value("groutservices");
                    break;
                case Value_farms:
                    handler->string_value("farms");
                    break;
                case Value_irish:
                    handler->string_value("irish");
                    break;
                case Value_hearing_aids:
                    handler->string_value("hearing_aids");
                    break;
                case Value_internetcafe:
                    handler->string_value("internetcafe");
                    break;
                case Value_courthouses:
                    handler->string_value("courthouses");
                    break;
                case Value_filipino:
                    handler->string_value("filipino");
                    break;
                case Value_buddhist_temples:
                    handler->string_value("buddhist_temples");
                    break;
                case Value_waffles:
                    handler->string_value("waffles");
                    break;
                case Value_brazilianjiujitsu:
                    handler->string_value("brazilianjiujitsu");
                    break;
                case Value_sandblasting:
                    handler->string_value("sandblasting");
                    break;
                case Value_scuba:
                    handler->string_value("scuba");
                    break;
                case Value_generatorinstallrepair:
                    handler->string_value("generatorinstallrepair");
                    break;
                case Value_portuguese:
                    handler->string_value("portuguese");
                    break;
                case Value_nephrologists:
                    handler->string_value("nephrologists");
                    break;
                case Value_bartenders:
                    handler->string_value("bartenders");
                    break;
                case Value_hifi:
                    handler->string_value("hifi");
                    break;
                case Value_diyfood:
                    handler->string_value("diyfood");
                    break;
                case Value_housingcooperatives:
                    handler->string_value("housingcooperatives");
                    break;
                case Value_carbrokers:
                    handler->string_value("carbrokers");
                    break;
                case Value_golfequipment:
                    handler->string_value("golfequipment");
                    break;
                case Value_firedepartments:
                    handler->string_value("firedepartments");
                    break;
                case Value_races:
                    handler->string_value("races");
                    break;
                case Value_skishops:
                    handler->string_value("skishops");
                    break;
                case Value_golflessons:
                    handler->string_value("golflessons");
                    break;
                case Value_selfdefenseclasses:
                    handler->string_value("selfdefenseclasses");
                    break;
                case Value_addictionmedicine:
                    handler->string_value("addictionmedicine");
                    break;
                case Value_towncarservice:
                    handler->string_value("towncarservice");
                    break;
                case Value_livestocksupply:
                    handler->string_value("livestocksupply");
                    break;
                case Value_gaybars:
                    handler->string_value("gaybars");
                    break;
                case Value_taichi:
                    handler->string_value("taichi");
                    break;
                case Value_townhall:
                    handler->string_value("townhall");
                    break;
                case Value_gelato:
                    handler->string_value("gelato");
                    break;
                case Value_climbing:
                    handler->string_value("climbing");
                    break;
                case Value_nannys:
                    handler->string_value("nannys");
                    break;
                case Value_registrationservices:
                    handler->string_value("registrationservices");
                    break;
                case Value_dimsum:
                    handler->string_value("dimsum");
                    break;
                case Value_smokehouse:
                    handler->string_value("smokehouse");
                    break;
                case Value_prosthodontists:
                    handler->string_value("prosthodontists");
                    break;
                case Value_skateshops:
                    handler->string_value("skateshops");
                    break;
                case Value_hennaartists:
                    handler->string_value("hennaartists");
                    break;
                case Value_furnitureassembly:
                    handler->string_value("furnitureassembly");
                    break;
                case Value_wraps:
                    handler->string_value("wraps");
                    break;
                case Value_cyclingclasses:
                    handler->string_value("cyclingclasses");
                    break;
                case Value_aquariumservices:
                    handler->string_value("aquariumservices");
                    break;
                case Value_pathologists:
                    handler->string_value("pathologists");
                    break;
                case Value_poke:
                    handler->string_value("poke");
                    break;
                case Value_anesthesiologists:
                    handler->string_value("anesthesiologists");
                    break;
                case Value_machineshops:
                    handler->string_value("machineshops");
                    break;
                case Value_artificialturf:
                    handler->string_value("artificialturf");
                    break;
                case Value_archery:
                    handler->string_value("archery");
                    break;
                case Value_salvadoran:
                    handler->string_value("salvadoran");
                    break;
                case Value_csa:
                    handler->string_value("csa");
                    break;
                case Value_cardioclasses:
                    handler->string_value("cardioclasses");
                    break;
                case Value_pensions:
                    handler->string_value("pensions");
                    break;
                case Value_historicaltours:
                    handler->string_value("historicaltours");
                    break;
                case Value_paintball:
                    handler->string_value("paintball");
                    break;
                case Value_chinesemartialarts:
                    handler->string_value("chinesemartialarts");
                    break;
                case Value_horsequipment:
                    handler->string_value("horsequipment");
                    break;
                case Value_spiritual_shop:
                    handler->string_value("spiritual_shop");
                    break;
                case Value_lactationservices:
                    handler->string_value("lactationservices");
                    break;
                case Value_mortuaryservices:
                    handler->string_value("mortuaryservices");
                    break;
                case Value_commissionedartists:
                    handler->string_value("commissionedartists");
                    break;
                case Value_kosher:
                    handler->string_value("kosher");
                    break;
                case Value_collegecounseling:
                    handler->string_value("collegecounseling");
                    break;
                case Value_safestores:
                    handler->string_value("safestores");
                    break;
                case Value_walkingtours:
                    handler->string_value("walkingtours");
                    break;
                case Value_rhematologists:
                    handler->string_value("rhematologists");
                    break;
                case Value_aquariums:
                    handler->string_value("aquariums");
                    break;
                case Value_parentingclasses:
                    handler->string_value("parentingclasses");
                    break;
                case Value_hydrojetting:
                    handler->string_value("hydrojetting");
                    break;
                case Value_mobilityequipment:
                    handler->string_value("mobilityequipment");
                    break;
                case Value_processservers:
                    handler->string_value("processservers");
                    break;
                case Value_popcorn:
                    handler->string_value("popcorn");
                    break;
                case Value_currysausage:
                    handler->string_value("currysausage");
                    break;
                case Value_mosques:
                    handler->string_value("mosques");
                    break;
                case Value_mountainbiking:
                    handler->string_value("mountainbiking");
                    break;
                case Value_boudoirphotography:
                    handler->string_value("boudoirphotography");
                    break;
                case Value_swabian:
                    handler->string_value("swabian");
                    break;
                case Value_distilleries:
                    handler->string_value("distilleries");
                    break;
                case Value_moroccan:
                    handler->string_value("moroccan");
                    break;
                case Value_fireworks:
                    handler->string_value("fireworks");
                    break;
                case Value_roofinspectors:
                    handler->string_value("roofinspectors");
                    break;
                case Value_eldercareplanning:
                    handler->string_value("eldercareplanning");
                    break;
                case Value_surfing:
                    handler->string_value("surfing");
                    break;
                case Value_cafeteria:
                    handler->string_value("cafeteria");
                    break;
                case Value_grillingequipment:
                    handler->string_value("grillingequipment");
                    break;
                case Value_brazilian:
                    handler->string_value("brazilian");
                    break;
                case Value_homeenergyauditors:
                    handler->string_value("homeenergyauditors");
                    break;
                case Value_cantonese:
                    handler->string_value("cantonese");
                    break;
                case Value_retinaspecialists:
                    handler->string_value("retinaspecialists");
                    break;
                case Value_foodbanks:
                    handler->string_value("foodbanks");
                    break;
                case Value_metrostations:
                    handler->string_value("metrostations");
                    break;
                case Value_trafficticketinglaw:
                    handler->string_value("trafficticketinglaw");
                    break;
                case Value_businessfinancing:
                    handler->string_value("businessfinancing");
                    break;
                case Value_matchmakers:
                    handler->string_value("matchmakers");
                    break;
                case Value_food_court:
                    handler->string_value("food_court");
                    break;
                case Value_teambuilding:
                    handler->string_value("teambuilding");
                    break;
                case Value_visitorcenters:
                    handler->string_value("visitorcenters");
                    break;
                case Value_suppliesrestaurant:
                    handler->string_value("suppliesrestaurant");
                    break;
                case Value_ticketsales:
                    handler->string_value("ticketsales");
                    break;
                case Value_religiousitems:
                    handler->string_value("religiousitems");
                    break;
                case Value_lasertag:
                    handler->string_value("lasertag");
                    break;
                case Value_tabletopgames:
                    handler->string_value("tabletopgames");
                    break;
                case Value_courtreporters:
                    handler->string_value("courtreporters");
                    break;
                case Value_pettransport:
                    handler->string_value("pettransport");
                    break;
                case Value_autodamageassessment:
                    handler->string_value("autodamageassessment");
                    break;
                case Value_childbirthedu:
                    handler->string_value("childbirthedu");
                    break;
                case Value_knifesharpening:
                    handler->string_value("knifesharpening");
                    break;
                case Value_acaibowls:
                    handler->string_value("acaibowls");
                    break;
                case Value_pastashops:
                    handler->string_value("pastashops");
                    break;
                case Value_persian:
                    handler->string_value("persian");
                    break;
                case Value_bustours:
                    handler->string_value("bustours");
                    break;
                case Value_taiwanese:
                    handler->string_value("taiwanese");
                    break;
                case Value_boattours:
                    handler->string_value("boattours");
                    break;
                case Value_serbocroatian:
                    handler->string_value("serbocroatian");
                    break;
                case Value_usedbooks:
                    handler->string_value("usedbooks");
                    break;
                case Value_pianostores:
                    handler->string_value("pianostores");
                    break;
                case Value_mobiledentrepair:
                    handler->string_value("mobiledentrepair");
                    break;
                case Value_clockrepair:
                    handler->string_value("clockrepair");
                    break;
                case Value_valetservices:
                    handler->string_value("valetservices");
                    break;
                case Value_donationcenter:
                    handler->string_value("donationcenter");
                    break;
                case Value_szechuan:
                    handler->string_value("szechuan");
                    break;
                case Value_reststops:
                    handler->string_value("reststops");
                    break;
                case Value_taxidermy:
                    handler->string_value("taxidermy");
                    break;
                case Value_sugaring:
                    handler->string_value("sugaring");
                    break;
                case Value_mongolian:
                    handler->string_value("mongolian");
                    break;
                case Value_basketballcourts:
                    handler->string_value("basketballcourts");
                    break;
                case Value_carauctions:
                    handler->string_value("carauctions");
                    break;
                case Value_rentfurniture:
                    handler->string_value("rentfurniture");
                    break;
                case Value_falafel:
                    handler->string_value("falafel");
                    break;
                case Value_gokarts:
                    handler->string_value("gokarts");
                    break;
                case Value_partycharacters:
                    handler->string_value("partycharacters");
                    break;
                case Value_opera:
                    handler->string_value("opera");
                    break;
                case Value_clowns:
                    handler->string_value("clowns");
                    break;
                case Value_vascularmedicine:
                    handler->string_value("vascularmedicine");
                    break;
                case Value_tenantlaw:
                    handler->string_value("tenantlaw");
                    break;
                case Value_psychicmediums:
                    handler->string_value("psychicmediums");
                    break;
                case Value_skate_parks:
                    handler->string_value("skate_parks");
                    break;
                case Value_beergardens:
                    handler->string_value("beergardens");
                    break;
                case Value_fingerprinting:
                    handler->string_value("fingerprinting");
                    break;
                case Value_liceservices:
                    handler->string_value("liceservices");
                    break;
                case Value_speechtraining:
                    handler->string_value("speechtraining");
                    break;
                case Value_spinesurgeons:
                    handler->string_value("spinesurgeons");
                    break;
                case Value_socialsecuritylaw:
                    handler->string_value("socialsecuritylaw");
                    break;
                case Value_emergencyrooms:
                    handler->string_value("emergencyrooms");
                    break;
                case Value_iplaw:
                    handler->string_value("iplaw");
                    break;
                case Value_poolbilliards:
                    handler->string_value("poolbilliards");
                    break;
                case Value_battingcages:
                    handler->string_value("battingcages");
                    break;
                case Value_bouncehouserentals:
                    handler->string_value("bouncehouserentals");
                    break;
                case Value_safetyequipment:
                    handler->string_value("safetyequipment");
                    break;
                case Value_surfshop:
                    handler->string_value("surfshop");
                    break;
                case Value_hotpot:
                    handler->string_value("hotpot");
                    break;
                case Value_healthcoach:
                    handler->string_value("healthcoach");
                    break;
                case Value_colombian:
                    handler->string_value("colombian");
                    break;
                case Value_racetracks:
                    handler->string_value("racetracks");
                    break;
                case Value_ethiopian:
                    handler->string_value("ethiopian");
                    break;
                case Value_dentalhygienists:
                    handler->string_value("dentalhygienists");
                    break;
                case Value_backshop:
                    handler->string_value("backshop");
                    break;
                case Value_cryotherapy:
                    handler->string_value("cryotherapy");
                    break;
                case Value_weddingchappels:
                    handler->string_value("weddingchappels");
                    break;
                case Value_trampoline:
                    handler->string_value("trampoline");
                    break;
                case Value_macarons:
                    handler->string_value("macarons");
                    break;
                case Value_adoptionservices:
                    handler->string_value("adoptionservices");
                    break;
                case Value_acnetreatment:
                    handler->string_value("acnetreatment");
                    break;
                case Value_prenatal:
                    handler->string_value("prenatal");
                    break;
                case Value_massage_schools:
                    handler->string_value("massage_schools");
                    break;
                case Value_contractlaw:
                    handler->string_value("contractlaw");
                    break;
                case Value_jetskis:
                    handler->string_value("jetskis");
                    break;
                case Value_medicalfoot:
                    handler->string_value("medicalfoot");
                    break;
                case Value_productdesign:
                    handler->string_value("productdesign");
                    break;
                case Value_homeownerassociation:
                    handler->string_value("homeownerassociation");
                    break;
                case Value_yelpevents:
                    handler->string_value("yelpevents");
                    break;
                case Value_tuina:
                    handler->string_value("tuina");
                    break;
                case Value_sailing:
                    handler->string_value("sailing");
                    break;
                case Value_dietitians:
                    handler->string_value("dietitians");
                    break;
                case Value_hospitalists:
                    handler->string_value("hospitalists");
                    break;
                case Value_foodtours:
                    handler->string_value("foodtours");
                    break;
                case Value_autosecurity:
                    handler->string_value("autosecurity");
                    break;
                case Value_hauntedhouses:
                    handler->string_value("hauntedhouses");
                    break;
                case Value_wildlifehunting:
                    handler->string_value("wildlifehunting");
                    break;
                case Value_herbalshops:
                    handler->string_value("herbalshops");
                    break;
                case Value_clothingrental:
                    handler->string_value("clothingrental");
                    break;
                case Value_tableware:
                    handler->string_value("tableware");
                    break;
                case Value_brewingsupplies:
                    handler->string_value("brewingsupplies");
                    break;
                case Value_embassy:
                    handler->string_value("embassy");
                    break;
                case Value_baseballfields:
                    handler->string_value("baseballfields");
                    break;
                case Value_concept_shops:
                    handler->string_value("concept_shops");
                    break;
                case Value_furclothing:
                    handler->string_value("furclothing");
                    break;
                case Value_linens:
                    handler->string_value("linens");
                    break;
                case Value_himalayan:
                    handler->string_value("himalayan");
                    break;
                case Value_rock_climbing:
                    handler->string_value("rock_climbing");
                    break;
                case Value_popupshops:
                    handler->string_value("popupshops");
                    break;
                case Value_gunsmith:
                    handler->string_value("gunsmith");
                    break;
                case Value_publicplazas:
                    handler->string_value("publicplazas");
                    break;
                case Value_argentine:
                    handler->string_value("argentine");
                    break;
                case Value_discgolf:
                    handler->string_value("discgolf");
                    break;
                case Value_hockeyequipment:
                    handler->string_value("hockeyequipment");
                    break;
                case Value_golfcartdealers:
                    handler->string_value("golfcartdealers");
                    break;
                case Value_passportvisaservices:
                    handler->string_value("passportvisaservices");
                    break;
                case Value_artrestoration:
                    handler->string_value("artrestoration");
                    break;
                case Value_ayurveda:
                    handler->string_value("ayurveda");
                    break;
                case Value_artmuseums:
                    handler->string_value("artmuseums");
                    break;
                case Value_localfishstores:
                    handler->string_value("localfishstores");
                    break;
                case Value_emergencypethospital:
                    handler->string_value("emergencypethospital");
                    break;
                case Value_bettingcenters:
                    handler->string_value("bettingcenters");
                    break;
                case Value_housesitters:
                    handler->string_value("housesitters");
                    break;
                case Value_backflowservices:
                    handler->string_value("backflowservices");
                    break;
                case Value_hazardouswastedisposal:
                    handler->string_value("hazardouswastedisposal");
                    break;
                case Value_waterstores:
                    handler->string_value("waterstores");
                    break;
                case Value_afghani:
                    handler->string_value("afghani");
                    break;
                case Value_polish:
                    handler->string_value("polish");
                    break;
                case Value_hydroponics:
                    handler->string_value("hydroponics");
                    break;
                case Value_fondue:
                    handler->string_value("fondue");
                    break;
                case Value_pumpkinpatches:
                    handler->string_value("pumpkinpatches");
                    break;
                case Value_skydiving:
                    handler->string_value("skydiving");
                    break;
                case Value_pickyourown:
                    handler->string_value("pickyourown");
                    break;
                case Value_colonics:
                    handler->string_value("colonics");
                    break;
                case Value_holidaydecorations:
                    handler->string_value("holidaydecorations");
                    break;
                case Value_sextherapists:
                    handler->string_value("sextherapists");
                    break;
                case Value_xmasmarkets:
                    handler->string_value("xmasmarkets");
                    break;
                case Value_behavioranalysts:
                    handler->string_value("behavioranalysts");
                    break;
                case Value_paintyourownpottery:
                    handler->string_value("paintyourownpottery");
                    break;
                case Value_ranches:
                    handler->string_value("ranches");
                    break;
                case Value_tradclothing:
                    handler->string_value("tradclothing");
                    break;
                case Value_dancewear:
                    handler->string_value("dancewear");
                    break;
                case Value_attractionfarms:
                    handler->string_value("attractionfarms");
                    break;
                case Value_indoor_playcenter:
                    handler->string_value("indoor_playcenter");
                    break;
                case Value_3dprinting:
                    handler->string_value("3dprinting");
                    break;
                case Value_motodealers:
                    handler->string_value("motodealers");
                    break;
                case Value_oliveoil:
                    handler->string_value("oliveoil");
                    break;
                case Value_bookbinding:
                    handler->string_value("bookbinding");
                    break;
                case Value_dominican:
                    handler->string_value("dominican");
                    break;
                case Value_fengshui:
                    handler->string_value("fengshui");
                    break;
                case Value_russian:
                    handler->string_value("russian");
                    break;
                case Value_puertorican:
                    handler->string_value("puertorican");
                    break;
                case Value_bodycontouring:
                    handler->string_value("bodycontouring");
                    break;
                case Value_waterparks:
                    handler->string_value("waterparks");
                    break;
                case Value_atvrentals:
                    handler->string_value("atvrentals");
                    break;
                case Value_hindu_temples:
                    handler->string_value("hindu_temples");
                    break;
                case Value_raw_food:
                    handler->string_value("raw_food");
                    break;
                case Value_basque:
                    handler->string_value("basque");
                    break;
                case Value_hydrotherapy:
                    handler->string_value("hydrotherapy");
                    break;
                case Value_airportlounges:
                    handler->string_value("airportlounges");
                    break;
                case Value_arabian:
                    handler->string_value("arabian");
                    break;
                case Value_muaythai:
                    handler->string_value("muaythai");
                    break;
                case Value_marchingbands:
                    handler->string_value("marchingbands");
                    break;
                case Value_challengecourses:
                    handler->string_value("challengecourses");
                    break;
                case Value_placentaencapsulation:
                    handler->string_value("placentaencapsulation");
                    break;
                case Value_empanadas:
                    handler->string_value("empanadas");
                    break;
                case Value_healthretreats:
                    handler->string_value("healthretreats");
                    break;
                case Value_brewpubs:
                    handler->string_value("brewpubs");
                    break;
                case Value_junkyards:
                    handler->string_value("junkyards");
                    break;
                case Value_solarpanelcleaning:
                    handler->string_value("solarpanelcleaning");
                    break;
                case Value_motorepairs:
                    handler->string_value("motorepairs");
                    break;
                case Value_audiovisualequipmentrental:
                    handler->string_value("audiovisualequipmentrental");
                    break;
                case Value_canteen:
                    handler->string_value("canteen");
                    break;
                case Value_emergencymedicine:
                    handler->string_value("emergencymedicine");
                    break;
                case Value_homeopathic:
                    handler->string_value("homeopathic");
                    break;
                case Value_patentlaw:
                    handler->string_value("patentlaw");
                    break;
                case Value_petcremation:
                    handler->string_value("petcremation");
                    break;
                case Value_disabilitylaw:
                    handler->string_value("disabilitylaw");
                    break;
                case Value_alternativemedicine:
                    handler->string_value("alternativemedicine");
                    break;
                case Value_privatejetcharter:
                    handler->string_value("privatejetcharter");
                    break;
                case Value_seasonaldecorservices:
                    handler->string_value("seasonaldecorservices");
                    break;
                case Value_circuittraininggyms:
                    handler->string_value("circuittraininggyms");
                    break;
                case Value_civiccenter:
                    handler->string_value("civiccenter");
                    break;
                case Value_qigong:
                    handler->string_value("qigong");
                    break;
                case Value_shoeshine:
                    handler->string_value("shoeshine");
                    break;
                case Value_militarysurplus:
                    handler->string_value("militarysurplus");
                    break;
                case Value_floatspa:
                    handler->string_value("floatspa");
                    break;
                case Value_memorycare:
                    handler->string_value("memorycare");
                    break;
                case Value_eroticmassage:
                    handler->string_value("eroticmassage");
                    break;
                case Value_sud_ouest:
                    handler->string_value("sud_ouest");
                    break;
                case Value_easterngerman:
                    handler->string_value("easterngerman");
                    break;
                case Value_motorcycle_rental:
                    handler->string_value("motorcycle_rental");
                    break;
                case Value_calligraphy:
                    handler->string_value("calligraphy");
                    break;
                case Value_donairs:
                    handler->string_value("donairs");
                    break;
                case Value_ivhydration:
                    handler->string_value("ivhydration");
                    break;
                case Value_bangladeshi:
                    handler->string_value("bangladeshi");
                    break;
                case Value_publicadjusters:
                    handler->string_value("publicadjusters");
                    break;
                case Value_whiskeybars:
                    handler->string_value("whiskeybars");
                    break;
                case Value_tikibars:
                    handler->string_value("tikibars");
                    break;
                case Value_birdshops:
                    handler->string_value("birdshops");
                    break;
                case Value_publicart:
                    handler->string_value("publicart");
                    break;
                case Value_poledancingclasses:
                    handler->string_value("poledancingclasses");
                    break;
                case Value_surfschools:
                    handler->string_value("surfschools");
                    break;
                case Value_evchargingstations:
                    handler->string_value("evchargingstations");
                    break;
                case Value_infectiousdisease:
                    handler->string_value("infectiousdisease");
                    break;
                case Value_golfcartrentals:
                    handler->string_value("golfcartrentals");
                    break;
                case Value_nursingschools:
                    handler->string_value("nursingschools");
                    break;
                case Value_malaysian:
                    handler->string_value("malaysian");
                    break;
                case Value_artspacerentals:
                    handler->string_value("artspacerentals");
                    break;
                case Value_poutineries:
                    handler->string_value("poutineries");
                    break;
                case Value_cabaret:
                    handler->string_value("cabaret");
                    break;
                case Value_digitizingservices:
                    handler->string_value("digitizingservices");
                    break;
                case Value_aircraftrepairs:
                    handler->string_value("aircraftrepairs");
                    break;
                case Value_trafficschools:
                    handler->string_value("trafficschools");
                    break;
                case Value_venezuelan:
                    handler->string_value("venezuelan");
                    break;
                case Value_proctologist:
                    handler->string_value("proctologist");
                    break;
                case Value_austrian:
                    handler->string_value("austrian");
                    break;
                case Value_belgian:
                    handler->string_value("belgian");
                    break;
                case Value_hot_air_balloons:
                    handler->string_value("hot_air_balloons");
                    break;
                case Value_busrental:
                    handler->string_value("busrental");
                    break;
                case Value_aircraftdealers:
                    handler->string_value("aircraftdealers");
                    break;
                case Value_beachequipmentrental:
                    handler->string_value("beachequipmentrental");
                    break;
                case Value_privateschools:
                    handler->string_value("privateschools");
                    break;
                case Value_veteransorganizations:
                    handler->string_value("veteransorganizations");
                    break;
                case Value_alsatian:
                    handler->string_value("alsatian");
                    break;
                case Value_communitygardens:
                    handler->string_value("communitygardens");
                    break;
                case Value_snorkeling:
                    handler->string_value("snorkeling");
                    break;
                case Value_cheerleading:
                    handler->string_value("cheerleading");
                    break;
                case Value_honey:
                    handler->string_value("honey");
                    break;
                case Value_fischbroetchen:
                    handler->string_value("fischbroetchen");
                    break;
                case Value_beachbars:
                    handler->string_value("beachbars");
                    break;
                case Value_conciergemedicine:
                    handler->string_value("conciergemedicine");
                    break;
                case Value_tubing:
                    handler->string_value("tubing");
                    break;
                case Value_cideries:
                    handler->string_value("cideries");
                    break;
                case Value_horseracing:
                    handler->string_value("horseracing");
                    break;
                case Value_customsbrokers:
                    handler->string_value("customsbrokers");
                    break;
                case Value_provencal:
                    handler->string_value("provencal");
                    break;
                case Value_waldorfschools:
                    handler->string_value("waldorfschools");
                    break;
                case Value_newmexican:
                    handler->string_value("newmexican");
                    break;
                case Value_scottish:
                    handler->string_value("scottish");
                    break;
                case Value_cannabisreferrals:
                    handler->string_value("cannabisreferrals");
                    break;
                case Value_pianobars:
                    handler->string_value("pianobars");
                    break;
                case Value_generalfestivals:
                    handler->string_value("generalfestivals");
                    break;
                case Value_fencing:
                    handler->string_value("fencing");
                    break;
                case Value_champagne_bars:
                    handler->string_value("champagne_bars");
                    break;
                case Value_gametruckrental:
                    handler->string_value("gametruckrental");
                    break;
                case Value_diveshops:
                    handler->string_value("diveshops");
                    break;
                case Value_driveintheater:
                    handler->string_value("driveintheater");
                    break;
                case Value_carshares:
                    handler->string_value("carshares");
                    break;
                case Value_palatine:
                    handler->string_value("palatine");
                    break;
                case Value_childrensmuseums:
                    handler->string_value("childrensmuseums");
                    break;
                case Value_trains:
                    handler->string_value("trains");
                    break;
                case Value_gerontologist:
                    handler->string_value("gerontologist");
                    break;
                case Value_streetart:
                    handler->string_value("streetart");
                    break;
                case Value_zipline:
                    handler->string_value("zipline");
                    break;
                case Value_caricatures:
                    handler->string_value("caricatures");
                    break;
                case Value_teppanyaki:
                    handler->string_value("teppanyaki");
                    break;
                case Value_underseamedicine:
                    handler->string_value("underseamedicine");
                    break;
                case Value_cambodian:
                    handler->string_value("cambodian");
                    break;
                case Value_animalholistic:
                    handler->string_value("animalholistic");
                    break;
                case Value_oriental:
                    handler->string_value("oriental");
                    break;
                case Value_wok:
                    handler->string_value("wok");
                    break;
                case Value_popuprestaurants:
                    handler->string_value("popuprestaurants");
                    break;
                case Value_fishmonger:
                    handler->string_value("fishmonger");
                    break;
                case Value_schnitzel:
                    handler->string_value("schnitzel");
                    break;
                case Value_dutyfreeshops:
                    handler->string_value("dutyfreeshops");
                    break;
                case Value_frozenfood:
                    handler->string_value("frozenfood");
                    break;
                case Value_skiing:
                    handler->string_value("skiing");
                    break;
                case Value_airsoft:
                    handler->string_value("airsoft");
                    break;
                case Value_preventivemedicine:
                    handler->string_value("preventivemedicine");
                    break;
                case Value_biketours:
                    handler->string_value("biketours");
                    break;
                case Value_winetasteclasses:
                    handler->string_value("winetasteclasses");
                    break;
                case Value_baden:
                    handler->string_value("baden");
                    break;
                case Value_stripclubs:
                    handler->string_value("stripclubs");
                    break;
                case Value_northerngerman:
                    handler->string_value("northerngerman");
                    break;
                case Value_golfshops:
                    handler->string_value("golfshops");
                    break;
                case Value_icedelivery:
                    handler->string_value("icedelivery");
                    break;
                case Value_laotian:
                    handler->string_value("laotian");
                    break;
                case Value_beertours:
                    handler->string_value("beertours");
                    break;
                case Value_farriers:
                    handler->string_value("farriers");
                    break;
                case Value_ferries:
                    handler->string_value("ferries");
                    break;
                case Value_stripteasedancers:
                    handler->string_value("stripteasedancers");
                    break;
                case Value_aerialfitness:
                    handler->string_value("aerialfitness");
                    break;
                case Value_haitian:
                    handler->string_value("haitian");
                    break;
                case Value_aerialtours:
                    handler->string_value("aerialtours");
                    break;
                case Value_homelessshelters:
                    handler->string_value("homelessshelters");
                    break;
                case Value_pethospice:
                    handler->string_value("pethospice");
                    break;
                case Value_bikesharing:
                    handler->string_value("bikesharing");
                    break;
                case Value_bartendingschools:
                    handler->string_value("bartendingschools");
                    break;
                case Value_scooterrentals:
                    handler->string_value("scooterrentals");
                    break;
                case Value_observatories:
                    handler->string_value("observatories");
                    break;
                case Value_sikhtemples:
                    handler->string_value("sikhtemples");
                    break;
                case Value_kiteboarding:
                    handler->string_value("kiteboarding");
                    break;
                case Value_psychoanalysts:
                    handler->string_value("psychoanalysts");
                    break;
                case Value_speakeasies:
                    handler->string_value("speakeasies");
                    break;
                case Value_hessian:
                    handler->string_value("hessian");
                    break;
                case Value_corsican:
                    handler->string_value("corsican");
                    break;
                case Value_communitybookbox:
                    handler->string_value("communitybookbox");
                    break;
                case Value_dinnertheater:
                    handler->string_value("dinnertheater");
                    break;
                case Value_cannabiscollective:
                    handler->string_value("cannabiscollective");
                    break;
                case Value_astrologers:
                    handler->string_value("astrologers");
                    break;
                case Value_scavengerhunts:
                    handler->string_value("scavengerhunts");
                    break;
                case Value_indonesian:
                    handler->string_value("indonesian");
                    break;
                case Value_bocceball:
                    handler->string_value("bocceball");
                    break;
                case Value_pettingzoos:
                    handler->string_value("pettingzoos");
                    break;
                case Value_entertainmentlaw:
                    handler->string_value("entertainmentlaw");
                    break;
                case Value_emstraining:
                    handler->string_value("emstraining");
                    break;
                case Value_whalewatchingtours:
                    handler->string_value("whalewatchingtours");
                    break;
                case Value_childproofing:
                    handler->string_value("childproofing");
                    break;
                case Value_marketstalls:
                    handler->string_value("marketstalls");
                    break;
                case Value_animalphysicaltherapy:
                    handler->string_value("animalphysicaltherapy");
                    break;
                case Value_airportterminals:
                    handler->string_value("airportterminals");
                    break;
                case Value_vocalcoach:
                    handler->string_value("vocalcoach");
                    break;
                case Value_indoorlandscaping:
                    handler->string_value("indoorlandscaping");
                    break;
                case Value_arttours:
                    handler->string_value("arttours");
                    break;
                case Value_friterie:
                    handler->string_value("friterie");
                    break;
                case Value_mobile_home_repair:
                    handler->string_value("mobile_home_repair");
                    break;
                case Value_shanghainese:
                    handler->string_value("shanghainese");
                    break;
                case Value_izakaya:
                    handler->string_value("izakaya");
                    break;
                case Value_armenian:
                    handler->string_value("armenian");
                    break;
                case Value_flowersonly:
                    handler->string_value("flowersonly");
                    break;
                case Value_cigarbars:
                    handler->string_value("cigarbars");
                    break;
                case Value_scandinavian:
                    handler->string_value("scandinavian");
                    break;
                case Value_ethnicmarkets:
                    handler->string_value("ethnicmarkets");
                    break;
                case Value_hepatologists:
                    handler->string_value("hepatologists");
                    break;
                case Value_choirs:
                    handler->string_value("choirs");
                    break;
                case Value_otologists:
                    handler->string_value("otologists");
                    break;
                case Value_eatertainment:
                    handler->string_value("eatertainment");
                    break;
                case Value_duplicationservices:
                    handler->string_value("duplicationservices");
                    break;
                case Value_halotherapy:
                    handler->string_value("halotherapy");
                    break;
                case Value_duischools:
                    handler->string_value("duischools");
                    break;
                case Value_kombucha:
                    handler->string_value("kombucha");
                    break;
                case Value_registry_office:
                    handler->string_value("registry_office");
                    break;
                case Value_hungarian:
                    handler->string_value("hungarian");
                    break;
                case Value_skischools:
                    handler->string_value("skischools");
                    break;
                case Value_props:
                    handler->string_value("props");
                    break;
                case Value_countrydancehalls:
                    handler->string_value("countrydancehalls");
                    break;
                case Value_neurotologists:
                    handler->string_value("neurotologists");
                    break;
                case Value_petinsurance:
                    handler->string_value("petinsurance");
                    break;
                case Value_outdoormovies:
                    handler->string_value("outdoormovies");
                    break;
                case Value_publicmarkets:
                    handler->string_value("publicmarkets");
                    break;
                case Value_tradefairs:
                    handler->string_value("tradefairs");
                    break;
                case Value_bubblesoccer:
                    handler->string_value("bubblesoccer");
                    break;
                case Value_phlebologists:
                    handler->string_value("phlebologists");
                    break;
                case Value_teachersupplies:
                    handler->string_value("teachersupplies");
                    break;
                case Value_architecturaltours:
                    handler->string_value("architecturaltours");
                    break;
                case Value_shavedsnow:
                    handler->string_value("shavedsnow");
                    break;
                case Value_badminton:
                    handler->string_value("badminton");
                    break;
                case Value_habilitativeservices:
                    handler->string_value("habilitativeservices");
                    break;
                case Value_busstations:
                    handler->string_value("busstations");
                    break;
                case Value_foodsafety:
                    handler->string_value("foodsafety");
                    break;
                case Value_kitchenincubators:
                    handler->string_value("kitchenincubators");
                    break;
                case Value_flyboarding:
                    handler->string_value("flyboarding");
                    break;
                case Value_pedicabs:
                    handler->string_value("pedicabs");
                    break;
                case Value_planetarium:
                    handler->string_value("planetarium");
                    break;
                case Value_themedcafes:
                    handler->string_value("themedcafes");
                    break;
                case Value_fueldocks:
                    handler->string_value("fueldocks");
                    break;
                case Value_sophrologists:
                    handler->string_value("sophrologists");
                    break;
                case Value_freediving:
                    handler->string_value("freediving");
                    break;
                case Value_milkshakebars:
                    handler->string_value("milkshakebars");
                    break;
                case Value_toxicologists:
                    handler->string_value("toxicologists");
                    break;
                case Value_lyonnais:
                    handler->string_value("lyonnais");
                    break;
                case Value_geneticists:
                    handler->string_value("geneticists");
                    break;
                case Value_virtualrealitycenters:
                    handler->string_value("virtualrealitycenters");
                    break;
                case Value_photoclasses:
                    handler->string_value("photoclasses");
                    break;
                case Value_hanggliding:
                    handler->string_value("hanggliding");
                    break;
                case Value_municipality:
                    handler->string_value("municipality");
                    break;
                case Value_reptileshops:
                    handler->string_value("reptileshops");
                    break;
                case Value_carousels:
                    handler->string_value("carousels");
                    break;
                case Value_singaporean:
                    handler->string_value("singaporean");
                    break;
                case Value_oxygenbars:
                    handler->string_value("oxygenbars");
                    break;
                case Value_squash:
                    handler->string_value("squash");
                    break;
                case Value_forestry:
                    handler->string_value("forestry");
                    break;
                case Value_burmese:
                    handler->string_value("burmese");
                    break;
                case Value_lancenters:
                    handler->string_value("lancenters");
                    break;
                case Value_sledding:
                    handler->string_value("sledding");
                    break;
                case Value_playsets:
                    handler->string_value("playsets");
                    break;
                case Value_racingexperience:
                    handler->string_value("racingexperience");
                    break;
                case Value_australian:
                    handler->string_value("australian");
                    break;
                case Value_srilankan:
                    handler->string_value("srilankan");
                    break;
                case Value_rotisserie_chicken:
                    handler->string_value("rotisserie_chicken");
                    break;
                case Value_tabac:
                    handler->string_value("tabac");
                    break;
                case Value_gliding:
                    handler->string_value("gliding");
                    break;
                case Value_immunodermatologists:
                    handler->string_value("immunodermatologists");
                    break;
                case Value_ukrainian:
                    handler->string_value("ukrainian");
                    break;
                case Value_czech:
                    handler->string_value("czech");
                    break;
                case Value_sportspsychologists:
                    handler->string_value("sportspsychologists");
                    break;
                case Value_barcrawl:
                    handler->string_value("barcrawl");
                    break;
                case Value_drivethrubars:
                    handler->string_value("drivethrubars");
                    break;
                case Value_honduran:
                    handler->string_value("honduran");
                    break;
                case Value_neuropathologists:
                    handler->string_value("neuropathologists");
                    break;
                case Value_supperclubs:
                    handler->string_value("supperclubs");
                    break;
                case Value_baguettes:
                    handler->string_value("baguettes");
                    break;
                case Value_sommelierservices:
                    handler->string_value("sommelierservices");
                    break;
                case Value_syrian:
                    handler->string_value("syrian");
                    break;
                case Value_parasailing:
                    handler->string_value("parasailing");
                    break;
                case Value_sunglasses:
                    handler->string_value("sunglasses");
                    break;
                case Value_rodeo:
                    handler->string_value("rodeo");
                    break;
                case Value_rhinelandian:
                    handler->string_value("rhinelandian");
                    break;
                case Value_egyptian:
                    handler->string_value("egyptian");
                    break;
                case Value_triviahosts:
                    handler->string_value("triviahosts");
                    break;
                case Value_tickets:
                    handler->string_value("tickets");
                    break;
                case Value_cannabistours:
                    handler->string_value("cannabistours");
                    break;
                case Value_youth_club:
                    handler->string_value("youth_club");
                    break;
                case Value_unofficialyelpevents:
                    handler->string_value("unofficialyelpevents");
                    break;
                case Value_interlocksystems:
                    handler->string_value("interlocksystems");
                    break;
                case Value_southafrican:
                    handler->string_value("southafrican");
                    break;
                case Value_partybikerentals:
                    handler->string_value("partybikerentals");
                    break;
                case Value_funfair:
                    handler->string_value("funfair");
                    break;
                case Value_animalassistedtherapy:
                    handler->string_value("animalassistedtherapy");
                    break;
                case Value_beerhall:
                    handler->string_value("beerhall");
                    break;
                case Value_glassblowing:
                    handler->string_value("glassblowing");
                    break;
                case Value_hkcafe:
                    handler->string_value("hkcafe");
                    break;
                case Value_auvergnat:
                    handler->string_value("auvergnat");
                    break;
                case Value_eltern_cafes:
                    handler->string_value("eltern_cafes");
                    break;
                case Value_trinidadian:
                    handler->string_value("trinidadian");
                    break;
                case Value_mountainhuts:
                    handler->string_value("mountainhuts");
                    break;
                case Value_flatbread:
                    handler->string_value("flatbread");
                    break;
                case Value_conveyorsushi:
                    handler->string_value("conveyorsushi");
                    break;
                case Value_potatoes:
                    handler->string_value("potatoes");
                    break;
                case Value_dramaschools:
                    handler->string_value("dramaschools");
                    break;
                case Value_japacurry:
                    handler->string_value("japacurry");
                    break;
                case Value_scootertours:
                    handler->string_value("scootertours");
                    break;
                case Value_reunion:
                    handler->string_value("reunion");
                    break;
                case Value_ultrasoundimagingcenters:
                    handler->string_value("ultrasoundimagingcenters");
                    break;
                case Value_luggagestorage:
                    handler->string_value("luggagestorage");
                    break;
                case Value_carpetdyeing:
                    handler->string_value("carpetdyeing");
                    break;
                case Value_nicaraguan:
                    handler->string_value("nicaraguan");
                    break;
                case Value_kidshairsalons:
                    handler->string_value("kidshairsalons");
                    break;
                case Value_boatpartsandsupplies:
                    handler->string_value("boatpartsandsupplies");
                    break;
                case Value_uzbek:
                    handler->string_value("uzbek");
                    break;
                case Value_ethicgrocery:
                    handler->string_value("ethicgrocery");
                    break;
                case Value_studiotaping:
                    handler->string_value("studiotaping");
                    break;
                case Value_senegalese:
                    handler->string_value("senegalese");
                    break;
                case Value_cablecars:
                    handler->string_value("cablecars");
                    break;
                case Value_bourguignon:
                    handler->string_value("bourguignon");
                    break;
                case Value_taxoffice:
                    handler->string_value("taxoffice");
                    break;
                case Value_saunainstallation:
                    handler->string_value("saunainstallation");
                    break;
                case Value_silentdisco:
                    handler->string_value("silentdisco");
                    break;
                case Value_makerspaces:
                    handler->string_value("makerspaces");
                    break;
                case Value_agriturismi:
                    handler->string_value("agriturismi");
                    break;
                case Value_swissfood:
                    handler->string_value("swissfood");
                    break;
                case Value_bathing_area:
                    handler->string_value("bathing_area");
                    break;
                case Value_hybridcarrepair:
                    handler->string_value("hybridcarrepair");
                    break;
                case Value_lightingstores:
                    handler->string_value("lightingstores");
                    break;
                case Value_nudist:
                    handler->string_value("nudist");
                    break;
                case Value_mystics:
                    handler->string_value("mystics");
                    break;
                case Value_halfwayhouses:
                    handler->string_value("halfwayhouses");
                    break;
                case Value_axethrowing:
                    handler->string_value("axethrowing");
                    break;
                case Value_tastingclasses:
                    handler->string_value("tastingclasses");
                    break;
                case Value_tuscan:
                    handler->string_value("tuscan");
                    break;
                case Value_diyautoshop:
                    handler->string_value("diyautoshop");
                    break;
                case Value_clubcrawl:
                    handler->string_value("clubcrawl");
                    break;
                case Value_nicois:
                    handler->string_value("nicois");
                    break;
                case Value_aestheticians:
                    handler->string_value("aestheticians");
                    break;
                case Value_mohels:
                    handler->string_value("mohels");
                    break;
                case Value_bulgarian:
                    handler->string_value("bulgarian");
                    break;
                case Value_estheticians:
                    handler->string_value("estheticians");
                    break;
                case Value_catalan:
                    handler->string_value("catalan");
                    break;
                case Value_service_stations:
                    handler->string_value("service_stations");
                    break;
                case Value_experiences:
                    handler->string_value("experiences");
                    break;
                case Value_record_labels:
                    handler->string_value("record_labels");
                    break;
                case Value_parklets:
                    handler->string_value("parklets");
                    break;
                case Value_eastern_european:
                    handler->string_value("eastern_european");
                    break;
                case Value_organdonorservices:
                    handler->string_value("organdonorservices");
                    break;
                case Value_napoletana:
                    handler->string_value("napoletana");
                    break;
                case Value_bikeparking:
                    handler->string_value("bikeparking");
                    break;
                case Value_kitchensupplies:
                    handler->string_value("kitchensupplies");
                    break;
                case Value_hakka:
                    handler->string_value("hakka");
                    break;
                case Value_sicilian:
                    handler->string_value("sicilian");
                    break;
                case Value_hotsprings:
                    handler->string_value("hotsprings");
                    break;
                case Value_ateliers:
                    handler->string_value("ateliers");
                    break;
                case Value_franconian:
                    handler->string_value("franconian");
                    break;
                case Value_mistingsystemservices:
                    handler->string_value("mistingsystemservices");
                    break;
                case Value_spermclinic:
                    handler->string_value("spermclinic");
                    break;
                case Value_jewish:
                    handler->string_value("jewish");
                    break;
                case Value_trattorie:
                    handler->string_value("trattorie");
                    break;
                case Value_gluhwein:
                    handler->string_value("gluhwein");
                    break;
                case Value_georgian:
                    handler->string_value("georgian");
                    break;
                case Value_watertaxis:
                    handler->string_value("watertaxis");
                    break;
                case Value_romanian:
                    handler->string_value("romanian");
                    break;
                case Value_mauritius:
                    handler->string_value("mauritius");
                    break;
                case Value_bungeejumping:
                    handler->string_value("bungeejumping");
                    break;
                case Value_dentalhygeiniststorefront:
                    handler->string_value("dentalhygeiniststorefront");
                    break;
                case Value_petwasteremoval:
                    handler->string_value("petwasteremoval");
                    break;
                case Value_israeli:
                    handler->string_value("israeli");
                    break;
                case Value_gamemeat:
                    handler->string_value("gamemeat");
                    break;
                case Value_snuggleservices:
                    handler->string_value("snuggleservices");
                    break;
                case Value_stockings:
                    handler->string_value("stockings");
                    break;
                case Value_beachvolleyball:
                    handler->string_value("beachvolleyball");
                    break;
                case Value_gemstonesandminerals:
                    handler->string_value("gemstonesandminerals");
                    break;
                case Value_sugarshacks:
                    handler->string_value("sugarshacks");
                    break;
                case Value_guamanian:
                    handler->string_value("guamanian");
                    break;
                case Value_circusschools:
                    handler->string_value("circusschools");
                    break;
                case Value_chimneycakes:
                    handler->string_value("chimneycakes");
                    break;
                case Value_cheesetastingclasses:
                    handler->string_value("cheesetastingclasses");
                    break;
                case Value_bikeshop:
                    handler->string_value("bikeshop");
                    break;
                case Value_drycleaninglaundry:
                    handler->string_value("drycleaninglaundry");
                    break;
                case Value_flemish:
                    handler->string_value("flemish");
                    break;
                case Value_hainan:
                    handler->string_value("hainan");
                    break;
                case Value_slovakian:
                    handler->string_value("slovakian");
                    break;
                case Value_aviationservices:
                    handler->string_value("aviationservices");
                    break;
                case Value_bicyclepaths:
                    handler->string_value("bicyclepaths");
                    break;
                case Value_ethnicgrocery:
                    handler->string_value("ethnicgrocery");
                    break;
                case Value_ceremonialclothing:
                    handler->string_value("ceremonialclothing");
                    break;
                case Value_bikerepair:
                    handler->string_value("bikerepair");
                    break;
                case Value_bobsledding:
                    handler->string_value("bobsledding");
                    break;
                case Value_electricitysuppliers:
                    handler->string_value("electricitysuppliers");
                    break;
                case Value_berrichon:
                    handler->string_value("berrichon");
                    break;
                case Value_iberian:
                    handler->string_value("iberian");
                    break;
                case Value_sardinian:
                    handler->string_value("sardinian");
                    break;
                case Value_shoppingpassages:
                    handler->string_value("shoppingpassages");
                    break;
                case Value_danish:
                    handler->string_value("danish");
                    break;
                case Value_bulkbilling:
                    handler->string_value("bulkbilling");
                    break;
                case Value_volleyball:
                    handler->string_value("volleyball");
                    break;
                case Value_watersuppliers:
                    handler->string_value("watersuppliers");
                    break;
                case Value_zorbing:
                    handler->string_value("zorbing");
                    break;
                case Value_apartmentagents:
                    handler->string_value("apartmentagents");
                    break;
                case Value_dentalhygienistsmobile:
                    handler->string_value("dentalhygienistsmobile");
                    break;
                case Value_drones:
                    handler->string_value("drones");
                    break;
                case Value_vermouthbars:
                    handler->string_value("vermouthbars");
                    break;
                case Value_pubfood:
                    handler->string_value("pubfood");
                    break;
                case Value_coffeeshops:
                    handler->string_value("coffeeshops");
                    break;
                case Value_swedish:
                    handler->string_value("swedish");
                    break;
                case Value_cypriot:
                    handler->string_value("cypriot");
                    break;
                case Value_calabrian:
                    handler->string_value("calabrian");
                    break;
                case Value_piadina:
                    handler->string_value("piadina");
                    break;
                case Value_karaokerental:
                    handler->string_value("karaokerental");
                    break;
                case Value_naturalgassuppliers:
                    handler->string_value("naturalgassuppliers");
                    break;
                case Value_roman:
                    handler->string_value("roman");
                    break;
                case Value_hotel_bar:
                    handler->string_value("hotel_bar");
                    break;
                case Value_norwegian:
                    handler->string_value("norwegian");
                    break;
                case Value_tropicalmedicine:
                    handler->string_value("tropicalmedicine");
                    break;
                case Value_pita:
                    handler->string_value("pita");
                    break;
                case Value_pekinese:
                    handler->string_value("pekinese");
                    break;
                case Value_bicycles:
                    handler->string_value("bicycles");
                    break;
                case Value_dancerestaurants:
                    handler->string_value("dancerestaurants");
                    break;
                case Value_sleepwear:
                    handler->string_value("sleepwear");
                    break;
                case Value_metaldetectorservices:
                    handler->string_value("metaldetectorservices");
                    break;
                case Value_autoelectric:
                    handler->string_value("autoelectric");
                    break;
                case Value_gasstations:
                    handler->string_value("gasstations");
                    break;
                case Value_lawn_bowling:
                    handler->string_value("lawn_bowling");
                    break;
                case Value_yugoslav:
                    handler->string_value("yugoslav");
                    break;
                case Value_czechslovakian:
                    handler->string_value("czechslovakian");
                    break;
                case Value_meatballs:
                    handler->string_value("meatballs");
                    break;
                case Value_arroceria_paella:
                    handler->string_value("arroceria_paella");
                    break;
                case Value_chilean:
                    handler->string_value("chilean");
                    break;
                case Value_modern_australian:
                    handler->string_value("modern_australian");
                    break;
                case Value_newzealand:
                    handler->string_value("newzealand");
                    break;
                case Value_island_pub:
                    handler->string_value("island_pub");
                    break;
                case Value_hunan:
                    handler->string_value("hunan");
                    break;
                case Value_fasil:
                    handler->string_value("fasil");
                    break;
                case Value_osteopaths:
                    handler->string_value("osteopaths");
                    break;
                case Value_handball:
                    handler->string_value("handball");
                    break;
                case Value_specialbikes:
                    handler->string_value("specialbikes");
                    break;
                case Value_jailsandprisons:
                    handler->string_value("jailsandprisons");
                    break;
                case Value_galician:
                    handler->string_value("galician");
                    break;
                case Value_churros:
                    handler->string_value("churros");
                    break;
                case Value_shrines:
                    handler->string_value("shrines");
                    break;
                case Value_opensandwiches:
                    handler->string_value("opensandwiches");
                    break;
                case Value_cheekufta:
                    handler->string_value("cheekufta");
                    break;
                case Value_fuzhou:
                    handler->string_value("fuzhou");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeValue.string_value);
          }
      }

    static YelpCategoryAliasJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static YelpCategoryAliasJSON *from_text(const char *text, bool ignore_extras = false)
      {
        YelpCategoryAliasJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<YelpCategoryAliasJSON>, YelpCategoryAliasJSON *, bool> generator("Type YelpCategoryAlias", ignore_extras);
            parse_json_value(text, "Text for YelpCategoryAliasJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static YelpCategoryAliasJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        YelpCategoryAliasJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<YelpCategoryAliasJSON>, YelpCategoryAliasJSON *, bool> generator("Type YelpCategoryAlias", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class FieldGeneratorValue : public JSONStringGenerator
      {
      protected:
        FieldGeneratorValue(const char *what)
          {
            set_what(what);
          }
        FieldGeneratorValue(void)
          {
          }
        void handle_result(const char *result)
          {
            TypeValueKnownValues known = stringToValue(result);
            TypeValue new_value;
            if (known == Value__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = result;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            handle_result(new_value);
          }
        virtual void handle_result(TypeValue result) = 0;
      };
    class Generator : public FieldGeneratorValue
      {
      protected:
        void handle_result(TypeValue new_value)
          {
            YelpCategoryAliasJSON *result = new YelpCategoryAliasJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(YelpCategoryAliasJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* YELPCATEGORYALIASJSON_H */
