Action()
{

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN={AOS_URL}");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	// Paramter URLs used are (AOS_URL):
	// advantageonlineshopping.com <Port 80)
	// nimbusserver.aos.com <Ports 8000 and 8001>
	
	// Parameter Ports used are:
	// AOS_PORT 8000 or 80
	// AOS_ACCT_PORT 8001 or empty
	
	lr_start_transaction("01_AOS_Home_Page");


	web_url("{AOS_URL}:{AOS_PORT}", 
		"URL=http://{AOS_URL}:{AOS_PORT}/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=http://{AOS_URL}:{AOS_PORT}/css/main.min.css", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", ENDITEM, 
		"Url=http://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=http://{AOS_URL}:{AOS_PORT}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=http://{AOS_URL}:{AOS_PORT}/css/main.min.css", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=http://www.google-analytics.com/r/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=1&dl=http%3A%2F%2F{AOS_URL}%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=IEBAAEAB~&jid=259693439&gjid=621444900&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&_r=1&z=276360492", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer=http://{AOS_URL}:{AOS_PORT}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=http://{AOS_URL}:{AOS_PORT}/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=http://{AOS_URL}:{AOS_PORT}/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1234", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1238", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1235", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1236", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1237", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=2&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=1336317741", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/category_banner_4.png", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4700", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=3&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2Fcategory%2FSpeakers%2F4&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=347314596", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4500", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=4&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2Fproduct%2F20&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=1156862858", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=5&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2Fcategory%2FSpeaker%2F4&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=2005874632", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=6&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=321497195", ENDITEM, 
		"Url=/css/images/category_banner_3.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3200", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=7&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2Fcategory%2FTablets%2F3&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=1643116590", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3102", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3103", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3101", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=8&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2Fproduct%2F16&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=1004336998", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=9&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2Fcategory%2FTablet%2F3&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=1128941753", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=10&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=1936507868", ENDITEM, 
		"Url=/css/images/category_banner_2.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2400", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=11&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2Fcategory%2FHeadphones%2F2&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=142266463", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2201", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=12&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2Fproduct%2F15&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=406373490", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=13&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2Fcategory%2FHeadphone%2F2&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=1356762777", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=14&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=653037235", ENDITEM, 
		"Url=/css/images/category_banner_5.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5505", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=15&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2Fcategory%2FMice%2F5&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=840738254", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5800", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5900", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=16&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2Fproduct%2F29&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=1015158186", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=17&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2Fcategory%2FMic%2F5&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=100145304", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=18&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=322602817", ENDITEM, 
		"Url=/css/images/category_banner_1.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1249", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1250", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=19&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2Fcategory%2FLaptops%2F1&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=1678708688", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=11100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1245", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1800", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=20&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2Fproduct%2F9&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=608058753", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=21&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2Fcategory%2FLaptop%2F1&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=353078723", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=22&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=1122523835", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", "Referer=http://{AOS_URL}:{AOS_PORT}/css/main.min.css", ENDITEM, 
		"Url=http://www.google-analytics.com/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=23&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2FshoppingCart&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=&gjid=&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&z=1001479239", ENDITEM, 
		"Url=http://www.google-analytics.com/r/collect?v=1&_v=j72&a=1490997117&t=pageview&_s=24&dl=http%3A%2F%2F{AOS_URL}%2F&dp=%2F&ul=en-us&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1676x866&vp=1111x526&je=0&_u=KEBAAEAB~&jid=1276019728&gjid=1575228278&cid=1800259915.1547498926&tid=UA-81334227-1&_gid=225846391.1547498926&_r=1&z=663823616", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=68", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://{AOS_URL}:{AOS_PORT}");

	web_url("ALL", 
		"URL=http://{AOS_URL}:{AOS_PORT}/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AOS_URL}:{AOS_PORT}/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ALL_2", 
		"URL=http://{AOS_URL}:{AOS_PORT}/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AOS_URL}:{AOS_PORT}/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("NID=154=Fejse9NzHqe3GZ-eaL-tkYfret-ydRUcyW27E4VSgCD1cs_4Akr4aylDoufdlZyBuNczsZjE-pNjndopbRDRR-sGT4Ra7o3AYp_pNCRoBnR3BijvAJChVuuK7MO9LMp4zNWBJGy0uMj5m6y3OcMxT7SplGR6zVgHrXFPa7zGKUE; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2019-1-14-17; DOMAIN=accounts.google.com");

	web_add_auto_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=durations_metrics,counter:0,load_time_ms:320&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_add_auto_header("Access-Control-Request-Headers", 
		"content-type,soapaction");

	web_add_auto_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"http://{AOS_URL}:{AOS_PORT}");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://{AOS_URL}:{AOS_ACCT_PORT}/accountservice/GetAccountConfigurationRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountConfigurationRequest_2", 
		"URL=http://{AOS_URL}:{AOS_ACCT_PORT}/accountservice/GetAccountConfigurationRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Access-Control-Request-Headers");

	web_revert_auto_header("Access-Control-Request-Method");

	web_add_auto_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_custom_request("GetAccountConfigurationRequest_3", 
		"URL=http://{AOS_URL}:{AOS_ACCT_PORT}/accountservice/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{AOS_URL}:{AOS_PORT}/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("GetAccountConfigurationRequest_4", 
		"URL=http://{AOS_URL}:{AOS_ACCT_PORT}/accountservice/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{AOS_URL}:{AOS_PORT}/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("SOAPAction");

	web_url("categories", 
		"URL=http://{AOS_URL}:{AOS_PORT}/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AOS_URL}:{AOS_PORT}/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=http://{AOS_URL}:{AOS_PORT}/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AOS_URL}:{AOS_PORT}/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data", 
		"URL=http://{AOS_URL}:{AOS_PORT}/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AOS_URL}:{AOS_PORT}/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga=GA1.2.1800259915.1547498926; DOMAIN={AOS_URL}");

	web_add_cookie("_gid=GA1.2.225846391.1547498926; DOMAIN={AOS_URL}");

	web_add_cookie("_gat=1; DOMAIN={AOS_URL}");

	web_revert_auto_header("Origin");

	web_url("popularProducts.json", 
		"URL=http://{AOS_URL}:{AOS_PORT}/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AOS_URL}:{AOS_PORT}/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://{AOS_URL}:{AOS_PORT}/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{AOS_URL}:{AOS_PORT}/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://{AOS_URL}:{AOS_PORT}");
	
	lr_end_transaction("01_AOS_Home_Page", LR_AUTO);


	lr_think_time(5);
	
	lr_start_transaction("02_AOS_Shopping_Cart");


	web_url("attributes", 
		"URL=http://{AOS_URL}:{AOS_PORT}/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AOS_URL}:{AOS_PORT}/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=http://{AOS_URL}:{AOS_PORT}/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{AOS_URL}:{AOS_PORT}/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=http://{AOS_URL}:{AOS_PORT}/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{AOS_URL}:{AOS_PORT}/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("chrome-proxy", 
		"frfr");

	/*Basic streaming flow skeleton:
	//Play the movie from the beginning(the entire movie duration is XXX)
	web_stream_play("ID=1", "PlayingDuration=XXX", LAST);
	//Pause the movie
	web_stream_pause("ID=1","PausingDuration=XXX",LAST);
	//Stop the movie
	web_stream_stop("ID=1",LAST);*/

	web_stream_open("ID=1", "URL=http://{AOS_URL}:{AOS_PORT}/css/videos/13543361_299823923688824_1410005144_n.mp4", "Protocol=HTTP", LAST);

	web_stream_close("ID=1", LAST);

	web_add_header("Origin", 
		"http://{AOS_URL}:{AOS_PORT}");

	web_url("MostPopularComments", 
		"URL=http://{AOS_URL}:{AOS_PORT}/catalog/api/v1/MostPopularComments", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{AOS_URL}:{AOS_PORT}/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

//	lr_think_time(5);

	web_url("shoppingCart.html", 
		"URL=http://{AOS_URL}:{AOS_PORT}/app/views/shoppingCart.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{AOS_URL}:{AOS_PORT}/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("02_AOS_Shopping_Cart", LR_AUTO);


	return 0;
}