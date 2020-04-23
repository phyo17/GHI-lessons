#Dino Ipsum API

#test API with html format
import requests

url="https://alexnormand-dino-ipsum.p.rapidapi.com" #Endpoint (is specific address)

queryString={"format":"html","words":"30","paragraphs":"3"} #

headers = {
    'x-rapidapi-host': "alexnormand-dino-ipsum.p.rapidapi.com", #host from an API 
    'x-rapidapi-key': "18a0c664b0msh21a008dd1e1d69ep1b2ba4jsn675da4737ae5" #key from an API
}

response = requests.request("GET", url, headers=headers, params=queryString)

print(response.text)