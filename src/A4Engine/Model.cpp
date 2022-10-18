#include <A4Engine/Model.hpp>
#include <A4Engine/ResourceManager.hpp>
#include <A4Engine/SDLppRenderer.hpp>
#include <A4Engine/SDLppTexture.hpp>
#include <A4Engine/Transform.hpp>



//Model::Model(std::shared_ptr<const SDLppTexture> texture) :
//	m_texture(std::move(texture)),
//	m_vertex(std::move(vertex)),
//{
//}
//
//	
//void Model::Draw(SDLppRenderer& renderer, const Transform& transform)
//{
//	assert(vertex.size() == vertex.size());
//	for (std::size_t i = 0; i < vertex.size(); ++i)
//	{
//		const ModelVertex& modelVertex = m_vertex[i];
//		SDL_Vertex& sdlVertex = sdlvertex[i];
//
//		Vector2f transformPosition = transform.TransformPoint(modelVertex.pos);
//		sdlVertex.position = SDL_FPoint{ transformPosition.x, transformPosition.y };
//	}
//
//	if (!m_indices.empty())
//	{
//		SDL_RenderGeometry(renderer.GetHandle(),
//			(m_texture) ? m_texture->GetHandle() : nullptr,
//			sdlvertex.data(), static_cast<int>(sdlvertex.size()),
//			m_indices.data(), static_cast<int>(m_indices.size()));
//	}
//}