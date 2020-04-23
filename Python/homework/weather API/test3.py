#Dino Ipsum API

#test API with json format
import requests

# url="https://alexnormand-dino-ipsum.p.rapidapi.com"
params={"format":"json","words":10,"paragraphs":2}
headers={
    'x-rapidapi-host': "alexnormand-dino-ipsum.p.rapidapi.com",
    'x-rapidapi-key': "18a0c664b0msh21a008dd1e1d69ep1b2ba4jsn675da4737ae5"
}

response=requests.get(f"https://alexnormand-dino-ipsum.p.rapidapi.com",params=params,headers=headers)
print(type(response.json()))
print(response.json())